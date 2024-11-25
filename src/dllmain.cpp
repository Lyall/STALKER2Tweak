#include "stdafx.h"
#include "helper.hpp"

#include "SDK\Engine_classes.hpp"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <inipp/inipp.h>
#include <safetyhook.hpp>

#define spdlog_confparse(var) spdlog::info("Config Parse: {}: {}", #var, var)

HMODULE exeModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Fix details
std::string sFixName = "STALKER2Tweak";
std::string sFixVersion = "0.0.4";
std::filesystem::path sFixPath;

// Ini
inipp::Ini<char> ini;
std::string sConfigFile = sFixName + ".ini";

// Logger
std::shared_ptr<spdlog::logger> logger;
std::string sLogFile = sFixName + ".log";
std::filesystem::path sExePath;
std::string sExeName;

// Aspect ratio / FOV / HUD
std::pair DesktopDimensions = { 0,0 };
const float fPi = 3.1415926535f;
const float fNativeAspect = 1.777777791f;
float fAspectRatio;
float fAspectMultiplier;
float fHUDWidth;
float fHUDWidthOffset;
float fHUDHeight;
float fHUDHeightOffset;

// Ini variables
bool bFixAspect = true;
bool bFixFOV = true;
bool bEnableConsole = true;
bool bFixMouseSens = true;
bool bSkipLogos = true;
bool bSkipPSO = true;
float fViewmodelFOVMulti = 1.00f;

// Variables
int iCurrentResX;
int iCurrentResY;
int iOldResX;
int iOldResY;
SDK::UEngine* Engine = nullptr;
SDK::UInputSettings* InputSettings = nullptr;

void Logging()
{
    // Get path to DLL
    WCHAR dllPath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(thisModule, dllPath, MAX_PATH);
    sFixPath = dllPath;
    sFixPath = sFixPath.remove_filename();

    // Get game name and exe path
    WCHAR exePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(exeModule, exePath, MAX_PATH);
    sExePath = exePath;
    sExeName = sExePath.filename().string();
    sExePath = sExePath.remove_filename();

    // Spdlog initialisation
    try {
        logger = spdlog::basic_logger_st(sFixName.c_str(), sExePath.string() + sLogFile, true);
        spdlog::set_default_logger(logger);
        spdlog::flush_on(spdlog::level::debug);

        spdlog::info("----------");
        spdlog::info("{:s} v{:s} loaded.", sFixName.c_str(), sFixVersion.c_str());
        spdlog::info("----------");
        spdlog::info("Log file: {}", sFixPath.string() + sLogFile);
        spdlog::info("----------");
        spdlog::info("Module Name: {0:s}", sExeName.c_str());
        spdlog::info("Module Path: {0:s}", sExePath.string());
        spdlog::info("Module Address: 0x{0:x}", (uintptr_t)exeModule);
        spdlog::info("Module Timestamp: {0:d}", Memory::ModuleTimestamp(exeModule));
        spdlog::info("----------");
    }
    catch (const spdlog::spdlog_ex& ex) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "Log initialisation failed: " << ex.what() << std::endl;
        FreeLibraryAndExitThread(thisModule, 1);
    }  
}

void Configuration()
{
    // Inipp initialisation
    std::ifstream iniFile(sFixPath.string() + sConfigFile);
    if (!iniFile) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "" << sFixName.c_str() << " v" << sFixVersion.c_str() << " loaded." << std::endl;
        std::cout << "ERROR: Could not locate config file." << std::endl;
        std::cout << "ERROR: Make sure " << sConfigFile.c_str() << " is located in " << sFixPath.string().c_str() << std::endl;
        spdlog::shutdown();
        FreeLibraryAndExitThread(thisModule, 1);
    }
    else {
        spdlog::info("Config file: {}", sFixPath.string() + sConfigFile);
        ini.parse(iniFile);
    }

    // Parse config
    ini.strip_trailing_comments();
    spdlog::info("----------");

    // Load settings from ini
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bFixAspect);
    inipp::get_value(ini.sections["Fix FOV"], "Enabled", bFixFOV);
    inipp::get_value(ini.sections["Developer Console"], "Enabled", bEnableConsole);
    inipp::get_value(ini.sections["Fix Mouse Sensitivity"], "Enabled", bFixMouseSens);
    inipp::get_value(ini.sections["Logo Skip"], "Enabled", bSkipLogos);
    inipp::get_value(ini.sections["Shader Compile Skip"], "Enabled", bSkipPSO);
    inipp::get_value(ini.sections["Viewmodel FOV"], "Multiplier", fViewmodelFOVMulti);      

    // Clamp settings
    Util::clamp_config(fViewmodelFOVMulti, 0.10f, 2.00f);

    // Log ini parse
    spdlog_confparse(bFixAspect);
    spdlog_confparse(bFixFOV);
    spdlog_confparse(bEnableConsole);
    spdlog_confparse(bFixMouseSens);
    spdlog_confparse(bSkipLogos);
    spdlog_confparse(bSkipPSO);
    spdlog_confparse(fViewmodelFOVMulti);

    spdlog::info("----------");
}

void IntroSkip()
{
    if (bSkipLogos) {
        // Skip logos + disclaimers
        std::uint8_t* SkipLogosScanResult = Memory::PatternScan(exeModule, "7D ?? 48 ?? ?? 48 8D ?? ?? 48 ?? ?? 04 49 ?? ?? 48 89 ?? ?? ?? ?? ?? EB ??");
        if (SkipLogosScanResult) {
            spdlog::info("Skip Logos: Address is {:s}+{:x}", sExeName.c_str(), SkipLogosScanResult - (std::uint8_t*)exeModule);
            Memory::PatchBytes(SkipLogosScanResult, "\xEB", 1);
            spdlog::info("Skip Logos: Patched instruction.");
        }
        else {
            spdlog::error("Skip Logos: Pattern scan failed.");
        }
    }
    if (bSkipPSO) {
        std::uint8_t* PsoRet = Memory::PatternScan(exeModule, "41 b0 ? 48 8d 05 ? ? ? ? 48 c7 44 24 ? ? ? ? 00 48 89 44 24 ? 48 89 bc 24 ? ? ? ? e8 ? ? ? ?");
        if (PsoRet) {
            spdlog::info("Skip PSO Warmup: Address is {:s}+{:x}", sExeName.c_str(), PsoRet - (std::uint8_t*)exeModule);
            Memory::PatchBytes(PsoRet + 2, "\x00", 1);
            spdlog::info("Skip PSO Warmup: Patched instruction.");
        }
        else {
            spdlog::error("Skip PSO Warmup: Pattern scan failed.");
        }
    }
}

void UpdateOffsets()
{
    // GObjects
    std::uint8_t* GObjectsScanResult = Memory::PatternScan(exeModule, "48 8B ?? ?? ?? ?? ?? 48 8B ?? ?? 48 8D ?? ?? EB ?? 33 ?? 8B ?? ?? C1 ??");
    if (GObjectsScanResult) {
        spdlog::info("Offsets: GObjects: Address is {:s}+{:x}", sExeName.c_str(), GObjectsScanResult - (std::uint8_t*)exeModule);
        std::uint8_t* GObjectsAddr = Memory::GetAbsolute(GObjectsScanResult + 0x3);
        SDK::Offsets::GObjects = GObjectsAddr - (std::uint8_t*)exeModule;
        spdlog::info("Offsets: GObjects: {:x}", SDK::Offsets::GObjects);
    }
    else {
        spdlog::error("Offsets: GObjects: Pattern scan failed.");
    }

    // GNames
    std::uint8_t* GNamesScanResult = Memory::PatternScan(exeModule, "74 ?? 48 8D ?? ?? ?? ?? ?? EB ?? 48 8D ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? C6 ?? ?? ?? ?? ?? 01");
    if (GNamesScanResult) {
        spdlog::info("Offsets: GNames: Address is {:s}+{:x}", sExeName.c_str(), GNamesScanResult - (std::uint8_t*)exeModule);
        std::uint8_t* GNamesAddr = Memory::GetAbsolute(GNamesScanResult + 0x5);
        SDK::Offsets::GNames = GNamesAddr - (std::uint8_t*)exeModule;
        spdlog::info("Offsets: GNames: {:x}", (uintptr_t)SDK::Offsets::GNames);
    }
    else {
        spdlog::error("Offsets: GNames: Pattern scan failed.");
    }

    // ProcessEvent
    std::uint8_t* ProcessEventScanResult = Memory::PatternScan(exeModule, "40 ?? 56 57 41 ?? 41 ?? 41 ?? 41 ?? 48 81 ?? ?? ?? ?? ?? 48 8D ?? ?? ?? 48 89 ?? ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ?? 48 33 ?? 48 89 ?? ?? ?? ?? ?? 4D ?? ??");
    if (ProcessEventScanResult) {
        spdlog::info("Offsets: ProcessEvent: Address is {:s}+{:x}", sExeName.c_str(), ProcessEventScanResult - (std::uint8_t*)exeModule);
        SDK::Offsets::ProcessEvent = ProcessEventScanResult - (std::uint8_t*)exeModule;
        spdlog::info("Offsets: ProcessEvent: {:x}", (uintptr_t)SDK::Offsets::ProcessEvent);
    }
    else {
        spdlog::error("Offsets: ProcessEvent: Pattern scan failed.");
    }
}

void CalculateAspectRatio(bool bLog)
{
    if (iCurrentResX <= 0 || iCurrentResY <= 0)
        return;

    if (iCurrentResX == 0 || iCurrentResY == 0) {
        spdlog::error("Current Resolution: Resolution invalid, using desktop resolution instead.");
        iCurrentResX = DesktopDimensions.first;
        iCurrentResY = DesktopDimensions.second;
    }

    // Calculate aspect ratio
    fAspectRatio = (float)iCurrentResX / (float)iCurrentResY;
    fAspectMultiplier = fAspectRatio / fNativeAspect;

    // HUD 
    fHUDWidth = (float)iCurrentResY * fNativeAspect;
    fHUDHeight = (float)iCurrentResY;
    fHUDWidthOffset = (float)(iCurrentResX - fHUDWidth) / 2.00f;
    fHUDHeightOffset = 0.00f;
    if (fAspectRatio < fNativeAspect) {
        fHUDWidth = (float)iCurrentResX;
        fHUDHeight = (float)iCurrentResX / fNativeAspect;
        fHUDWidthOffset = 0.00f;
        fHUDHeightOffset = (float)(iCurrentResY - fHUDHeight) / 2.00f;
    }

    // Log details about current resolution
    if (bLog) {
        spdlog::info("----------");
        spdlog::info("Current Resolution: Resolution: {:d}x{:d}", iCurrentResX, iCurrentResY);
        spdlog::info("Current Resolution: fAspectRatio: {}", fAspectRatio);
        spdlog::info("Current Resolution: fAspectMultiplier: {}", fAspectMultiplier);
        spdlog::info("Current Resolution: fHUDWidth: {}", fHUDWidth);
        spdlog::info("Current Resolution: fHUDHeight: {}", fHUDHeight);
        spdlog::info("Current Resolution: fHUDWidthOffset: {}", fHUDWidthOffset);
        spdlog::info("Current Resolution: fHUDHeightOffset: {}", fHUDHeightOffset);
        spdlog::info("----------");
    }
}

void CurrentResolution()
{
    // Grab desktop resolution/aspect just in case
    DesktopDimensions = Util::GetPhysicalDesktopDimensions();
    iCurrentResX = DesktopDimensions.first;
    iCurrentResY = DesktopDimensions.second;
    CalculateAspectRatio(true);

    // Current resolution
    std::uint8_t* CurrentResolutionScanResult = Memory::PatternScan(exeModule, "45 ?? ?? 44 ?? ?? 48 8B ?? E8 ?? ?? ?? ?? 49 ?? ?? E8 ?? ?? ?? ?? 8B ?? ?? ?? ?? ?? BE 01 00 00 00");
    if (CurrentResolutionScanResult) {
        spdlog::info("Current Resolution: Address is {:s}+{:x}", sExeName.c_str(), CurrentResolutionScanResult - (std::uint8_t*)exeModule);
        static SafetyHookMid CurrentResolutionMidHook{};
        CurrentResolutionMidHook = safetyhook::create_mid(CurrentResolutionScanResult,
            [](SafetyHookContext& ctx) {
                int iResX = (int)ctx.rdx;
                int iResY = (int)ctx.r8;

                if (iResX != iCurrentResX || iResY != iCurrentResY) {
                    iCurrentResX = iResX;
                    iCurrentResY = iResY;
                    CalculateAspectRatio(true);
                }
            });
    }
    else {
        spdlog::error("Current Resolution: Pattern scan failed.");
    }
}

void AspectRatioFOV()
{
    if (bFixAspect) {
        // Aspect Ratio / FOV
        std::uint8_t* AspectRatioFOVScanResult = Memory::PatternScan(exeModule, "F3 0F ?? ?? ?? 0F 57 C0 8B ?? ?? ?? ?? ?? 89 ?? ?? 0F ?? ?? ?? ?? ?? ??");
        if (AspectRatioFOVScanResult) {
            spdlog::info("Aspect Ratio/FOV: Address is {:s}+{:x}", sExeName.c_str(), AspectRatioFOVScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid FOVMidHook{};
            FOVMidHook = safetyhook::create_mid(AspectRatioFOVScanResult,
                [](SafetyHookContext& ctx) {
                    // Fix vert- FOV
                    if (fAspectRatio > fNativeAspect)
                        ctx.xmm0.f32[0] = atanf(tanf(ctx.xmm0.f32[0] * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);
                });

            static SafetyHookMid AspectRatioMidHook{};
            AspectRatioMidHook = safetyhook::create_mid(AspectRatioFOVScanResult + 0xE,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect)
                        ctx.rax = *(uint32_t*)&fAspectRatio;
                });
        }
        else {
            spdlog::error("Aspect Ratio/FOV: Pattern scan failed.");
        }

        // Aspect ratio setting
        std::uint8_t* AspectRatioSettingScanResult = Memory::PatternScan(exeModule, "41 ?? ?? ?? 83 ?? FF 74 ?? 49 8B ?? ?? ?? ?? ?? 66 0F ?? ?? ?? ?? ?? ?? ?? 48 ?? 48 ?? ?? 05 48 ?? ?? 44 ?? ?? 74 ??");
        if (AspectRatioSettingScanResult) {
            spdlog::info("Aspect Ratio Setting: Address is {:s}+{:x}", sExeName.c_str(), AspectRatioSettingScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid AspectRatioSettingMidHook{};
            AspectRatioSettingMidHook = safetyhook::create_mid(AspectRatioSettingScanResult + 0x4,
                [](SafetyHookContext& ctx) {
                    ctx.rax = 0; // Force auto
                });
        }
        else {
            spdlog::error("Aspect Ratio Setting: Pattern scan failed.");
        }

        // Viewmodel FOV bug fix
        std::uint8_t* ViewmodelFOVBugScanResult = Memory::PatternScan(exeModule, "F6 ?? ?? 01 48 8B ?? ?? ?? 75 ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? 0F 28 ??");
        if (ViewmodelFOVBugScanResult) {
            spdlog::info("Viewmodel FOV Bug: Address is {:s}+{:x}", sExeName.c_str(), ViewmodelFOVBugScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid ViewmodelFOVBugMidHook{};
            ViewmodelFOVBugMidHook = safetyhook::create_mid(ViewmodelFOVBugScanResult + 0x4,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio > fNativeAspect)
                        ctx.rflags |= (1ULL << 6); // Set ZF
                });
        }
        else {
            spdlog::error("Viewmodel FOV Bug: Pattern scan failed.");
        }
    }

    if (fViewmodelFOVMulti != 1.00f) {
        // Viewmodel FOV
        std::uint8_t* ViewmodelFOVScanResult = Memory::PatternScan(exeModule, "48 8B ?? F3 0F ?? ?? ?? ?? ?? ?? 0F 29 ?? ?? ?? E8 ?? ?? ?? ?? 48 83 ?? ?? ?? ?? ?? 00");
        if (ViewmodelFOVScanResult) {
            spdlog::info("Viewmodel FOV: Address is {:s}+{:x}", sExeName.c_str(), ViewmodelFOVScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid ViewmodelFOVMidHook{};
            ViewmodelFOVMidHook = safetyhook::create_mid(ViewmodelFOVScanResult,
                [](SafetyHookContext& ctx) {
                    ctx.xmm0.f32[0] *= fViewmodelFOVMulti;
                });
        }
        else {
            spdlog::error("Viewmodel FOV: Pattern scan failed.");
        }
    }
}

void Miscellaneous()
{
    if (bFixMouseSens) {
        // X/Y Sensitivity
        // Thanks to Strangorth @ https://www.nexusmods.com/stalker2heartofchornobyl/mods/57?tab=description for explaining the fix for this.
        std::uint8_t* SensitivityXYScanResult = Memory::PatternScan(exeModule, "0F 11 ?? ?? ?? 66 0F ?? ?? 45 0F ?? ?? 45 0F ?? ?? F2 44 ?? ?? ??");
        if (SensitivityXYScanResult) {
            spdlog::info("X/Y Sensitvity: Address is {:s}+{:x}", sExeName.c_str(), SensitivityXYScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid SensitivityXYMidHook{};
            SensitivityXYMidHook = safetyhook::create_mid(SensitivityXYScanResult,
                [](SafetyHookContext& ctx) {
                    // Disable mouse smoothing
                    if (!InputSettings) {
                        InputSettings = (SDK::UInputSettings*)SDK::UInputSettings::GetDefaultObj();
                        if (InputSettings) {
                            InputSettings->bEnableMouseSmoothing = false;
                            spdlog::info("X/Y Sensitivity: Disabled mouse smoothing.");
                        }
                    }
               
                    // Check if BaseLookUpRate and BaseTurnRate are equalised.
                    if (ctx.xmm8.f32[0] != ctx.xmm9.f32[0])
                        ctx.xmm8.f32[0] = ctx.xmm9.f32[0];
                });
        }
        else {
            spdlog::error("X/Y Sensitvity: Pattern scan failed.");
        }
    }
}

void EnableConsole() {
    // Get GEngine
    for (int i = 0; i < 200; ++i) { // 20s
        Engine = SDK::UEngine::GetEngine();

        if (Engine && Engine->ConsoleClass && Engine->GameViewport)
            break;

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    if (!Engine || !Engine->ConsoleClass || !Engine->GameViewport) {
        spdlog::error("Enable Console: Failed to find GEngine address after 20 seconds.");
        return;
    }

    spdlog::info("Enable Console: GEngine address = {:x}", (uintptr_t)Engine);

    // Construct console
    SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
    if (NewObject) {
        Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
        spdlog::info("Construct Console: Console object constructed.");
    }
    else {
        spdlog::error("Enable Console: Failed to construct console object.");
        return;
    }

    // Check console key bind
    SDK::UInputSettings* InputSettings = SDK::UInputSettings::GetDefaultObj();
    if (InputSettings) {
        if (InputSettings->ConsoleKeys && InputSettings->ConsoleKeys.Num() > 0) {
            spdlog::info("Enable Console: Console enabled - access it using key: {}.", InputSettings->ConsoleKeys[1].KeyName.ToString().c_str());
        }
        else {
            spdlog::error("Enable Console: Console enabled but no console key is bound.\nAdd this to %LOCALAPPDATA%\\Stalker2\\Saved\\Config\\WindowsNoEditor\\Input.ini -\n[/Script/Engine.InputSettings]\nConsoleKeys = Tilde");
        }
    }
    else {
        spdlog::error("Enable Console: Failed to retreive input settings.");
    }
}

DWORD __stdcall Main(void*)
{
    Logging();
    Configuration();
    IntroSkip();
    UpdateOffsets();
    CurrentResolution();
    AspectRatioFOV();
    Miscellaneous();
    EnableConsole();
    return true;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH: {
        thisModule = hModule;
        HANDLE mainHandle = CreateThread(NULL, 0, Main, 0, NULL, 0);
        if (mainHandle) {
            SetThreadPriority(mainHandle, THREAD_PRIORITY_HIGHEST);
            CloseHandle(mainHandle);
        }
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
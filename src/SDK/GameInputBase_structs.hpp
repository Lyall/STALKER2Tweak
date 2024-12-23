#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameInputBase

#include "Basic.hpp"


namespace SDK
{

// Enum GameInputBase.ERawDeviceReportTranslationBehavior
// NumValues: 0x0006
enum class ERawDeviceReportTranslationBehavior : uint8
{
	TreatAsTrigger                           = 0,
	TreatAsAnalog                            = 1,
	TreatAsButton                            = 2,
	TreatAsButtonBitmask                     = 3,
	TreatAsPackedAxisPair                    = 4,
	ERawDeviceReportTranslationBehavior_MAX  = 5,
};

// ScriptStruct GameInputBase.GameInputDeviceIdentifier
// 0x0004 (0x0004 - 0x0000)
struct FGameInputDeviceIdentifier final
{
public:
	uint16                                        VendorId;                                          // 0x0000(0x0002)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        ProductId;                                         // 0x0002(0x0002)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameInputDeviceIdentifier) == 0x000002, "Wrong alignment on FGameInputDeviceIdentifier");
static_assert(sizeof(FGameInputDeviceIdentifier) == 0x000004, "Wrong size on FGameInputDeviceIdentifier");
static_assert(offsetof(FGameInputDeviceIdentifier, VendorId) == 0x000000, "Member 'FGameInputDeviceIdentifier::VendorId' has a wrong offset!");
static_assert(offsetof(FGameInputDeviceIdentifier, ProductId) == 0x000002, "Member 'FGameInputDeviceIdentifier::ProductId' has a wrong offset!");

// ScriptStruct GameInputBase.GameInputControllerAxisData
// 0x0014 (0x0014 - 0x0000)
struct FGameInputControllerAxisData final
{
public:
	class FName                                   KeyName;                                           // 0x0000(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DeadZone;                                          // 0x0008(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scalar;                                            // 0x000C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsPackedPositveAndNegative;                       // 0x0010(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameInputControllerAxisData) == 0x000004, "Wrong alignment on FGameInputControllerAxisData");
static_assert(sizeof(FGameInputControllerAxisData) == 0x000014, "Wrong size on FGameInputControllerAxisData");
static_assert(offsetof(FGameInputControllerAxisData, KeyName) == 0x000000, "Member 'FGameInputControllerAxisData::KeyName' has a wrong offset!");
static_assert(offsetof(FGameInputControllerAxisData, DeadZone) == 0x000008, "Member 'FGameInputControllerAxisData::DeadZone' has a wrong offset!");
static_assert(offsetof(FGameInputControllerAxisData, Scalar) == 0x00000C, "Member 'FGameInputControllerAxisData::Scalar' has a wrong offset!");
static_assert(offsetof(FGameInputControllerAxisData, bIsPackedPositveAndNegative) == 0x000010, "Member 'FGameInputControllerAxisData::bIsPackedPositveAndNegative' has a wrong offset!");

// ScriptStruct GameInputBase.GameInputRawDeviceReportData
// 0x0068 (0x0068 - 0x0000)
struct FGameInputRawDeviceReportData final
{
public:
	class FName                                   KeyName;                                           // 0x0000(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERawDeviceReportTranslationBehavior           TranslationBehavior;                               // 0x0008(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         AnalogDeadzone;                                    // 0x0009(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scalar;                                            // 0x000C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, class FName>                      ButtonBitMaskMappings;                             // 0x0010(0x0050)(Edit, Config, NativeAccessSpecifierPublic)
	uint8                                         LowerBitAxisIndex;                                 // 0x0060(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         HigherBitAxisIndex;                                // 0x0061(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameInputRawDeviceReportData) == 0x000008, "Wrong alignment on FGameInputRawDeviceReportData");
static_assert(sizeof(FGameInputRawDeviceReportData) == 0x000068, "Wrong size on FGameInputRawDeviceReportData");
static_assert(offsetof(FGameInputRawDeviceReportData, KeyName) == 0x000000, "Member 'FGameInputRawDeviceReportData::KeyName' has a wrong offset!");
static_assert(offsetof(FGameInputRawDeviceReportData, TranslationBehavior) == 0x000008, "Member 'FGameInputRawDeviceReportData::TranslationBehavior' has a wrong offset!");
static_assert(offsetof(FGameInputRawDeviceReportData, AnalogDeadzone) == 0x000009, "Member 'FGameInputRawDeviceReportData::AnalogDeadzone' has a wrong offset!");
static_assert(offsetof(FGameInputRawDeviceReportData, Scalar) == 0x00000C, "Member 'FGameInputRawDeviceReportData::Scalar' has a wrong offset!");
static_assert(offsetof(FGameInputRawDeviceReportData, ButtonBitMaskMappings) == 0x000010, "Member 'FGameInputRawDeviceReportData::ButtonBitMaskMappings' has a wrong offset!");
static_assert(offsetof(FGameInputRawDeviceReportData, LowerBitAxisIndex) == 0x000060, "Member 'FGameInputRawDeviceReportData::LowerBitAxisIndex' has a wrong offset!");
static_assert(offsetof(FGameInputRawDeviceReportData, HigherBitAxisIndex) == 0x000061, "Member 'FGameInputRawDeviceReportData::HigherBitAxisIndex' has a wrong offset!");

// ScriptStruct GameInputBase.GameInputDeviceConfiguration
// 0x0118 (0x0118 - 0x0000)
struct FGameInputDeviceConfiguration final
{
public:
	struct FGameInputDeviceIdentifier             DeviceIdentifier;                                  // 0x0000(0x0004)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideHardwareDeviceIdString;                   // 0x0004(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OverriddenHardwareDeviceId;                        // 0x0008(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bProcessControllerButtons;                         // 0x0018(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bProcessControllerSwitchState;                     // 0x0019(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bProcessControllerAxis;                            // 0x001A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<uint32, class FName>                     ControllerButtonMappingData;                       // 0x0020(0x0050)(Edit, Config, NativeAccessSpecifierPublic)
	TMap<uint32, struct FGameInputControllerAxisData> ControllerAxisMappingData;                         // 0x0070(0x0050)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                          bProcessRawReportData;                             // 0x00C0(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        RawReportReadingId;                                // 0x00C4(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, struct FGameInputRawDeviceReportData> RawReportMappingData;                              // 0x00C8(0x0050)(Edit, Config, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameInputDeviceConfiguration) == 0x000008, "Wrong alignment on FGameInputDeviceConfiguration");
static_assert(sizeof(FGameInputDeviceConfiguration) == 0x000118, "Wrong size on FGameInputDeviceConfiguration");
static_assert(offsetof(FGameInputDeviceConfiguration, DeviceIdentifier) == 0x000000, "Member 'FGameInputDeviceConfiguration::DeviceIdentifier' has a wrong offset!");
static_assert(offsetof(FGameInputDeviceConfiguration, bOverrideHardwareDeviceIdString) == 0x000004, "Member 'FGameInputDeviceConfiguration::bOverrideHardwareDeviceIdString' has a wrong offset!");
static_assert(offsetof(FGameInputDeviceConfiguration, OverriddenHardwareDeviceId) == 0x000008, "Member 'FGameInputDeviceConfiguration::OverriddenHardwareDeviceId' has a wrong offset!");
static_assert(offsetof(FGameInputDeviceConfiguration, bProcessControllerButtons) == 0x000018, "Member 'FGameInputDeviceConfiguration::bProcessControllerButtons' has a wrong offset!");
static_assert(offsetof(FGameInputDeviceConfiguration, bProcessControllerSwitchState) == 0x000019, "Member 'FGameInputDeviceConfiguration::bProcessControllerSwitchState' has a wrong offset!");
static_assert(offsetof(FGameInputDeviceConfiguration, bProcessControllerAxis) == 0x00001A, "Member 'FGameInputDeviceConfiguration::bProcessControllerAxis' has a wrong offset!");
static_assert(offsetof(FGameInputDeviceConfiguration, ControllerButtonMappingData) == 0x000020, "Member 'FGameInputDeviceConfiguration::ControllerButtonMappingData' has a wrong offset!");
static_assert(offsetof(FGameInputDeviceConfiguration, ControllerAxisMappingData) == 0x000070, "Member 'FGameInputDeviceConfiguration::ControllerAxisMappingData' has a wrong offset!");
static_assert(offsetof(FGameInputDeviceConfiguration, bProcessRawReportData) == 0x0000C0, "Member 'FGameInputDeviceConfiguration::bProcessRawReportData' has a wrong offset!");
static_assert(offsetof(FGameInputDeviceConfiguration, RawReportReadingId) == 0x0000C4, "Member 'FGameInputDeviceConfiguration::RawReportReadingId' has a wrong offset!");
static_assert(offsetof(FGameInputDeviceConfiguration, RawReportMappingData) == 0x0000C8, "Member 'FGameInputDeviceConfiguration::RawReportMappingData' has a wrong offset!");

}


# STALKER 2 Tweak
[![Patreon-Button](https://raw.githubusercontent.com/Lyall/STALKER2Tweak/refs/heads/master/.github/Patreon-Button.png)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/STALKER2Tweak/total.svg)](https://github.com/Lyall/STALKER2Tweak/releases)

This is an ASI plugin for for STALKER 2: Heart of Chornobyl that fixes ultrawide issues, enables the console and more.

## Features
### General
- Enable developer console.
- Skip intro logos.
- Disable mouse smoothing and fix X/Y sensitivity mismatch.
- Adjust viewmodel FOV.

### Ultrawide/Narrower
- Disable pillarboxing/letterboxing in cutscenes.
- Fix vert- FOV when playing on an ultrawide display.
- Adjust gameplay HUD size.

## Installation
- Grab the latest release of STALKER2Tweak from [here.](https://github.com/Lyall/STALKER2Tweak/releases)
- Extract the contents of the release zip in to the the game folder.
(e.g. "**steamapps\common\S.T.A.L.K.E.R. 2 Heart of Chornobyl**" for Steam or "**XboxGames\S.T.A.L.K.E.R. 2\Content**" for Xbox).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**

*Either*: Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.
*Or* use Winecfg:
1. Launch Protontricks (Winetricks for GOG-Version).
    - They exist as Flatpak or visit their Github pages, also Launchers like Lutris can come with it.
    - On the GOG version, you can open Winecfg directly, if Stalker uses the main prefix. Proceed to step 5.
2. Pick the Stalker 2 app, if asked.
3. Select default Wineprefix, if asked.
4. Run Winecfg.
5. Select the Libraries Tab.
6. In the Dropdown, select `dsound` and add it. It should default to `dsound (native, builtin)`.
7. Finish with `OK` and then close all windows of Winetricks and you are done.

## Configuration
- See **STALKER2Tweak.ini** to adjust settings.

## Screenshots

| ![ezgif-6-a05ea5d701](https://github.com/user-attachments/assets/cdf6a125-a112-4f29-a637-71f22743f388) |
|:--------------------------:|
| Cutscene |

## Known Issues
Please report any issues you see.

- Adjusting the viewmodel FOV significantly can lead to visual errors (i.e [#5](https://github.com/Lyall/STALKER2Tweak/issues/5)). These will not be fixed.

## Credits
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.<br />
[Dumper-7](https://github.com/Encryqed/Dumper-7) for dumping the SDK.

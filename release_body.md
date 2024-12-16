## Changes  
-   
  
## Installation  
- Download the file marked `<STEAM_RELEASE_ZIP_NAME>` or `<XBOX_RELEASE_ZIP_NAME>` from the "Assets" section below.  
- Extract the contents of the release zip in to the the game folder.  
(e.g. "**steamapps\common\S.T.A.L.K.E.R. 2 Heart of Chornobyl**" for Steam or "**XboxGames\S.T.A.L.K.E.R. 2\Content**" for Xbox).  
  
  
### Steam Deck / GOG (Linux in general) Additional Instructions  
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
  

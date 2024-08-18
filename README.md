# UE Mod Loader

A simple Mod Loader for Unreal Engine games that automatically loads every `.dll` file placed in the `mods` folder. As expected, this will only load mods that function under the logic of DLL injection.

_Note: This Mod Loader has been tested with **Grounded** and **Orcs Must Die! 3**. While it's expected to be compatible with other Unreal Engine games, compatibility may vary. If you encounter any issues, please [create an issue](https://github.com/your-repo/issues) on the repository._

## Installation

1. **Download the Mod Loader:**
   - You can download the Mod Loader from [Nexus Mods](#) or from the [Releases section](https://github.com/samjviana/UE-Mod-Loader/releases) on this repository.

2. **Extract the Mod Loader files:**
   - Extract the contents of the downloaded `.zip`.

3. **Move the Mod Loader extracted files:**
   - For **GamePass**, place the files in:
     ```
     <installation_directory>\Content\<game_identifier>\Binaries\WinGDK\
     ```
   - For **Other Launchers** (like Steam and Epic), place the files in:
     ```
     <installation_directory>\<game_identifier>\Binaries\Win64\
     ```
   - Ensure the Mod Loader's `dxgi.dll` file is placed in the same folder where the game's Unreal Engine executable (e.g., `<game_identifier>-Win64-Shipping.exe`) is located.

**Note:** 
- _`installation_directory` is the root folder where the game is installed. For example, `C:\Program Files (x86)\Steam\steamapps\common\Grounded`._
- _`game_identifier` refers to the specific game module, such as `Maine` for Grounded or `OMD` for Orcs Must Die! 3._

This will allow the Mod Loader to seamlessly load all `.dll` mods from the `mods` folder when the game starts.

<details>
<summary><strong>Folder Structure Example</strong></summary>

**GamePass:**
```plaintext
<installation_directory>
└─── Content
     └─── <game_identifier>
          └─── Binaries
               └─── WinGDK
                    ├─── dxgi.dll
                    ├─── mods
                    │    └─── <your_mod.dll>
                    └─── <game_identifier>-WinGDK-Shipping.exe
```

**Other Launchers:**
```plaintext
<installation_directory>
│
└─── <game_identifier>
     └─── Binaries
          └─── Win64
               ├─── dxgi.dll
               ├─── mods
               │    └─── <your_mod.dll>
               └─── <game_identifier>-Win64-Shipping.exe
```
</details>

---
#### _Credits_

##### This mod loader was inspired by the [Elden Ring Mod Loader](https://github.com/techiew/EldenRingModLoader).

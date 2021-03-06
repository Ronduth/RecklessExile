# ExileMod extensions for AdminToolkit
<sup>Version: 0.1 | Author: ole1986 | Last update: 2016-08-08</sup>

Before you start, please make sure the following file(s) exist in is this package 

| File                                            | Additional Info                       
| ---                                             | ---
| @MissionFile\atk\extension\ExileMod.sqf         | located in MissionFile
| admintoolkit\_servercfg\extensions\ExileMod.sqf | located in admintoolkit_servercfg.pbo (Packed)                
 
## Installation

Please make sure you have followed the exact installation instruction of the AdminToolkit <a href="../README.md">README.md</a>
It is also necessary to add your player UID in the `config.cpp` located in `admintoolkit_servercfg\config.cpp` (PBO)

**MissionFile**

+ Unpack your mission file
+ Copy the file `atk\extension\ExileMod.sqf` into your MissionFile `atk\extension` directory
+ Add the "Exile Mod" menu into the MissionFile `config.cpp`, class `CfgAdminToolkitCustomMod`

```
Extensions[] = {
	{"Exile Mod","ExileMod"}
};
```

+ Pack your mission file and upload it to your server

**Server**

+ Unpack the `admintoolkit_servercfg.pbo`
+ Copy the `ExileMod.sqf` into the `admintoolkit_servercfg\extension` directory
+ Pack the `admintoolkit_servercfg` folder and upload the pbo to your server
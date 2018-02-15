// Script for removing/hiding specific map objects
[] execVM "custom\RemoveMapObjects\rmo.sqf";


//Bounties
[] execVM "MostWanted_Client\MostWanted_Init.sqf";

//R3F
execVM "R3F_LOG\init.sqf";

//Kill Messages
// [] execVM "custom\KillMessages.sqf";

//Revive
[] execVM "custom\EnigmaRevive\init.sqf";

[] execVM "Custom\rearm\takegive_poptab_init.sqf";

if(hasInterface) then{
    [] execVM "Custom\rearm\service_point.sqf";
};

[] execVM "ClaimVehicles_Client\ClaimVehicles_Client_init.sqf";

//Cars
[] execVM "CDAH_crafting\logic\config.sqf";

//XBRM
[] execVM "addons\HEG_Xbrm_client\Xbrm_config.sqf";
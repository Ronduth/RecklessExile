/*
	max 10 customapps! (not more slots on the app page lol)
	in the function part you could also just call your custom function or BIS_FNC_XXX e.g.:
	
	submenu = 0;
	toggleable = 0;
	text = "Open BIS Arsenal";
	tooltip = "Open BIS Arsenal - Gear yourself up!";
	fnc = "['Open',true] call BIS_fnc_arsenal;";
	pic = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
*/
/*class customapp_0 {
	submenu = 0;
	toggleable = 0;
	text = "Open BIS Arsenal";
	tooltip = "Open BIS Arsenal - Gear yourself up!";
	fnc = "if(isNil'infiSTAR_ADMINS')then{['ErrorTitleOnly', ['Only infiSTAR admins can use this!']] call ExileClient_gui_toaster_addTemplateToast;}else{['Open',true] call BIS_fnc_arsenal;};";
	pic = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
};
class customapp_1 {
	submenu = 0;
	toggleable = 0;
	text = "Priv. Chat";
	tooltip = "Priv. Chat";
	fnc = "if(isNil'fnc_chat_send')then{['ErrorTitleOnly', ['This app needs infiSTAR.de AntiHack and AdminTools..!']] call ExileClient_gui_toaster_addTemplateToast;}else{if(isNull (findDisplay -1340))then{createdialog 'infiSTAR_CHAT';};};";
	pic = "\A3\Weapons_F\Data\UI\gear_item_radio_ca.paa";
};
class customapp_2 {
	submenu = 1;
	toggleable = 0;
	text = "ViewDistance\nTerrain Grid";
	tooltip = "ViewDistance\nTerrain Grid";
	fnc = "call apps_fnc_player_change_viewdistance;";
	pic = "\A3\Weapons_F\Data\UI\gear_binoculars_CA.paa";
};
class customapp_3 {
	submenu = 0;
	toggleable = 0;
	text = "Player Scan";
	tooltip = "Player Scan";
	fnc = "call apps_fnc_scan;";
	pic = "\A3\Weapons_F\Data\UI\gear_item_gps_CA.paa";
};
class customapp_4 {
	submenu = 1;
	toggleable = 0;
	text = "Remote CCTV";
	tooltip = "Remote CCTV";
	fnc = "call apps_fnc_initremotecctv;";
	pic = "\exile_assets\texture\item\Exile_Item_Laptop.paa";
};
class customapp_5 {
	submenu = 0;
	toggleable = 1;
	text = "Vehicle HP Bars";
	tooltip = "Vehicle HP Bars";
	fnc = "_this call apps_fnc_vehicle_hp_bars;";
	pic = "\exile_assets\texture\item\Exile_Item_DuctTape.paa";
};
class customapp_6 {
	submenu = 1;
	toggleable = 0;
	text = "BRAma Cookbook";
	tooltip = "BRAma Cookbook updated by infiSTAR.de";
	fnc = "_this call apps_fnc_Cookbook;";
	pic = "\exile_assets\texture\marker\concrete_mixer_ca.paa";
};
class customapp_7 {
	submenu = 0;
	toggleable = 0;
	text = "";
	tooltip = "";
	fnc = "";
	pic = "";
};*/
class customapp_0 {
	submenu = 1;
	toggleable = 0;
	text = "Remote CCTV";
	tooltip = "Remote CCTV";
	fnc = "call apps_fnc_initremotecctv;";
	pic = "\exile_assets\texture\item\Exile_Item_Laptop.paa";
};
class customapp_1 {
	submenu = 0;
	toggleable = 0;
	text = "Priv. Chat";
	tooltip = "Priv. Chat";
	fnc = "if(isNil'fnc_chat_send')then{['ErrorTitleOnly', ['This app needs infiSTAR.de AntiHack and AdminTools..!']] call ExileClient_gui_toaster_addTemplateToast;}else{if(isNull (findDisplay -1340))then{createdialog 'infiSTAR_CHAT';};};";
	pic = "\A3\Weapons_F\Data\UI\gear_item_radio_ca.paa";
};
class customapp_2 {
	submenu = 1;
	toggleable = 0;
	text = "BRAma Cookbook";
	tooltip = "BRAma Cookbook updated by infiSTAR.de";
	fnc = "_this call apps_fnc_Cookbook;";
	pic = "\exile_assets\texture\marker\concrete_mixer_ca.paa";
};
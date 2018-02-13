switch (true) do {
waituntil {!isnull (finddisplay 46) && {alive player} && {typeOF player != "Exile_Unit_GhostPlayer"}};
if ( alive player ) then {

	playsound "intro";
  };
};



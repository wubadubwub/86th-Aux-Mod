["ace_unconscious", {
	params ["_unit", "_state"];
	if !(isServer) exitWith {};
	_CLASSNAME = "STB86_BH_CH_Fanatic";
	if (typeOf _unit == _CLASSNAME) then{
		[(getPos _unit)] call STB86_fnc_explode;
	};
}] call CBA_fnc_addEventHandler;

["ace_unconscious", {
	params ["_unit", "_state"];
	if !(isServer) exitWith {};
	_CLASSNAME = "STB86_BH_CH_FakeFanatic";
	if (typeOf _unit == _CLASSNAME) then{
		[_unit] call STB86_Factions_fnc_dissapear;
	};
}] call CBA_fnc_addEventHandler;
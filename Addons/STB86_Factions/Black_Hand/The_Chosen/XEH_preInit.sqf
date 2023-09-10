["ace_unconscious", {
	if !(isServer) exitWith {}; // Global Locality
	params ["_unit", "_state"];
	_CLASSNAME = "STB86_BH_CH_Fanatic";
	if (typeOf _unit == _CLASSNAME) then{
		createVehicle ["HelicopterExploSmall", ASLToAGL getPosASL _unit];;
	};
}] call CBA_fnc_addEventHandler;

["ace_unconscious", {
	if !(isServer) exitWith {}; // Global Locality
	params ["_unit", "_state"];
	_CLASSNAME = "STB86_BH_CH_FakeFanatic";
	if (typeOf _unit == _CLASSNAME) then{
		[_unit] call STB86_Factions_fnc_dissapear;
	};
}] call CBA_fnc_addEventHandler;
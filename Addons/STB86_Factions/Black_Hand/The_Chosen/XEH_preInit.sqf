["ace_unconscious", {
	params ["_unit", "_state"];
	_CLASSNAME = "STB86_BH_CH_Fanatic";
	if (typeOf _unit == _CLASSNAME) then{
	[(getPos _unit)] call STB86_fnc_explode;
	};
}] call CBA_fnc_addEventHandler;
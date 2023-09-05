params ["_logic"];
private _unit = attachedTo _logic;
if !(isNull _unit) then {
	[(getPos _unit)] call STB86_fnc_explode;
};
deleteVehicle _logic;
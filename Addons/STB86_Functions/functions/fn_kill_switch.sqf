params ["_logic"];
private _unit = attachedTo _logic;
if !(isNull _unit) then {
	[(getPos _unit)] remoteExec ["STB86_fnc_explode", 2];
};
deleteVehicle _logic;
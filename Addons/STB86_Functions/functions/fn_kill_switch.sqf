params ["_logic"];
private _unit = attachedTo _logic;
if !(isNil "_unit") then {
	createVehicle ["HelicopterExploSmall", getPosASL _unit];
};
deleteVehicle _logic;
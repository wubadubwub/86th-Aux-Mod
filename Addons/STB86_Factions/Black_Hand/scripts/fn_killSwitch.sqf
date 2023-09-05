params ["_logic"];
private _unit = attachedTo _logic;
if !(isNull _unit) then {
	createVehicle ["HelicopterExploSmall", ASLToAGL getPosASL _unit];
};
deleteVehicle _logic;
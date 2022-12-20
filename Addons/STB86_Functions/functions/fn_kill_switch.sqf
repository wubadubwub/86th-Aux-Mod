params ["_logic"];
private _unit = (_logic nearEntities ["Man", 2]) select 0;
if !(isNil "_unit") then {
	createVehicle ["HelicopterExploSmall", getPos _unit];
};
deleteVehicle _logic;
/*
	Author: AJ

	Description: Attaches Machine Gun to Tahoe

	Parameter: Car which has called the function
*/
//Args
private _target_car = _this select 0;

if ((isDedicated) OR (hasInterface && isServer)) then{
	_target_car addEventHandler["Killed",{

		params ["_unit", "_killer", "_instigator", "_useEffects"];
		{
			_x setDamage 1;
		} forEach attachedObjects _unit;
		//_x is the target of forEach, we don't define it's built into SQF
	}];
	_target_car addEventHandler ["Deleted",
	{
		params ["_entity"];
		{
			deleteVehicle _x;
		} forEach attachedObjects _entity;
		//Deleted only give us the _entity paramater
	}];

	sleep 3;
	//Variables
	private _mg = "OPTRE_Static_M247T_Tripod" createVehicle [0,0,0];
	
	//Attaches MG to car
	_mg attachTo [_target_car, [0,-1.78,.25]];
	_mg setDir 180;
	
};
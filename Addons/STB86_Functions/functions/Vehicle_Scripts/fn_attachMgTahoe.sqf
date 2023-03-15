/*
	Author: AJ
	
	Description: Attaches Machine Gun to Tahoe
	
	Parameter: Car which has called the function
*/
// Constants
private _NUM_MAGS = 3;
// Args
private _target_car = _this select 0;

if ((isDedicated) or (hasInterface && isServer)) then {
	_target_car addEventHandler["Killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		{
			_x setDamage 1;
		} forEach attachedObjects _unit;
		// _x is the target of forEach, we don't define it's built into SQF
	}];
	_target_car addEventHandler ["Deleted",
		{
			params ["_entity"];
			{
				deleteVehicle _x;
			} forEach attachedObjects _entity;
			// Deleted only give us the _entity paramater
		}];

		sleep 3;
		// Variables
		private _mg = "OPTRE_Static_M247T_Tripod" createVehicle [0, 0, 0];
		// Add MG ammo 
		for "_i" from 1 to _NUM_MAGS do {
			_mg addMagazine "OPTRE_100Rnd_95x40_Box";
		};

		// Attaches MG to car
		_mg attachTo [_target_car, [0, -0.25, 0.25]];
		// -1.78 for reversed
	};
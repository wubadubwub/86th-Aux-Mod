/*
	
	Author: AJ
	
	Purpose: Handles deletion event for the flamethrower Projectile
	
	Args:
	0: Projectile Object

	Return Value: Nil
	
	Example: N/A 

	Public: No
	
*/

params ["_projectile"];
// Setup Variables
private _ID = "STB86_Flamethrower_" + str(position _projectile);
private _particle = _projectile getVariable "_particle";
private _fire_lifetime = STB86_Flamethrower_DECAY_TIME;

["ace_fire_addFireSource", [_particle, STB86_Flamethrower_RADIUS, STB86_Flamethrower_INTENSITY, _ID]] call CBA_fnc_serverEvent; // Server event is how you create ACE fires

if (((getPosATL _projectile) select 2) > .01) then {
	_fire_lifetime = 0;
}; // If the fire is in the air, it shouldn't burn once the projectile is dead.
[{
	deleteVehicle (_this select 0);
	["ace_fire_removeFireSource", [_this select 1]] call CBA_fnc_serverEvent;
}, [_particle, _ID], _fire_lifetime] call CBA_fnc_waitAndExecute;
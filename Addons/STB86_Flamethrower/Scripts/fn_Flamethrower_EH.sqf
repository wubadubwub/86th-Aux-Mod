/*
	
	Author: AJ
	
	Purpose: Handles initialization of the flamethrower's flame.
	
	Args:
	0: The weapon fired. Used to find speed and initSpeed (This is significantly more reliable to do than to assume Arma's built in speed calculation works properly) <str>
	1: Projectile Object. <OBJ>
	
	Return Value: 
	Nil
	
	Example: 
	fired = "0 = [(_this select 1), (_this select 6), (_this select 4)] call STB86_Flamethrower_fnc_Flamethrower_EH";
	
	Public: 
	Yes
	
*/

params ["_weapon", "_projectile"];
private _PARTICLE_CLASS = "STB86_Flamethrower_Fire";

_particle = "#particlesource" createVehicle [0, 0, 0];
_particle setParticleClass _PARTICLE_CLASS;
_particle attachTo [_projectile, [0, 0, 0]];

private _INTENDED_SPEED = getNumber (configFile >> "CfgWeapons" >> _weapon >> "STB86_Flamethrower_Speed");
private _init_speed = getNumber (configFile >> "CfgWeapons" >> _weapon >> "initSpeed");
private _vel = velocity _projectile;

{
	private _j = _x / _init_speed;
	_vel set [_forEachIndex, (_j * _INTENDED_SPEED)];
} forEach _vel;
_projectile setVelocity _vel;
_projectile setVariable ["_particle", _particle];

_projectile addEventHandler ["Deleted", {
	call STB86_Flamethrower_fnc_Flamethrower_DH
}];

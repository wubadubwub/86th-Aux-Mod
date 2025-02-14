/*
	
	Author: AJ
	
	Purpose: This handles creating a flamethrower for the 86th STB to use. Because we are FUCKING BASED YEAHHHHHHHHHHHHHHHHHHHHHHH
	
*/

params ["_weapon", "_projectile"];
private _PARTICLE_CLASS = "MediumDestructionFire";

_particle = "#particlesource" createVehicle [0, 0, 0];
_particle setParticleClass _PARTICLE_CLASS;
_particle attachTo [_projectile, [0, 0, 0]];

private _INTENDED_SPEED = getNumber (configFile >> "CfgWeapons" >> _weapon >> "STB86_Flamethrower_Speed");
private _init_speed = getNumber (configFile >> "CfgWeapons" >> _weapon >> "initSpeed");
private _vel = velocity _projectile;

{
	private _j = _x / _init_speed;
	_vel set [_forEachIndex , (_j * _INTENDED_SPEED)];
} forEach _vel;
_projectile setVelocity _vel; 
_projectile setVariable ["_particle", _particle];


_projectile addEventHandler ["Deleted", {
	params ["_projectile"];
	// Setup Variables
	private _ID = "STB86_Thrower_" + str(position _projectile);
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
	[];
}];

[];
/*

Author: AJ

Purpose: This handles creating a flamethrower for the 86th STB to use. Because we are FUCKING BASED YEAHHHHHHHHHHHHHHHHHHHHHHH

*/

params ["_weapon", "_projectile"];
private _PARTICLE_CLASS = "MediumDestructionFire";

_particle = "#particlesource" createVehicleLocal [0,0,0];
_particle setParticleClass _PARTICLE_CLASS;
_particle attachTo [_projectile, [0,0,0]];

_projectile setVariable ["_particle", _particle];

_particle addEventHandler ["Deleted", {
	params ["_particle"];
	private _FIRE_SOURCE_ID = _particle getVariable "fire_source_id";
	if !(isNil "_FIRE_SOURCE_ID") then {
		["ace_fire_removeFireSource", [_FIRE_SOURCE_ID]] call CBA_fnc_serverEvent;
	};

}];

_projectile addEventHandler ["Deleted", {
	params ["_projectile"];
	// Setup Variables
	private _ID = "STB86_Thrower_" + str(position _projsectile);
	private _particle = _projectile getVariable "_particle";
	private _fire_lifetime = STB86_Flamethrower_DECAY_TIME;
	["ace_fire_addFireSource", [_particle, STB86_Flamethrower_RADIUS, STB86_Flamethrower_INTENSITY, _ID]] call CBA_fnc_serverEvent; // Server event is how you create ACE fires
	
	_particle setVariable ["fire_source_id", _ID]; // So the particle knows which fire source
	
	if (((getPosATL _projectile) select 2) > .01) then {
		_fire_lifetime = 0;
	}; // If the fire is in the air, it shouldn't burn once the projectile is dead.
	
	[{deleteVehicle (_this select 0);}, [_particle], _fire_lifetime] call CBA_fnc_waitAndExecute;
}];

[];
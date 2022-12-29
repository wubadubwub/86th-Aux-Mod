/*

Author: AJ

Purpose: This handles creating a flamethrower for the 86th STB to use. Because we are FUCKING BASED YEAHHHHHHHHHHHHHHHHHHHHHHH

*/

params ["_weapon", "_projectile"];
private _PARTICLE_CLASS = "MediumDestructionFire";

_particle = "#particlesource" createVehicleLocal [0,0,0];
_particle setParticleClass _PARTICLE_CLASS;
_particle attachTo [_projectile, [0,0,0]];

_particle addEventHandler ["Deleted", {
	params ["_entity"];
	private _FIRE_SOURCE_ID = _entity getVariable "fire_source_id";
	["ace_fire_removeFireSource", [_FIRE_SOURCE_ID]] call CBA_fnc_serverEvent;

}];

_projectile addEventHandler ["HitExplosion", {
	params ["_projectile", "_hitEntity"];
	[_hitEntity, 5] call ace_fire_fnc_burn;
	private _PARTICLE = (attachedObjects _entity) select 0; // The only thing attached to the bullet is the particle. Or at least should be.
	deleteVehicle _projectile;
	deleteVehicle _PARTICLE;
}];
_projectile addEventHandler ["Deleted", {
	params ["_entity"];
	// Setup Variables
	private _RADIUS = STB86_Flamethrower_RADIUS;
	private _INTENSITY = STB86_Flamethrower_INTENSITY;
	private _ID = "STB86_Thrower_" + str(position _entity);
	private _PARTICLE = (attachedObjects _entity) select 0; // The only thing attached to the bullet is the particle. Or at least should be.
	private _fire_lifetime = STB86_Flamethrower_DECAY_TIME;
	["ace_fire_addFireSource", [_PARTICLE, _RADIUS, _INTENSITY, _ID]] call CBA_fnc_serverEvent; // Server event is how you create ACE fires
	
	_PARTICLE setVariable ["fire_source_id", _ID]; // So the particle knows which fire source
	

	
	if (((getPosATL _entity) select 2) > 1) then {
		_fire_lifetime = 0;
	}; // If the fire is in the air, it shouldn't burn once the projectile is dead.
	
	[{deleteVehicle (_this select 0);}, [_PARTICLE], _fire_lifetime] call CBA_fnc_waitAndExecute;
}];
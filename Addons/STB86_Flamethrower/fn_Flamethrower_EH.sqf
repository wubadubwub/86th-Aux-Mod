/*

Author: AJ

Purpose: This handles creating a flamethrower for the 86th STB to use. Because we are FUCKING BASED YEAHHHHHHHHHHHHHHHHHHHHHHH

*/

params ["_weapon", "_projectile"];
private _ACCEPTED_WEAPONS = ["STB86_Flamer"];
if (_weapon in 	_ACCEPTED_WEAPONS) then {
	private _PARTICLE_CLASS = "BigDestructionFire";
	private _INTENSITY = 5;
	_source01 = "#particlesource" createVehicleLocal [0,0,0];
	_source01 setParticleClass _PARTICLE_CLASS;
	_source01 attachTo [_projectile, [0,0,0]];
	_projectile addEventHandler ["HitExplosion", {
		params ["_projectile", "_hitEntity"];
		[_hitEntity, 5] call ace_fire_fnc_burn;
		private _PARTICLE = (attachedObjects _entity) select 0; // The only thing attached to the bullet is the particle. Or at least should be.
		deleteVehicle _projectile;
		deleteVehicle _PARTICLE;
	}];
	_projectile addEventHandler ["Deleted", {
		params ["_entity"];
		private _fire_lifetime = 3;
		// Create the fire	
		private _RADIUS = 2;
		private _INTENSITY = 10;
		private _ID = "STB86_Thrower_" + str(position _entity);
		private _PARTICLE = (attachedObjects _entity) select 0; // The only thing attached to the bullet is the particle. Or at least should be.
		["ace_fire_addFireSource", [_PARTICLE, _RADIUS, _INTENSITY, _ID]] call CBA_fnc_serverEvent; // Server event is how you create ACE fires
		_PARTICLE setVariable ["fire_source_id", _ID]; // So the particle knows which fire source
		_PARTICLE addEventHandler ["Deleted", {
			params ["_entity"];
			private _FIRE_SOURCE_ID = _entity getVariable "fire_source_id";
			["ace_fire_removeFireSource", [_FIRE_SOURCE_ID]] call CBA_fnc_serverEvent;
		}];
		if (((getPosATL _entity) select 2) > 1) then {
			_fire_lifetime = 0;
		};
		[{deleteVehicle (_this select 0);}, [_PARTICLE], _fire_lifetime] call CBA_fnc_waitAndExecute;
	}];
};
params ["_unit"];
private _ps1 = "#particlesource" createVehicleLocal (getPosATL _unit);
_ps1 setParticleParams [
	["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 9, 16, 0], "", "Billboard",
	1, 8, [0, 0, 0], [0, 0, 4.5], 0, 10, 7.9, 0.066, [1, 3, 6],
	[[0.5, 0.5, 0.5, 0], [0.5, 0.5, 0.5, 0.15], [0.5, 0.5, 0.5, 0.15], [0.5, 0.5, 0.5, 0.1], [0.75, 0.75, 0.75, 0.075], [1, 1, 1, 0]],
	[0.25], 1, 0, "", "", _ps1];
_ps1 setParticleRandom [0, [0.25, 0.25, 0], [0.2, 0.2, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
_ps1 setDropInterval 0.05;

[{
	params ["_unit", "_particle"];
	deleteVehicle _unit;
	deleteVehicle _particle;
}, [_unit, _ps1], 1] call CBA_fnc_waitAndExecute;
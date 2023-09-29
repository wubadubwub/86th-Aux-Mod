params ["_target"];
private _units = ["STB86_BH_CH_FakeFanatic"];
private _group = createGroup [east, true];
private _selected_unit = _units call BIS_fnc_selectRandom;
private _unit = _group createUnit [_selected_unit, getPosATL _target, [], 10, "NONE"];
_unit setDir (_unit getDir _target);
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
	_unit hideObject false;
	deleteVehicle _particle;
}, [_unit, _ps1], 1] call CBA_fnc_waitAndExecute;
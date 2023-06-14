if ((isDedicated) or (hasInterface && isServer)) then {
	params ["_veh"];
	private _rightEarCfg = "STB86_PelicatEarRight";
	private _leftEarCfg = "STB86_PelicatEarLeft";

	private _rightEar = createVehicle [_rightEarCfg, position _veh];
	private _leftEar = createVehicle [_leftEarCfg, position _veh];
	_rightEar attachTo [_veh, [1.2, 8, 0.6]];
	[_rightEar, [160, 10, 22]] call BIS_fnc_setObjectRotation;
	_rightEar setObjectScale 14;

	_leftEar attachTo [_veh, [-1.2, 8, 0.6]];
	[_leftEar, [-160, 10, -22]] call BIS_fnc_setObjectRotation;
	_leftEar setObjectScale 14;
};
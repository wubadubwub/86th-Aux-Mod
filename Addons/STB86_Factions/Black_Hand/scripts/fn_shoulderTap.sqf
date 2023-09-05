params ["_target"];
private _shoulder = [0, 1] call BIS_fnc_randomInt;
[_target, _target, _shoulder] call ace_interaction_fnc_tapShoulder;

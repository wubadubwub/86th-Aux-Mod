params ["_unit"];
[_unit] call ace_medical_treatment_fnc_fullHealLocal;
_unit setVariable ['IMS_IsUnitInvicibleScripted',1,true];
_unit removeAllEventHandlers "HandleDamage";
_unit addEventHandler ["HandleDamage",{0;}];
[_unit, 1.5] remoteExecCall ["setAnimSpeedCoef", 0];
[{_this setDamage 1;}, _unit, 30] call CBA_fnc_waitAndExecute;
[_this, "ColorInversion", 2500, [1, 1, 1]] spawn {
	params ["_unit", "_name", "_priority", "_effect", "_handle"];
	while {
		_handle = ppEffectCreate [_name, _priority];
		_handle < 0
	} do {
		_priority = _priority + 1;
	};
	_handle ppEffectEnable true;
	_handle ppEffectAdjust _effect;
	_handle ppEffectCommit 0;
	[{ppEffectDestroy _this;}, _handle, 30] call CBA_fnc_waitAndExecute;
};

["ChromAberration", 200, [1, 1, true]] spawn { 
    params ["_name", "_priority", "_effect", "_handle"]; 
    while { 
        _handle = ppEffectCreate [_name, _priority]; 
        _handle < 0 
    } do { 
        _priority = _priority + 1; 
    }; 
    _handle ppEffectEnable true; 
    _handle ppEffectAdjust _effect; 
    _handle ppEffectCommit 30; 
    [{ppEffectDestroy _this;}, _handle, 30] call CBA_fnc_waitAndExecute;
};

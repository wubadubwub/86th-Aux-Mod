params ["_medic","_unit"];
[_unit] call ace_medical_treatment_fnc_fullHealLocal;
_unit setVariable ['IMS_IsUnitInvicibleScripted',1,true];
_unit removeAllEventHandlers "HandleDamage";
_unit addEventHandler ["HandleDamage",{0;}];
[_unit, 1.5] remoteExecCall ["setAnimSpeedCoef", 0];
[{_this setDamage 1;}, _unit, 30] call CBA_fnc_waitAndExecute;

private _priority = 2500;
private _handle = null;
while { 
    _handle = ppEffectCreate ["ColorInversion", _priority]; 
    _handle < 0 
} do { 
    _priority = _priority + 1; 
}; 
_handle ppEffectEnable true; 
_handle ppEffectAdjust [1, 1, 1]; 
_handle ppEffectCommit 0; 
[{ppEffectDestroy _this;}, _handle, 30] call CBA_fnc_waitAndExecute;




private _priority2 = 200;
private _handle2 = null;
while { 
    _handle2 = ppEffectCreate ["ChromAberration", _priority2]; 
    _handle2 < 0 
} do { 
    _priority2 = _priority2 + 1; 
}; 
_handle2 ppEffectEnable true; 
_handle2 ppEffectAdjust [1, 1, true]; 
_handle2 ppEffectCommit 30; 
[{ppEffectDestroy _this;}, _handle2, 30] call CBA_fnc_waitAndExecute;

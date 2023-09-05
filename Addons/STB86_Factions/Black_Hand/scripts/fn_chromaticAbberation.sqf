private _priority = 200;
private _handle = null;
while { 
    _handle = ppEffectCreate ["ChromAberration", _priority]; 
    _handle < 0 
} do { 
    _priority = _priority + 1; 
}; 
_handle ppEffectEnable true; 
_handle ppEffectAdjust [0.05, 0.05, true]; 
_handle ppEffectCommit 2; 
[{
	ppEffectDestroy _this;
}, _handle, 5] call CBA_fnc_waitAndExecute;

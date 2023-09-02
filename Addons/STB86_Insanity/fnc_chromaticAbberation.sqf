private _handle = null;
private _priority = 200;
while {
	_handle = ppEffectCreate ["ChromAberration", _priority];
	_handle < 0
} do {
	_priority = _priority + 1;
};
_handle ppEffectEnable true;
_handle ppEffectAdjust [0.05, 0.05, true];
_handle ppEffectCommit 5;
_handle ppEffectEnable false;
ppEffectDestroy _handle;
params ["_man"];
/* CONSTANTS */
	private _DET_DIST = 10;
	_man addEventHandler ["Killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		[(getPos _unit)] remoteExec ["STB86_fnc_explode", 2];
	}];
	
	while { alive _man } do {
		private _enemy = _man findNearestEnemy _man;
		if !(isNull _enemy) then {
			_grp = group _man;
			private _wp = currentWaypoint _grp;
			if (_wp == count waypoints _grp) then {
				_wp = (group _man) addWaypoint [getPos _enemy, 0];
			};
			[_grp, parseNumber str(_wp)] setWPPos getPos _enemy;
			_grp setCurrentWaypoint [_grp, parseNumber str(_wp)];
		};
		if (_man distance _enemy < _DET_DIST) then {
			[(getPos _man)] remoteExec ["STB86_fnc_explode", 2];
		};
		sleep 0.5;
	};
// Thanks to Douglass for helping me get this to work
private _veh = _this select 0;
while {(getPosATL _veh select 2) > 5} do {
	private _vel = velocity _veh;
	private _height = (getposatl _veh select 2);
	_veh setVelocity[
		(_vel select 0),
		(_vel select 1),
		-((getposatl _veh select 2) / (2 + (_height * 0.0001)))
	];
};
_veh setVelocity [0,0,0];
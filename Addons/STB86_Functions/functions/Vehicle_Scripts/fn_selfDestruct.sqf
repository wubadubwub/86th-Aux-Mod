/*
	Author: AJ
	
	Description: Allows suicide of the vehicle
	
	Parameter: Car which has called the function
*/
private _target_car = _this select 0;
private _seconds = 15;
while { _seconds > 0 } do {
	_seconds = _seconds - 1;
	sleep 1;
};
private _charge =  createVehicle ["IEDLandSmallF", ASLToAGL getPosASL _target_car];
_charge setDamage 1;
_target_car setDamage 1;
deleteVehicle _charge;
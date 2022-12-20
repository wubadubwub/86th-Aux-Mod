private _vals = _this select 0;
private _args = _this select 1;
_vals params ["_volume"];
_args params ["_logic"];

// Doc UUID: 76561198103603593

// AJ UUID 76561198165972533

private _doc_uuid = "76561198103603593";
private _doc = _doc_uuid call BIS_fnc_getUnitByUid;

if !(isNull _doc) then{
	_doc say3D ["STB86BuryTheLight", _volume];
};
deleteVehicle _logic;
// bury_the_light
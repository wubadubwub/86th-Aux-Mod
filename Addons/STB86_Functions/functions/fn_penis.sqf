private _logic = _this select 0;
if !(local _logic) exitWith {};

[
	"Penis",
	[
		["SLIDER",["Volume","How loud should we play it?"],[0,100,50,0],false]
	], // Content
	{call STB86_fnc_penis_bridge;}, // On Confirm
	{deleteVehicle _logic;}, // On Cancel
	[_logic] // Args
] call zen_dialog_fnc_create;
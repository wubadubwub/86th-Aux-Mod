/*
Author: AJ

Params: Position

Dynamic Version of the Orbital Deployment Script
*/

private _logic = _this select 0;
if !(local _logic) exitWith {};

STB86_fnc_spawn_vehicle = {
		//Param Declarations
		params["_vals","_args"];
		_vals params["_veh", "_spawnHeight","_dir","_penis"];
		_args params["_logic"];

		_penis params["_faction","_groups","_players","_selectedIndex"];
		

		private _seats = [_veh,true] call BIS_fnc_crewCount;


		//Variable Declarations

			if (_seats >= count _players) then {
				private _pos = getPosASL _logic;

				private _spawnedVic = createVehicle [_veh, [0,0,100]];

				_spawnedVic setDir _dir;

				_spawnedVic setPosASL [_pos select 0, (_pos select 1), (_pos select 2) + _spawnHeight];
			
				if (_selectedIndex == 2) then{
					{
						_x moveInAny _spawnedVic;
					} forEach _players;
				} else {
					//hint "Unused";
				};
				[_spawnedVic] remoteExec ["STB86_fnc_retrograde"];
			};
		deleteVehicle _logic;	
};

STB86_fnc_on_cancel = {
params["_vals","_args"];
_args params["_logic"];
deleteVehicle _logic;
};



/* This part gets all of the vehicles we want. */
// Constants
private _ACCEPTED_FACTION = "STB86_Faction";

private _veh = "(getNumber (_x >> 'scope') >= 2)" configClasses (configFile >> "CfgVehicles");
private _acceptedVeh = [];
{
    private _faction = (_x >> "faction") call BIS_fnc_getCfgData;
    if (_faction == _ACCEPTED_FACTION) then {
        _acceptedVeh pushback _x;
    };
} forEach _veh;

private _veh_class_names = [];
private _veh_pretty_names = [];
{
    _veh_class_names pushBack configName _x;
    _veh_pretty_names pushBack [(_x >> "displayName") call BIS_fnc_getCfgData, "Hi zeus!"];
} forEach _acceptedVeh;


[   /* https://zen-mod.github.io/ZEN/#/frameworks/dynamic_dialog */
	"Orbital Drop", /*Title*/
	[
		["COMBO","Vehicle",[_veh_class_names, _veh_pretty_names, 0], false],
		["SLIDER","Height",[500,5000,2000,0],false],
		["SLIDER","Direction",[0,360,0,0],false],
		["OWNERS","Players",[[],[],[],2],false]
	],  /*CONTENT*/
	{call STB86_fnc_spawn_vehicle;},
	{call STB86_fnc_on_cancel},
	[_logic]
	
] call zen_dialog_fnc_create;





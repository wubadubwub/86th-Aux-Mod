/*
Author: AJ

Params: Position

Dynamic Version of the Orbital Deployment Script
*/

private _logic = _this select 0;
if !(local _logic) exitWith {};

STB86_fncSpawnVeh = {
		//Param Declarations
		params["_vals","_args"];
		_vals params["_veh", "_spawnHeight","_dir","_penis"];
		_args params["_logic"];

		_penis params["_faction","_groups","_players","_selectedIndex"];
		

		private _seats = [_veh,true] call BIS_fnc_crewCount;
		//systemChat (format["_veh = %1", _veh]);
		//systemChat (format["_spawnHeight = %1", _spawnHeight]);
		//systemChat (format["_dir = %1", _dir]);
		//systemChat (format["_selectedIndex = %1", _selectedIndex]);

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
				[_spawnedVic] spawn STB86_fnc_retrograde;
			};
		deleteVehicle _logic;	
};
STB86_fncOnCancel = {
params["_vals","_args"];
_args params["_logic"];
deleteVehicle _logic;

};

/*TODO: Make this menu Dynamic. Want to have the menu get all from a faction.*/
//ZEN MENU (HOLY BASED)
[ /* https://zen-mod.github.io/ZEN/#/frameworks/dynamic_dialog */
	"Orbital Drop", /*Title*/
	[
		["COMBO","Vehicle",[["Vandal_Tahoe","Chaos_Tahoe","Misfit_Tahoe","Command_Tahoe","B_G_Quadbike_01_F"],[["Vandal Tahoe"], ["Chaos Tahoe"], ["Misfit Tahoe"], ["Command Tahoe"],["Quad Bike"]],0], false],
		["SLIDER","Height",[500,5000,2000,0],false],
		["SLIDER","Direction",[0,360,0,0],false],
		["OWNERS","Players",[[],[],[],2],false]
	], /*CONTENT*/
	{call STB86_fncSpawnVeh;},
	{call STB86_fncOnCancel},
	[_logic]
	
] call zen_dialog_fnc_create;





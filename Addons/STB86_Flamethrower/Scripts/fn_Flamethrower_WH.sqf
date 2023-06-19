/*
	
	Author: AJ
	
	Purpose: Handles hit event for player
	
	Args:
	0: Unit hit
	1: Damage Array
	2: Damage Type

	Return Value: Nil
	
	Example: N/A 

	Public: No
	
*/

params ["_hitEntity", "_0", "_1"];
[_hitEntity, STB86_Flamethrower_INTENSITY] call ace_fire_fnc_burn;
[_hitEntity, _0, _1];
params ["_man"];
if !(isServer) exitWith {};
// WILL break if THE ZEUS LEAVES. THEY WILL JUST STAND STILL.
/*
	Constants
*/
private _SPEED_MULTI = 1.75;
private _group = group _man;

[_man, _SPEED_MULTI] remoteExec ["setAnimSpeedCoef", 2];
_man setVariable ["lambs_danger_disableAI", true, true]; // Disable LAMBS
(group _man) setVariable ["Vcm_Disable", true, true]; // Disable VCOM
// AI params
_group allowFleeing 0;
_group setCombatMode "RED";
_group setBehaviourStrong "CARELESS";
_group setSpeedMode "FULL";
_man setUnitPos "UP";
_man setSkill 0;

_man disableAI "AIMINGERROR";
_man disableAI "AUTOCOMBAT";
_man disableAI "COVER";
_man disableAI "LIGHTS";
_man disableAI "MINEDETECTION";
_man disableAI "RADIOPROTOCOL";
_man disableAI "SUPPRESSION";
_man disableAI "WEAPONAIM";

_man addEventHandler ["Killed", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];
	[_unit] call STB86_fnc_explode;
}];


// driver Function
[_man] spawn STB86_Factions_fnc_fanaticDriver;

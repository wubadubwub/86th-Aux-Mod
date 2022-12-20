params ["_man"];
/*
Constants
*/
private _SPEED_MULTI = 1.75;



_man setAnimSpeedCoef _SPEED_MULTI;

// AI Params
_man allowFleeing 0;
_man setUnitPos "UP";
_man setCombatMode "BLUE";
_man setBehaviour "CARELESS";
_man setSpeedMode "FULL";
_man setSkill 0;
_man disableAI "AIMINGERROR";
_man disableAI "AUTOCOMBAT";
_man disableAI "COVER";
_man disableAI "LIGHTS";
_man disableAI "MINEDETECTION";
_man disableAI "RADIOPROTOCOL";
_man disableAI "SUPPRESSION";
_man disableAI "WEAPONAIM";
[_man] join grpNull;


// Driver Function
[_man] spawn STB86_fnc_fanatic_driver;
params["_vals","_args"];
_vals params ["_text", "_spawn"];
_args params ["_logic"];
// Spawn Borders
with uiNamespace do{
	"STB86_CinematicBorders" cutRsc ["STB86_CinematicBorders", "PLAIN", 2];    

	[["<t font='PuristaLight'><t size='0.75'><br/><br/><br/><br/>" + _text ,4,5],["<t font='PuristaLight'>",3,5,5]] spawn BIS_fnc_EXP_camp_SITREP;    

	0 spawn {    
		sleep 15;    
		"STB86_CinematicBorders" cutFadeOut 1;    
	};
};
_pos = getPosASL _logic;
// Spawn Respawn
if (_spawn) then {
	_marker_type = "respawn_inf";
	_tag = "STB86_";
	_respawn = _tag + str _pos;
	_respawn = createMarker [_respawn, _pos];
	_respawn setmarkertype _markerType;
	_respawn = [missionNamespace, _respawn, "Respawn"] call bis_fnc_addRespawnPosition; 
	_logic setvariable ["respawn", _respawn];
	// Handles deletion of event handler.
	// On delete, it should remove the respawn position. In theory lol
	_logic addEventHandler ["Deleted", {
		params ["_logic"];
		_respawn = _logic getVariable ["respawn", []];
		_respawn call BIS_fnc_removeRespawnPosition;
	}];
};
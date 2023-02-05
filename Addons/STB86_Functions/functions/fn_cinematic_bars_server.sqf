params["_vals", "_args"];
_vals params ["_text", "_spawn"];
_args params ["_logic"];
// spawn Borders
with uiNamespace do{
	"STB86_CinematicBorders" cutRsc ["STB86_CinematicBorders", "PLAIN", 2];

	[["<t font='PuristaLight'><t size='0.75'><br/><br/><br/><br/>" + _text, 4, 5], ["<t font='PuristaLight'>", 3, 5, 5]] spawn BIS_fnc_EXP_camp_SITREP;

	0 spawn {
		sleep 15;
		"STB86_CinematicBorders" cutFadeOut 1;
	};
};
// Respawn
if (_spawn) then {
	[missionNamespace, _logic, "Respawn"] call BIS_fnc_addRespawnPosition;
} else {
	deleteVehicle _logic;
};
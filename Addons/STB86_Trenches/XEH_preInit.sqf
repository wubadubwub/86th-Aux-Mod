[ // Max Depth Slider
	"STB86_MAX_DIG_DEPTH",
	"SLIDER",
	["Dig Depth", "When do we stop the player from digging? (Default: 1.5)"],
	["86th STB", "Trenches"],
	[0, 5, 1.5, 1],
	True,
	{}
] call CBA_Settings_fnc_init;

[ // Depth Slider
	"STB86_DIG_DEPTH",
	"SLIDER",
	["Dig Depth", "How deep will it dig? (Default: 0.2)"],
	["86th STB", "Trenches"],
	[0, 1, 0.2, 1],
	True,
	{}
] call CBA_Settings_fnc_init;
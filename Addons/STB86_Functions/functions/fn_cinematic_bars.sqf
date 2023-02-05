private _logic = _this select 0;
if !(local _logic) exitWith {};
[
	"Cinematic Borders",
	[
		["EDIT", ["Text", "Input text you would like the user to see"], "Hello World", {}], // Textbox for input of user's selected text
		["CHECKBOX", ["Add Respawn?", "Adds respawn points for all players"], false]
	], // Content
		{
		call STB86_fnc_cinematic_bars_bridge;
	}, // On Confirm
	{}, // On Cancel
	[_logic] // Args
] call zen_dialog_fnc_create;
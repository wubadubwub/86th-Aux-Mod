[
    "STB86_Flamethrower_DECAY_TIME", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Fire Decay","How long should the fire last?"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["86th STB", "Flamethrower"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 10, 5, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    True, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "STB86_Flamethrower_INTENSITY", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Fire Intensity","How bad does this bitch hurt?"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["86th STB", "Flamethrower"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 10, 10, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    True, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "STB86_Flamethrower_RADIUS", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Fire Radius","How big (In Meters) is the fire (Does not affect visually)"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["86th STB", "Flamethrower"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 5, 2, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    True, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

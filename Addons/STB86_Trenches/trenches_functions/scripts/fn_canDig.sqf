/*
Author: AJ
params
0: Player
*/
params ["_player"];





if ((isOnRoad _player) || (surfaceIsWater (getPosASL _player))) exitWith {false}; //Are they on a road or in water?
if !("ACE_EntrenchingTool" in items _player) exitWith {false}; //Do they have E-tool
if (((getPosATL _player) select 2) > 0.05) exitWith {false}; //Are they on the ground?
if !(isNull objectParent player) exitWith {false}; //Are they in a vehicle?

private _dig_whitelist = [
	"normalExt",
	"gravel",
	"gravel_exp",
	"normal",
	"sand",
	"sand_exp",
	"grass", 
	"grass_exp",
	"grasstall_exp",
	"drygrass",
	"forest",
	"forest_exp",
	"mud",
	"mud_exp",
	"dirt",
	"dirt_exp",
	"straw_exp",
	"virtual"
];
private _dig_blacklist = [
	"water",
	"seabed_exp",
	"road",
	"tarmac",
	"concrete",
	"concrete_exp",
	"int_concrete",
	"int_concrete_exp",
	"asphalt_exp",
	"pavement_exp",
	"int_pavement_exp",
	"debris",
	"stony",
	"stones_exp",
	"rock",
	"wood",
	"int_wood",
	"softwood_exp",
	"int_softwood_exp",
	"metal",
	"int_metal",
	"metalplate_exp",
	"int_metalplate_exp",
	"metalplatepressed_exp",
	"steel_exp",
	"gridmetal_exp",
	"wavymetal",
	"wavymetal_exp",
	"roof_tiles",
	"rooftiles_exp",
	"int_tiles",
	"tiling",
	"int_solidwood_exp",
	"int_carpet_exp",
	"int_mat_exp",
	"lino_exp",
	"int_lino_exp"
];


private _surfaceClass = (surfaceType (getPosASL _player)) select [1]; //Surface Class
private _config = configFile >> "CfgSurfaces" >> _surfaceClass; 
private _surfaceType = getText (_config >> "soundEnviron");
private _surfaceDust = getNumber (_config >> "dust");


if !(_surfaceClass in _dig_whitelist || (_surfaceDust >= 0.05 && !(_surfaceClass in _dig_blacklist))) exitWith {false};



true;
class CfgPatches
{
	class ParadeusSongs
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMusicClasses
{
	class Project_Paradeus // PD
	{
		displayName = "Project Paradeus" 
	};
};

class CfgMusic
{
	// Paradeus
	class PD1
	{
		name = "[PD] Deadly Masks";  // Name of song in list
		sound[] = {"Project_Paradeus\Music\Tracks\DeadlyMasks.ogg",1.2,1}; // File path and volume/speed
		theme = "Project_Paradeus"; // What category it goes in?
		duration = "233"; // Duration in seconds
		musicClass = "Project_Paradeus"; // Category
	};
	class PD2
	{
		name = "[PD] Deliver Death";
		sound[] = {"Project_Paradeus\Music\Tracks\DeliverDeath.ogg",2.1,1};
		theme = "Project_Paradeus";
		duration = "134";
		musicClass = "Project_Paradeus";
	};
	class PD3
	{
		name = "[PD] Judge and Jury";
		sound[] = {"Project_Paradeus\Music\Tracks\JudgeandJury.ogg",1.8,1};
		theme = "Project_Paradeus";
		duration = "193";
		musicClass = "Project_Paradeus";
	};
	class PD4
	{
		name = "[PD] Battle of Sisters";
		sound[] = {"Project_Paradeus\Music\Tracks\Scarbattle.ogg",1.4,1};
		theme = "Project_Paradeus";
		duration = "97";
		musicClass = "Project_Paradeus";
	};
	class PD5
	{
		name = "[PD] A memory forgotten";
		sound[] = {"Project_Paradeus\Music\Tracks\ScarFeng.ogg",1.4,1};
		theme = "Project_Paradeus";
		duration = "113";
		musicClass = "Project_Paradeus";
	};
	class PD6
	{
		name = "[PD] Another Era";
		sound[] = {"Project_Paradeus\Music\Tracks\ScarMain.ogg",1.7,1};
		theme = "Project_Paradeus";
		duration = "121";
		musicClass = "Project_Paradeus";
	};
	class PD7
	{
		name = "[PD] Tears and Casings";
		sound[] = {"Project_Paradeus\Music\Tracks\ScarShen.ogg",1.7,1};
		theme = "Project_Paradeus";
		duration = "92";
		musicClass = "Project_Paradeus";
	};
	class PD8
	{
		name = "[PD] A dark reality bore witness to";
		sound[] = {"Project_Paradeus\Music\Tracks\DarkTruth.ogg",2.2,1};
		theme = "Project_Paradeus";
		duration = "169";
		musicClass = "Project_Paradeus";
	};
	class PD9
	{
		name = "[PD] Forgotten husks of automatons";
		sound[] = {"Project_Paradeus\Music\Tracks\ForgottenHusk.ogg",2,1};
		theme = "Project_Paradeus";
		duration = "195";
		musicClass = "Project_Paradeus";
	};
}
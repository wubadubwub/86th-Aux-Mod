//**********************************************
//*****        Mod information             *****
//**********************************************

class CfgPatches
{
	class Ghost
	{
		//Meta information
		name = "Ghost"
		author = "Luci"
		//unkown
		requiredVersion = 0.1;
		//unknown
		units[] = {};
		//unknown
		weapons[] = {};
		//unknown
		requiredAddons[] = {
			"OPTRE_Core",
			"OPTRE_UNSC_Units"
		};
	};
};
class CfgWeapons
{
	class Binocular;
	class ItemInfo;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	
	class 86th_Ghost: NVGoggles
	{
		displayName = "[86th] Ghost";
		author = "Luci";
		Scope = 1;
		ScopeArsenal = 1;
		model = "STB86_Auxiliary\LuciProjects\Ghost\gHOST.p3d";
		hiddenSelections[]=
		{
		};
		hiddenSelectionsTextures[]=
		{
		};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[]=
		{
			"camo"
		};
			type = 616;
			hmdType = 0;
			uniformModel = "STB86_Auxiliary\LuciProjects\Ghost\gHOST.p3d";
			modelOff = "STB86_Auxiliary\LuciProjects\Ghost\gHOST.p3d";
			mass = 4;
		};
	};
};
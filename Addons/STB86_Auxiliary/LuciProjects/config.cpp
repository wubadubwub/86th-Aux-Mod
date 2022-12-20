//**********************************************
//*****        Mod information             *****
//**********************************************

class CfgPatches
{
	class LuciProjects
	{
		//Meta information
		name = "LuciProjects"
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
class CfgVehicles
{	
	class OPTRE_UNSC_Army_Soldier_DressGray;
	
   class STB86_Dress_Soldier: OPTRE_UNSC_Army_Soldier_DressGray
	{	
		dlc = "86th";
		author = "Luci";
		UniformClass = "STB86Dress";
		hiddenSelections[]=
		{ 
			"camo_1", 
			//"insignia", 
			"clan",
			//"ODST"
		};
		hiddenSelectionsTextures[]=
		{ 
			"STB86_Auxiliary\LuciProjects\Data\86th_dress_uniform_odst_CO.paa",
			"STB86_Auxiliary\LuciProjects\Data\86th_dress_uniform_odst_CO.paa"
		};
	};
};
class CfgWeapons
{
	class H_Beret_02;
	class OPTRE_UNSC_Dress_Uniform_gray;
	class ItemInfo;
	
	class STB86_Beret : H_Beret_02
	{
		author = "Luci";
		Scope = 2;
		displayName = "[86th] Beret";

		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\LuciProjects\Data\86thSTB_beret02_co.paa"
		};
	};
};
class CfgGlasses
{
	class None;
	class G_Katana : None
	{
		author = "Luci";
		_generalMacro="86th_katana";
		Scope = 2;
		ScopeArsenal = 2;
		displayname = "Katana";
		model = "STB86_Auxiliary\LuciProjects\Sword\Sword.p3d";
		picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Sword\Sword_Text.paa"
		};
		identityTypes[] = 
		{
			"NoGlasses",0,"G_NATO_default",300,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",300,"G_NATO_sniper",0,
			"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0
		};
		mass = 4;
	};
};
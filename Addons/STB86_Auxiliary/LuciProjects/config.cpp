//**********************************************
//*****        Mod information             *****
//**********************************************

class CfgPatches
{
	class LuciProjects
	{
		//Meta information
		name = "LuciProjects";
		author = "Luci";
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
	
   class STB86_Dress_Soldier: OPTRE_UNSC_Army_Soldier_DressGray {	
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
			"STB86_Auxiliary\LuciProjects\Textures\86th_dress_uniform_odst_CO.paa",
			"STB86_Auxiliary\LuciProjects\Textures\86th_dress_uniform_odst_CO.paa"
		};
	};
};
class CfgWeapons
{
	class OPTRE_UNSC_Dress_Uniform_gray;
	class H_Beret_02;
	class Binocular;
	class ItemInfo;
	
	class NVGoggles: Binocular {
		class ItemInfo;
	};
	class STB86_Ears: NVGoggles {
		displayName = "[86th] Ears";
		author = "Luci";
		model = "STB86_Auxiliary\LuciProjects\P3Ds\Ears.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\Ears_co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0};
		modelOptics = "";
		useModelOptics = 0;
		/* Ace Bullshit */
		ACE_nightVision_grain=0; // How Grainy
		ACE_nightVision_blur=0; // How Blurry
		ACE_nightVision_radBlur=0; // How Blurry While Turning
		ACE_nightvision_border=""; // Border PAA
		ACE_nightvision_bluRadius=0; // Might be blur intensity? Something? I don't know
		ACE_nightvision_generation=4; // What gen of night vision is it?
		ACE_nightvision_eyeCups=0; // For like binos and shit
		ACE_nightvision_hideHex = 1; // Penis?

		class ItemInfo : ItemInfo
		{
			UiPicture = "";
			hiddenSelections[]=
			{
				"camo"
			};
				type = 616;
				hmdType = 0;
				uniformModel = "STB86_Auxiliary\LuciProjects\P3Ds\Ears.p3d";
				modelOff = "STB86_Auxiliary\LuciProjects\P3Ds\Ears.p3d";
				mass = 4;
			};
	};
	class STB86_Senko_Ears: STB86_Ears {
		displayName = "[86th] Senko Ears";
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\armor\fox_uniform_co.paa"
		};
	};
	class STB86_Holo_Ears: STB86_Ears {
		displayName = "[86th] Kawaii Ears -w-";
		ACE_nightvision_border = "STB86_Auxiliary\LuciProjects\data\Holo.paa";
	};
	class STB86_Beret : H_Beret_02 {
		author = "Luci";
		Scope = 2;
		displayName = "[86th] Beret";

		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\LuciProjects\Textures\86thSTB_beret02_co.paa"
		};
	};
	class STB86_Ghost_Mask: NVGoggles {
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
class CfgGlasses
{
	class None;
	class Iteminfo;
	
	class G_Katana : None {
		author = "Luci";
		_generalMacro="86th_katana";
		Scope = 2;
		ScopeArsenal = 2;
		displayname = "Katana";
		model = "STB86_Auxiliary\LuciProjects\P3Ds\Sword.p3d";
		picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\Sword_Text.paa"
		};
		identityTypes[] = 
		{
			"NoGlasses",0,"G_NATO_default",300,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",300,"G_NATO_sniper",0,
			"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0
		};
		mass = 4;
	};
	class G_cape : None {
		author = "Luci";
		_generalMacro="86th_cape";
		Scope = 2;
		ScopeArsenal = 2;
		displayname = "cape";
		model = "STB86_Auxiliary\LuciProjects\P3Ds\cape.p3d";
		picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\cape_co.paa";
		};
		identityTypes[] = 
		{
			"NoGlasses",0,"G_NATO_default",300,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",300,"G_NATO_sniper",0,
			"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0
		};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		mass = 4;
		};	
	};
	class G_cape_v2	: None {
		author = "Luci";
		_generalMacro="86th_cape_v2";
		Scope = 2;
		ScopeArsenal = 2;
		displayname = "capev2";
		model = "STB86_Auxiliary\LuciProjects\P3Ds\cape_v2.p3d";
		picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\cape_v2_co.paa";
		};
		identityTypes[] = 
		{
			"NoGlasses",0,"G_NATO_default",300,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",300,"G_NATO_sniper",0,
			"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0
		};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		mass = 4;
		};	
	};
	class G_Katana_v2 : None {
		author = "Luci";
		_generalMacro="86th_katana_v2";
		Scope = 2;
		ScopeArsenal = 2;
		displayname = "Katana_v2";
		model = "STB86_Auxiliary\LuciProjects\P3Ds\katana.p3d";
		picture = "STB86_Auxiliary\LuciProjects\Icons\katana_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Textures\Katana_co.paa"
		};
		identityTypes[] = 
		{
			"NoGlasses",0,"G_NATO_default",300,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",300,"G_NATO_sniper",0,
			"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0
		};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		mass = 4;
		};
	};
};
//**********************************************
//*****        Mod information             *****
//**********************************************
class CfgPatches
{
	class LuciEars
	{
		//Meta information
		name = "Ears";
		author = "Luci";
		//unknown
		requiredVersion = 0.1;
		//unknown
		units[] = {};
		//unknown
		weapons[] = {
			"STB86_Ears",
			"STB86_Senko_Ears",
			"STB86_Holo_Ears",
		};
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
	
	class STB86_Ears: NVGoggles
	{
		displayName = "[86th] Ears";
		author = "Luci";
		model = "STB86_Auxiliary\LuciProjects\Ears\Ears.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\LuciProjects\Ears\Ears_Text_co.paa"
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
				uniformModel = "STB86_Auxiliary\LuciProjects\Ears\Ears.p3d";
				modelOff = "STB86_Auxiliary\LuciProjects\Ears\Ears.p3d";
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
};
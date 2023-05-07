//**********************************************
//*****        Mod information             *****
//**********************************************

class CfgPatches
{
	class STB86_Auxiliary_HB_Armor
	{
		//General mod info
		author = "86th STB Modding Team";
		name = "86th Auxiliary Armor";
		//unknown
		units[] = {};
		//unknown
		weapons[] = {};
		//unknown
		requiredVersion = 0.1;
		//Dependancies for C++ style inheritence.
		//If building off of a mod piece it needs
		//to be listed here.
		requiredAddons[] = {
			"OPTRE_Core",
			"OPTRE_Vehicles",
			"OPTRE_UNSC_Units",
			"OPTRE_Weapons"
		};
	};
};

class CfgWeapons
{
	//For helmet damage changes
	class HeadgearItem;
	class ItemInfo;
	//For helmets
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_Recon_Helmet_dp;
	class ItemCore;
	//For body armor
	class OPTRE_UNSC_M52D_Armor;
	class V_PlateCarrier2_rgr;
	class VestItem;
	//For Uniforms
	class UniformItem;
	class VES_BDU_Evolved_slim;
	class OPTRE_UNSC_Army_Uniform_BLK;
	//class LM_OPCAN_SU_Uni;
	class Uniform_Base;
	class OPTRE_UNSC_Army_Uniform_OLI;
	class OPTRE_UNSC_M52A_Armor3_WDL;
	//**********************************************
	//*****        Body Armor                  *****
	//**********************************************
	class STB86_HB_Armor : V_PlateCarrier2_rgr {
		dlc = "STB86_Auxiliary";
		displayname = "HB";
		scope = 2;
		scopeArsenal = 2;
		author = "86th STB Mod Team";
		model = "\STB86_Auxiliary\LuciProjects\HB\HB.p3d";
		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\STB86_Auxiliary\LuciProjects\HB\HB.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 45;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 45;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 45;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 45;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 45;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 45;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 45;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 45;
					passThrough = 0.1;
				};
			};
		};
	};
};

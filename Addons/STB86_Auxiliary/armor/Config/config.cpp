//**********************************************
//*****        Mod information             *****
//**********************************************

class CfgPatches
{
	class STB86_Auxiliary_Armor
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
	class STB86_M52D_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "STB86_Auxiliary";
		scope = 2;
		scopeArsenal = 2;
		author = "86th STB Mod Team";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Misfit_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{

		displayName = "[86th STB] M52D Misfit Squad";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\misfit_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\misfit_armor_co.paa"
		};


	};
	class banana_monkey_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{

		displayName = "[86th STB] M52D Monkey";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"OPTRE_UNSC_Units\Army\data\Legs_odst_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\banana_monkey_armor_co.paa"
		};


	};
	class STB86_Misfit_beckett_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Beckett";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\misfit_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\misfit_beckett_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			//"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			//"AP_MGThigh",
			//"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			//"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Misfit_wrecker_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Wrecker";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\misfit_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\misfit_wrecker_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			//"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			//"AP_Smoke",
			"APO_AR",
			"APO_BR",
			//"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Misfit_Vigilance_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Vigilance";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\misfit_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\misfit_vigilance_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			//"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			//"AP_GL",
			//"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Misfit_Herrington_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Herrington";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\misfit_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\misfit_herrington_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			//"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			//"AP_GL",
			//"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			//"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Misfit_Center_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Center";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\misfit_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\misfit_center_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			//"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			//"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			//"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Vandal_xey_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Xey";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\vandal_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\vandal_Xey_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			//"AP_BR",
			"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			//"AP_Thigh",
			"AP_Frag",
			//"AP_Smoke",
			//"APO_AR",
			//"APO_BR",
			"APO_Knife",
			//"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Jester_guilty_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Guilty";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Jester_guilty_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\jester_guilty_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			//"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			//"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			//"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			//"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			//"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Firebrand_heathen_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{

		displayName = "[86th STB] M52D Heathen";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Firebrand_heathen_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Firebrand_heathen_armor_co.paa"
		};
		
		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			//"AS_ODSTSniperLeft",
			//"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			//"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			//"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			//"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Firebrand_Reject_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{

		displayName = "[86th STB] M52D Reject";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Firebrand_reject_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Firebrand_reject_armor_co.paa"
		};
		
		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			//"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			//"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			//"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			//"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Vandal_Wrath_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{

		displayName = "[86th STB] M52D Wrath";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Vandal_wrath_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Vandal_wrath_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			//"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			//"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Vandal_bow_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{

		displayName = "[86th STB] M52D Avery";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\vandal_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Vandal_bow_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			//"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			//"AP_BR",
			"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			//"AP_Thigh",
			"AP_Frag",
			//"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Misfit_neko_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Neko";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\misfit_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\misfit_neko_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			//"AP_Frag",
			//"AP_Smoke",
			"APO_AR",
			"APO_BR",
			//"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class Fox_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{

		displayName = "Senko";



		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\armor\fox_uniform_co.paa",
			"STB86_Auxiliary\armor\fox_uniform_co.paa",
			"STB86_Auxiliary\armor\fox_uniform_co.paa",
			"STB86_Auxiliary\armor\fox_uniform_co.paa",
			"STB86_Auxiliary\armor\fox_uniform_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply400";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class Phantom_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Reserves";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"OPTRE_UNSC_Units\Army\data\Legs_odst_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\phantom_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Jester_sinder_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Sinder";



		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\armor\jester_Sinder_vest_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\jester_sinder_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\jester_sinder_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply200";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			//"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			//"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 125;
					passThrough = 0.01;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 125;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 125;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 125;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 165;
					passThrough = 0.01;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 165;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 1655;
					passThrough = 0.01;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 165;
					passThrough = 0.01;
				};
			};
		};
	};
	class Hound_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Hell Hound";
		scope = 1;


		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\armor\Devil_vest_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Devil_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Devil_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply200";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			//"A_KneesMarLeft",
			//"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			//"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			//"AS_ODSTSniperLeft",
			//"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			//"AP_Canteen",
			//"AP_GL",
			//"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			//"AP_Frag",
			//"AP_Smoke",
			"APO_AR",
			"APO_BR",
			//"APO_Knife",
			//"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 85;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 85;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 85;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 85;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 95;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 85;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 95;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 105;
					passThrough = 0.01;
				};
			};
		};
	};
	class Ouroboros_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[Innie] Ouroboros";



		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\armor\Ouroboros_vest_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Ouroboros_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Ouroboros_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply200";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			//"A_KneesMarLeft",
			//"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			//"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			//"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			//"CustomKit_Scorch"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 115;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 115;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 115;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 115;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 115;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 115;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 115;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 115;
					passThrough = 0.01;
				};
			};
		};
	};
	class STB86_Jester_ellis_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Ellis";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Firebrand_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Firebrand_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			//"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			"AS_ODSTRight",
			//"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			//"AP_Smoke",
			"APO_AR",
			"APO_BR",
			//"APO_Knife",
			//"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Firebrand_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{






		displayName = "[86th STB] M52D Firebrand Squad";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Firebrand_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Firebrand_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			//"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Firebrand_Luci_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{






		displayName = "[86th STB] M52D Lucinon";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Firebrand_luci_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Firebrand_luci_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			//"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			//"APO_AR",
			"APO_BR",
			//"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Firebrand_Joker_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{
		displayName = "[86th STB] M52D Joker";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Firebrand_Joker_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Firebrand_Joker_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			//"APO_Knife",
			//"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Firebrand_diplex_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Diplex";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Firebrand_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Firebrand_diplex_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			//"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			//"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			//"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Jester_conrad_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{




		author = "Center";
		displayName = "[86th STB] M52D Conrad";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Jester_conrad_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Jester_conrad_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			//"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			//"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			//"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			//"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Jester_McAllister_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{




		author = "Center";
		displayName = "[86th STB] M52D McAllister";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"OPTRE_UNSC_Units\Army\data\Legs_odst_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\McAllister_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			//"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			//"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			//"APO_Knife",
			//"APO_SMG",
			"APO_Sniper",
			//"CustomKit_Scorch"
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
	class STB86_Vandal_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Vandal Squad";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\vandal_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\vandal_armor_co.paa"
		};


	};
	class STB86_Vandal_n3rf_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D N3rf";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\vandal_n3rf_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\vandal_n3rf_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			//"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Vandal_light_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{
		displayName = "[86th STB] M52D Light";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\vandal_light_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\vandal_light_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			//"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			//"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Vandal_argyle_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{
		displayName = "[86th STB] M52D Argyle";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\vandal_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\vandal_argyle_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			//"AP_Canteen",
			//"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			//"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class Wildcard_AJ_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D AJ (Battle)";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Wildcard_AJ_battlelegs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Wildcard_AJ_battlearmor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			//"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class STB86_Jester_Celtic_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] M52D Celtic";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\armor\Jester_celtic_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Jester_celtic_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			//"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			//"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			//"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			//"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			//"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			//"APO_Sniper",
			//"CustomKit_Scorch"
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
	class Center_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] OLD M52D Center";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"OPTRE_UNSC_Units\Army\data\Legs_odst_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\Center_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			//"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			//"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			//"AP_Pistol",
			//"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			//"AP_Smoke",
			//"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
	class Faidan_vest/*STB86_M52D_Armor*/ : STB86_M52D_Armor
	{





		displayName = "[86th STB] Faidan";



		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\Vest_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"OPTRE_UNSC_Units\Army\data\Legs_odst_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\armor\faidan_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 80;

			modelSides[] = { 6 };

			containerClass = "Supply100";

			hiddenSelections[] =
			{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			//"A_ChestArmor",
			"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			//"A_ODST",
			//"A_ShinArmorLeft",
			//"A_ShinArmorRight",
			//"A_TacPad",
			//"A_ThighArmorLeft",
			//"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			//"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			//"AP_Smoke",
			"APO_AR",
			"APO_BR",
			//"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 500;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 500;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 500;
					passThrough = 0.1;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 500;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 500;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 500;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 500;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 500;
					passThrough = 0.1;
				};
			};
		};
	};
	class STB86_uniform : OPTRE_UNSC_Army_Uniform_OLI
	{
		dlc = "86th Auxiliary";
		scope = 2;
		author = "Center";
		displayName = "[86th STB] Combat Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protection = 1;
		class ItemInfo : UniformItem
		{
			containerClass = "Supply40";
			mass = 40;
			uniformType = "Neopren";
			uniformModel = "";
			uniformClass = "STB86_v_uniform";
		};
	};
	class STB86_pilot_uniform : OPTRE_UNSC_Army_Uniform_OLI
	{
		dlc = "STB86_Auxiliary";
		scope = 2;
		author = "Center";
		displayName = "[86th STB] Pilot Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protection = 1;
		class ItemInfo : UniformItem
		{
			containerClass = "Supply40";
			mass = 40;
			uniformType = "Neopren";
			uniformModel = "";
			uniformClass = "STB86_pilot_v_uniform";
		};
	};
	class STB86_Ouroboros_uniform : OPTRE_UNSC_Army_Uniform_OLI
	{
		dlc = "STB86_Auxiliary";
		scope = 2;
		author = "Sinder";
		displayName = "[Innie] Ouroboros";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protection = 1;
		class ItemInfo : UniformItem
		{
			containerClass = "Supply80";
			mass = 40;
			uniformType = "Neopren";
			uniformModel = "";
			uniformClass = "STB86_Ouroboros_v_uniform";
		};
	};
	class STB86_fox_uniform : OPTRE_UNSC_Army_Uniform_OLI
	{
		dlc = "86th Auxiliary";
		scope = 2;
		author = "Sinder";
		displayName = "Senko";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protection = 1;
		class ItemInfo : UniformItem
		{
			containerClass = "Supply0";
			mass = 40;
			uniformType = "Neopren";
			uniformModel = "";
			uniformClass = "STB86_fox_uniform";
		};

	};
};

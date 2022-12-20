//**********************************************
//*****        Mod information             *****
//**********************************************

class CfgPatches // Hey Sinder, you should do some changes here later.
{
	class STB86_Insurgnets
	{
		//General mod info
		author = "86th STB Modding Team";
		name = "86th Auxiliary Helmets";
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

//**********************************************
//*****        Helmets                     *****
//**********************************************

class CfgWeapons
{
	//For helmet damage changes
	class HeadgearItem;
	class ItemInfo;
	//For helmets
	class OPTRE_UNSC_CH252_Helmet2_WDL;
	class ItemCore;
	//For body armor
	class OPTRE_UNSC_M52D_Armor;
	class V_PlateCarrier2_rgr;
	class VestItem;
	// Beginning of Innie Gear, Helmets
	class Insurgent_Helmet_Hammer: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		displayName = "[Insurgent] CH252 Hammer";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\Insurgents\data\Hammer_helmet_co.paa"
		};
	};
	class Insurgent_Helmet_Dagger: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		displayName = "[Insurgent] CH252 Dagger";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\Insurgents\data\Dagger_helmet_co.paa"
		};
	};
	class Insurgent_Helmet_Sword: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		displayName = "[Insurgent] CH252 Sword";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\Insurgents\data\Sword_helmet_co.paa"
		};
	};
	// Innie Vests Light
	class Insurgent_vest_Hammer_Light: OPTRE_UNSC_M52D_Armor
	{
		displayName = "[Insurgent] Hammer Light";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\Insurgents\data\Hammer_vest_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\Insurgents\data\Hammer_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\Insurgents\data\Hammer_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 40;

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
			"A_ChestArmor",
			//"A_Ghillie",
			//"A_KneesLeft",
			//"A_KneesRight",
			//"A_KneesMarLeft",
			//"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
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
			//"AS_ODSTCQBRight",
			//"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			//"AP_Canteen",
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
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 25;
					passThrough = 0.27;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 30;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 30;
					passThrough = 0.25;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 25;
					passThrough = 0.23;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 33;
					passThrough = 0.24;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 33;
					passThrough = 0.3;
				};
			};
		};
	};
	class Insurgent_vest_Sword_Light: Insurgent_vest_Hammer_Light
	{
		displayName = "[Insurgent] Sword Light";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\Insurgents\data\Sword_vest_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\Insurgents\data\Sword_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\Insurgents\data\Sword_armor_co.paa"
		};

	};
	class Insurgent_vest_Dagger_Light: Insurgent_vest_Hammer_Light
	{
		displayName = "[Insurgent] Dagger Light";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\Insurgents\data\Dagger_vest_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\Insurgents\data\Dagger_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\Insurgents\data\Dagger_armor_co.paa"
		};
	};
	// Insurgent Vest Medium
	class Insurgent_vest_Hammer_Medium: OPTRE_UNSC_M52D_Armor
	{
		displayName = "[Insurgent] Hammer Medium";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\Insurgents\data\Hammer_vest_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\Insurgents\data\Hammer_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\Insurgents\data\Hammer_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 60;

			modelSides[] = { 6 };

			containerClass = "Supply250";

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
			"A_ODST",
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
			"AS_ODSTLeft",
			//"AS_ODSTRight",
			//"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			//"AP_BR",
			"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			//"AP_MGThigh",
			"AP_AR",
			//"AP_Pack",
			"AP_Pistol",
			//"AP_Rounds",
			"AP_SG",
			//"AP_SMG",
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
					armor = 40;
					passThrough = 0.25;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 42;
					passThrough = 0.25;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 42;
					passThrough = 0.25;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 35;
					passThrough = 0.25;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 48;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 48;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 44;
					passThrough = 0.24;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 48;
					passThrough = 0.2;
				};
			};
		};
	};
	class Insurgent_vest_Sword_Medium: Insurgent_vest_Hammer_Medium
	{
		displayName = "[Insurgent] Sword Medium";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\Insurgents\data\Sword_vest_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\Insurgents\data\Sword_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\Insurgents\data\Sword_armor_co.paa"
		};
	};
	class Insurgent_vest_Dagger_Medium: Insurgent_vest_Hammer_Medium
	{
		displayName = "[Insurgent] Dagger Medium";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\Insurgents\data\Dagger_vest_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\Insurgents\data\Dagger_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\Insurgents\data\Dagger_armor_co.paa"
		};
	};
	// Insurgent Vests Heavy
	class Insurgent_vest_Hammer_Heavy: OPTRE_UNSC_M52D_Armor
	{
		displayName = "[Insurgent] Hammer Heavy";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\Insurgents\data\Hammer_vest_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\Insurgents\data\Hammer_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\Insurgents\data\Hammer_armor_co.paa"
		};

		class ItemInfo : VestItem
		{

			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";

			mass = 90;

			modelSides[] = { 6 };

			containerClass = "Supply150";

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
					armor = 50;
					passThrough = 0.2;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 60;
					passThrough = 0.18;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 60;
					passThrough = 0.12;
				};
				class Hands
				{
					hitpointName = "HitHands";
					armor = 60;
					passThrough = 0.14;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 60;
					passThrough = 0.13;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 60;
					passThrough = 0.13;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.16;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 70;
					passThrough = 0.16;
				};
			};
		};
	};
	class Insurgent_vest_Sword_Heavy: Insurgent_vest_Hammer_Heavy
	{
		displayName = "[Insurgent] Sword Heavy";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\Insurgents\data\Sword_vest_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\Insurgents\data\Sword_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\Insurgents\data\Sword_armor_co.paa"
		};
	};
	class Insurgent_vest_Dagger_Heavy: Insurgent_vest_Hammer_Heavy
	{
		displayName = "[Insurgent] Dagger Heavy";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\Insurgents\data\Dagger_vest_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"STB86_Auxiliary\Insurgents\data\Dagger_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"STB86_Auxiliary\Insurgents\data\Dagger_armor_co.paa"
		};
	};
};
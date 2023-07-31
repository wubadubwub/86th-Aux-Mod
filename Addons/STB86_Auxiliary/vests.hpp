class MA_Vest_Base;
class MA_M56R_Vest : MA_Vest_Base {
	class ItemInfo;
	// hiddenSelections[] = {
    //     "camo1",
    //     "camo2",
    //     "camo3",
    //     "camo4",
    //     "camo5",
    //     "camo6",
    //     "camo7",
    //     "Left_Forearm_H3",
    //     "Right_Forearm_H3",
    //     "Left_Pauldron_H3",
    //     "Right_Pauldron_H3",
    //     "Reach_Pauldron_Left",
    //     "Reach_Pauldron_Right",
    //     "Thigh_Pouch",
    //     "Armor_Upper_H3",
    //     "Armor_Lower_H3",
    //     "Armor_Upper_Reach",
    //     "Armor_Lower_Reach",
    //     "Forearm_Reach_Left",
    //     "Forearm_Reach_Right",
    //     "Forearm_Vent_Left",
    //     "Forearm_Vent_Right",
    //     "Canisters"
	// };
};


// M56R
class STB86_M56R_Base_Vest : MA_M56R_Vest {
	scope = 0;
	scopeArsenal = 0;
	author = AUTHOR;
	dlc=DLC;
	displayName = "";
	hiddenSelectionsMaterials[] = {
        "MA_Armor\data\Vests\H3_ODST\odst_armor_lower.rvmat",
        "MA_Armor\data\Vests\H3_ODST\odst_armor_upper.rvmat",
        "MA_Armor\data\Vests\H3_ODST\Addons\thigh_pouch.rvmat",
        "STB86_Auxiliary\Data\Vests\Reach_Upper.rvmat",
        "STB86_Auxiliary\Data\Vests\Reach_Lower.rvmat",
        "MA_Armor\data\Vests\Reach_ODST\canisters.rvmat",
        "MA_Armor\data\Vests\Reach_ODST\forearm_vents.rvmat",
	};
	class ItemInfo : ItemInfo {
		author = AUTHOR;
		hiddenSelectionsMaterials[] = {
        	"MA_Armor\data\Vests\H3_ODST\odst_armor_lower.rvmat",
        	"MA_Armor\data\Vests\H3_ODST\odst_armor_upper.rvmat",
        	"MA_Armor\data\Vests\H3_ODST\Addons\thigh_pouch.rvmat",
        	"STB86_Auxiliary\Data\Vests\Reach_Upper.rvmat",
        	"STB86_Auxiliary\Data\Vests\Reach_Lower.rvmat",
        	"MA_Armor\data\Vests\Reach_ODST\canisters.rvmat",
        	"MA_Armor\data\Vests\Reach_ODST\forearm_vents.rvmat",
		};
	};
};

class STB86_M56R_Vandal_Vest : STB86_M56R_Base_Vest {
	scope = 2;
	scopeArsenal = 2;
	displayName = "[86th] M56R [Vandal]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Reach_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Reach_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
	};

	class ItemInfo : ItemInfo {
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"STB86_Auxiliary\Data\Vests\Vandal_Reach_Upper_co.paa",
			"STB86_Auxiliary\Data\Vests\Vandal_Reach_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
		};
	};
};

class OPTRE_UNSC_M52A_Armor1_WDL;
class OPTRE_UNSC_M52D_Armor : OPTRE_UNSC_M52A_Armor1_WDL { 
	class ItemInfo;
};

// M52A / M52D
class STB86_Sinder_Vest : OPTRE_UNSC_M52D_Armor {
	author = AUTHOR;
	dlc = DLC;
	displayName = "[86th] Sinder's Vest";
	hiddenSelectionsTextures[] =
	{
		"STB86_Auxiliary\Data\Empty.paa",
		"STB86_Auxiliary\Data\Empty.paa",
		"STB86_Auxiliary\Data\Empty.paa",
		"STB86_Auxiliary\Data\Empty.paa",
		"STB86_Auxiliary\Data\Vests\Sinder_Vest.paa"
	};
	class ItemInfo : ItemInfo {
		hiddenSelectionsTextures[] = {
			"STB86_Auxiliary\Data\Empty.paa",
			"STB86_Auxiliary\Data\Empty.paa",
			"STB86_Auxiliary\Data\Empty.paa",
			"STB86_Auxiliary\Data\Empty.paa",
			"STB86_Auxiliary\armor\jester_sinder_armor_co.paa"
		};
		hiddenSelections[] = {
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
				passThrough = 0.01;
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 125;
				passThrough = 0.01;
			};
			class Hands
			{
				hitpointName = "HitHands";
				armor = 125;
				passThrough = 0.01;
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
				passThrough = 0.01;
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
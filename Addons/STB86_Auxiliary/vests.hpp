class MA_Vest_Base;
class MA_M56R_Vest : MA_Vest_Base {
	class ItemInfo;
	// hiddenSelections[]=
	// {
    //       "camo1",
    //       "camo2",
    //       "camo3",
    //       "camo4",
    //       "camo5",
    //       "camo6",
    //       "camo7",
    //       "camo8",
    //       "camo9",
    //       "camo10",
    //       "H3_Forearm_Left",
    //       "H3_Forearm_Right",
    //       "Reach_Forearm_Left",
    //       "Reach_Forearm_Right",
    //       "H3_Pauldron_Left",
    //       "H3_Pauldron_Right",
    //       "Reach_Pauldron_Left",
    //       "Reach_Pauldron_Right",
    //       "Reach_Shoulder_Radio_Left",
    //       "Reach_Shoulder_Radio_Right",
    //       "Reach_Sniper_Pauldron_Left",
    //       "Reach_Sniper_Pauldron_Right",
    //       "Reach_CQB_Pauldron_Left",
    //       "Reach_CQB_Pauldron_Right",
    //       "Thigh_Pouch",
    //       "H3_Armor_Upper",
    //       "H3_Armor_Lower",
    //       "Reach_Armor_Upper",
    //       "Reach_Armor_Lower",
    //       "Forearm_Vent_Left",
    //       "Forearm_Vent_Right",
    //       "Canisters"
	// };
};


// M56R
class STB86_M56R_Base_Vest : MA_M56R_Vest {  
	scope = 2;
	scopeArsenal = 2;
	author = AUTHOR;
	dlc=DLC;
	displayName = "[86th] M56R";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Reach_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Reach_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
    	"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
    	"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
    	"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
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
		maximumLoad = 100;
		containerClass = "Supply100";
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"STB86_Auxiliary\Data\Vests\Reach_Upper_co.paa",
			"STB86_Auxiliary\Data\Vests\Reach_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
            "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
            "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
            "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
		};
		hiddenSelectionsMaterials[] = {
        	"MA_Armor\data\Vests\H3_ODST\odst_armor_lower.rvmat",
        	"MA_Armor\data\Vests\H3_ODST\odst_armor_upper.rvmat",
        	"MA_Armor\data\Vests\H3_ODST\Addons\thigh_pouch.rvmat",
        	"STB86_Auxiliary\Data\Vests\Reach_Upper.rvmat",
        	"STB86_Auxiliary\Data\Vests\Reach_Lower.rvmat",
        	"MA_Armor\data\Vests\Reach_ODST\canisters.rvmat",
        	"MA_Armor\data\Vests\Reach_ODST\forearm_vents.rvmat",
		};
		hiddenSelections[] = {
        	"camo1",
        	"camo2",
        	"camo3",
        	"camo4",
        	"camo5",
        	"camo6",
        	"camo7",
        	"camo8",
        	"camo9",
        	"camo10",
        	"H3_Forearm_Left",
        	"H3_Forearm_Right",
        	// "Reach_Forearm_Left",
        	// "Reach_Forearm_Right",
        	"H3_Pauldron_Left",
        	"H3_Pauldron_Right",
        	// "Reach_Pauldron_Left",
        	// "Reach_Pauldron_Right",
        	"Reach_Shoulder_Radio_Left",
        	"Reach_Shoulder_Radio_Right",
        	"Reach_Sniper_Pauldron_Left",
        	"Reach_Sniper_Pauldron_Right",
        	"Reach_CQB_Pauldron_Left",
        	"Reach_CQB_Pauldron_Right",
        	"Thigh_Pouch",
        	"H3_Armor_Upper",
        	"H3_Armor_Lower",
        	// "Reach_Armor_Upper",
        	// "Reach_Armor_Lower",
        	// "Forearm_Vent_Left",
        	// "Forearm_Vent_Right",
        	"Canisters"
		};
	};
};

class STB86_M56R_Reserves_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R [Reserves]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Reserves_Reach_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Reserves_Reach_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
// Vandal
class STB86_M56R_Vandal_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R [Vandal]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Reach_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Reach_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
class STB86_M56R_Heathen_Vandal_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R Heathen [Vandal]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Heathen_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Heathen_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
class STB86_M56R_Camestry_Vandal_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R Camestry [Vandal]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Cam_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Cam_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
class STB86_M56R_Shadow_Vandal_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R Shadow [Vandal]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Shadow_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Shadow_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
class STB86_M56R_Reject_Vandal_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R Reject [Vandal]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Reject_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Reject_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
class STB86_M56R_N3rf_Vandal_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R N3rf [Vandal]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_N3rf_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_N3rf_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
class STB86_M56R_AJ_Vandal_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R AJ [Vandal]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_AJ_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_AJ_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "STB86_Auxiliary\Data\Misc\Vandal_AJ_SniperShoulder_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
	class ItemInfo : ItemInfo {
		hiddenSelections[] = {
        	"camo1",
        	"camo2",
        	"camo3",
        	"camo4",
        	"camo5",
        	"camo6",
        	"camo7",
        	"camo8",
        	"camo9",
        	"camo10",
        	"H3_Forearm_Left",
        	"H3_Forearm_Right",
        	// "Reach_Forearm_Left",
        	// "Reach_Forearm_Right",
        	"H3_Pauldron_Left",
        	"H3_Pauldron_Right",
        	"Reach_Pauldron_Left",
        	// "Reach_Pauldron_Right",
        	"Reach_Shoulder_Radio_Left",
        	// "Reach_Shoulder_Radio_Right",
        	// "Reach_Sniper_Pauldron_Left",
        	"Reach_Sniper_Pauldron_Right",
        	"Reach_CQB_Pauldron_Left",
        	"Reach_CQB_Pauldron_Right",
        	// "Thigh_Pouch",
        	"H3_Armor_Upper",
        	"H3_Armor_Lower",
        	// "Reach_Armor_Upper",
        	// "Reach_Armor_Lower",
        	"Forearm_Vent_Left",
        	// "Forearm_Vent_Right",
        	"Canisters"
		};
	};
};
class STB86_M56R_AJ_Heimdall_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R Heimdall [Vandal]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Heimdall_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Heimdall_Lower_co.paa",
		"STB86_Auxiliary\Data\Vests\Vandal_Heimdall_Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "STB86_Auxiliary\Data\Misc\Vandal_Heimdall_SniperShoulder_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
	class ItemInfo : ItemInfo {
		hiddenSelections[] = {
        	"camo1",
        	"camo2",
        	"camo3",
        	"camo4",
        	"camo5",
        	"camo6",
        	"camo7",
        	"camo8",
        	"camo9",
        	"camo10",
        	"H3_Forearm_Left",
        	"H3_Forearm_Right",
        	// "Reach_Forearm_Left",
        	// "Reach_Forearm_Right",
        	"H3_Pauldron_Left",
        	"H3_Pauldron_Right",
        	"Reach_Pauldron_Left",
        	// "Reach_Pauldron_Right",
        	"Reach_Shoulder_Radio_Left",
        	// "Reach_Shoulder_Radio_Right",
        	// "Reach_Sniper_Pauldron_Left",
        	"Reach_Sniper_Pauldron_Right",
        	"Reach_CQB_Pauldron_Left",
        	"Reach_CQB_Pauldron_Right",
        	// "Thigh_Pouch",
        	"H3_Armor_Upper",
        	"H3_Armor_Lower",
        	// "Reach_Armor_Upper",
        	// "Reach_Armor_Lower",
        	"Forearm_Vent_Left",
        	// "Forearm_Vent_Right",
        	//"Canisters"
		};
	};
};
// Misfit
class STB86_M56R_Misfit_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R [Misfit]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Misfit_Reach_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Misfit_Reach_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
class STB86_M56R_Misfit_Cress_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R Cress [Misfit]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Misfit_Cress_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Misfit_Cress_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
    	"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
    	"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
    	"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
class STB86_M56R_Misfit_Beckett_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R Beckett [Misfit]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Misfit_Beckett_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Misfit_Beckett_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
    	"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
    	"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
    	"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
class STB86_M56R_Misfit_Toki_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R Toki [Misfit]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Misfit_Toki_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Misfit_Toki_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
    	"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
    	"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
    	"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
class STB86_M56R_Misfit_Clanka_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R Clanka [Misfit]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Misfit_Clanka_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Misfit_Clanka_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
// Jester
class STB86_M56R_Jester_Luci_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R Luci [Jester]";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Jester_Luci_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Jester_Luci_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
// Misc
class STB86_M56R_Kitty_Vest : STB86_M56R_Base_Vest {
	displayName = "[86th] M56R Kitty";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Kitty_Reach_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Kitty_Reach_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
        "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
        "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
        "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
};
class STB86_Demo_Vest : STB86_M56R_Base_Vest {  
	scope = 2;
	scopeArsenal = 2;
	author = AUTHOR;
	dlc=DLC;
	displayName = "[86th] Demostration M56R";
	hiddenSelectionsTextures[] = {
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
		"STB86_Auxiliary\Data\Vests\Reach_Upper_co.paa",
		"STB86_Auxiliary\Data\Vests\Reach_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      
		"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   
    	"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
    	"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
    	"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa",   
	};
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
		hiddenSelections[] = {
        	"camo1",
        	"camo2",
        	"camo3",
        	"camo4",
        	"camo5",
        	"camo6",
        	"camo7",
        	"camo8",
        	"camo9",
        	"camo10",
        	"H3_Forearm_Left",
        	"H3_Forearm_Right",
        	//"Reach_Forearm_Left",
        	//"Reach_Forearm_Right",
        	"H3_Pauldron_Left",
        	"H3_Pauldron_Right",
        	"Reach_Pauldron_Left",
        	 "Reach_Pauldron_Right",
        	"Reach_Shoulder_Radio_Left",
        	// "Reach_Shoulder_Radio_Right",
        	//"Reach_Sniper_Pauldron_Left",
        	"Reach_Sniper_Pauldron_Right",
        	"Reach_CQB_Pauldron_Left",
        	//"Reach_CQB_Pauldron_Right",
        	// "Thigh_Pouch",
        	"H3_Armor_Upper",
        	"H3_Armor_Lower",
        	// "Reach_Armor_Upper",
        	// "Reach_Armor_Lower",
        	//"Forearm_Vent_Left",
        	// "Forearm_Vent_Right",
        	//"Canisters"
		};
	};
};

class OPTRE_UNSC_M52A_Armor1_WDL;
class OPTRE_UNSC_M52D_Armor : OPTRE_UNSC_M52A_Armor1_WDL { 
	class ItemInfo;
};

// M52A / M52D
// Legacy  Why did you take away the carry amount on this vest?
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
			maximumLoad = 200;
			containerClass = "Supply200";
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
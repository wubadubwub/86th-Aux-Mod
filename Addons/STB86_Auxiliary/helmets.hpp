class MA_Helmet_Base;
class MA_M56SR_Helmet : MA_Helmet_Base {
	class ItemInfo;
};
class MA_M56E_Helmet : MA_Helmet_Base {
	class ItemInfo;
};

class STB86_M56SR_Base_Helmet : MA_M56SR_Helmet {
	displayName = "[86th] M56SR";
	author = AUTHOR;
	dlc = DLC;
	scope = 2;
	scopeArsenal = 2;
	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Reach_Helmet_co.paa",
		"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Black_co.paa",
	};
	hiddenSelectionsMaterials[] = {
		"STB86_Auxiliary\Data\Helmets\Reach_Helmet.rvmat",
		"MA_Armor\data\Helmets\HR_ODST\hr_odst_visor.rvmat",
	};
	class ItemInfo : ItemInfo {
		author = AUTHOR;
		hiddenSelectionsTextures[] = {
			"STB86_Auxiliary\Data\Helmets\Reach_Helmet_co.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Black_co.paa",
		};
		hiddenSelectionsMaterials[] = {
			"STB86_Auxiliary\Data\Helmets\Reach_Helmet.rvmat",
			"MA_Armor\data\Helmets\HR_ODST\hr_odst_visor.rvmat",
		};
	};
};

class STB86_M56SR_Reserves_Helmet : STB86_M56SR_Base_Helmet {
	displayName = "[86th] M56SR [Reserves]";

	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Reserves_Reach_Helmet_co.paa",
		"STB86_Auxiliary\Data\Visors\Reserves_Reach_Visor_co.paa",
	};
};
// Vandal
class STB86_M56SR_Vandal_Helmet : STB86_M56SR_Base_Helmet {
	displayName = "[86th] M56SR [Vandal]";

	hiddenSelectionsTextures[] = 
	{
		"STB86_Auxiliary\Data\Helmets\Vandal_Reach_Helmet_co.paa",
		"STB86_Auxiliary\Data\Visors\Vandal_Reach_Visor_co.paa",
	};
};

class STB86_M56SR_Vandal_Heathen_Helmet : STB86_M56SR_Base_Helmet {
	displayName = "[86th] M56SR Heathen [Vandal]";

	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Vandal_Heathen_Helmet_co.paa",
		"STB86_Auxiliary\Data\Visors\Vandal_Heathen_Visor_co.paa",
	};
};
class STB86_M56SR_Vandal_Camestry_Helmet : STB86_M56SR_Base_Helmet {
	displayName = "[86th] M56SR Camestry [Vandal]";

	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Vandal_Cam_Helmet_co.paa",
		"STB86_Auxiliary\Data\Visors\Vandal_Cam_Visor_co.paa",
	};

};
class STB86_M56E_Vandal_N3rf_Helmet : MA_M56E_Helmet {
	displayName = "[86th] M56E N3rf [Vandal]";

	author = AUTHOR;
	dlc = DLC;
	scope = 2;
	scopeArsenal = 2;
	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Vandal_N3rf_Helmet_EOD_co.paa",
		"STB86_Auxiliary\Data\Visors\Vandal_N3rf_Visor_EOD_co.paa",
	};
};
class STB86_M56E_Vandal_AJ_Helmet : STB86_M56E_Vandal_N3rf_Helmet {
	displayName = "[86th] M56E AJ [Vandal]";

	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Vandal_AJ_Helmet_co.paa",
		"STB86_Auxiliary\Data\Visors\Vandal_AJ_Visor_co.paa",
	};
};
// Misfit
class STB86_M56SR_Misfit_Helmet : STB86_M56SR_Base_Helmet {
	displayName = "[86th] M56SR [Misfit]";

	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Misfit_Reach_Helmet_co.paa",
		"STB86_Auxiliary\Data\Visors\Misfit_Reach_Visor_co.paa",
	};
};
class STB86_M56SR_Misfit_Cress_Helmet : STB86_M56SR_Base_Helmet {
	displayName = "[86th] M56SR Cress [Misfit]";

	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Misfit_Cress_Helmet_co.paa",
		"STB86_Auxiliary\Data\Visors\Misfit_Cress_Visor_co.paa",
	};
};
class STB86_M56SR_Misfit_Toki_Helmet : STB86_M56SR_Base_Helmet {
	displayName = "[86th] M56SR Toki [Misfit]";

	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Misfit_Reach_Helmet_co.paa",
		"STB86_Auxiliary\Data\Visors\Misfit_Toki_Visor_co.paa",
	};

};
class STB86_M56SR_Misfit_Clanka_Helmet : STB86_M56SR_Base_Helmet {
	displayName = "[86th] M56SR Clanka [Misfit]";

	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Misfit_Clanka_Helmet_co.paa",
		"STB86_Auxiliary\Data\Visors\Misfit_Clanka_Visor_co.paa",
	};
};
// Jester
class STB86_M56SR_Jester_Luci_Helmet : STB86_M56SR_Base_Helmet {
	displayName = "[86th] M56SR Luci [Jester]";

	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Jester_Luci_Helmet_co.paa",
		"STB86_Auxiliary\Data\Visors\Jester_Luci_Visor_co.paa",
	};
};
// Misc
class STB86_M56SR_Kitty_Helmet : STB86_M56SR_Base_Helmet{
	displayName = "[86th] M56SR Kitty";
	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Kitty_Reach_Helmet_co.paa",
		"STB86_Auxiliary\Data\Visors\Kitty_Reach_Visor_co.paa",
	};
};


// Legacy
class STB86_Sinder_Helmet : STB86_M56SR_Base_Helmet {
	displayName = "[86th] Sinder's Helmet";
	model = "STB86_Auxiliary\Data\Empty.p3d";
	class ItemInfo : ItemInfo {
		uniformModel = "STB86_Auxiliary\Data\Empty.p3d";
	};
};

class H_HelmetB;
class H_CrewHelmetHeli_B : H_HelmetB {
	class ItemInfo;
};

class STB86_AJ_HelmetHeli : H_CrewHelmetHeli_B {
	displayName = "[86th] AJ's Pilot Helmet";
	author = AUTHOR;
	dlc = DLC;
	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\AJ_HeliHelmet.paa",
	};
	class ItemInfo : ItemInfo {
		hiddenSelectionsTextures[] = {
			"STB86_Auxiliary\Data\Helmets\AJ_HeliHelmet.paa",
		};
	};
};
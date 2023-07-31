class MA_Helmet_Base;
class MA_M56SR_Helmet : MA_Helmet_Base {
	class ItemInfo;
};

class STB86_M56SR_Base_Helmet : MA_M56SR_Helmet {
	displayName = "";
	author = AUTHOR;
	dlc = DLC;
	scope = 0;
	scopeArsenal = 0;
	hiddenSelectionsMaterials[] = {
		"STB86_Auxiliary\Data\Helmets\Reach_Helmet.rvmat",
		"STB86_Auxiliary\Data\Visors\Reach_Visor.rvmat",
	};
	class ItemInfo : ItemInfo {
		author = AUTHOR;
		hiddenSelectionsMaterials[] = {
			"STB86_Auxiliary\Data\Helmets\Reach_Helmet.rvmat",
			"STB86_Auxiliary\Data\Visors\Reach_Visor.rvmat",
		};
	};
};

class STB86_M56SR_Vandal_Helmet : STB86_M56SR_Base_Helmet {
	displayName = "[86th] M56SR [Vandal]";
	scope = 2;
	scopeArsenal = 2;

	hiddenSelectionsTextures[] = {
		"STB86_Auxiliary\Data\Helmets\Vandal_Reach_Helmet_co.paa",
		"STB86_Auxiliary\Data\Visors\Vandal_Reach_Visor_co.paa",
	};

	class ItemInfo : ItemInfo {
		hiddenSelectionsTextures[] = {
			"STB86_Auxiliary\Data\Helmets\Vandal_Reach_Helmet_co.paa",
			"STB86_Auxiliary\Data\Visors\Vandal_Reach_Visor_co.paa",
		};
	};
};

class STB86_Sinder_Helmet : STB86_M56SR_Base_Helmet {
	displayName = "[86th] Sinder's Helmet";
	scope = 2;
	scopeArsenal = 2;
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
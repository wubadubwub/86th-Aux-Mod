class U_B_CombatUniform_mcam;
class MA_M56S_BDU : U_B_CombatUniform_mcam {
	class ItemInfo;
};

class STB86_Combat_Uniform : MA_M56S_BDU {
	displayName = "[86th] Combat Uniform";
	author = AUTHOR;
	dlc = DLC;
	CBRN_protection = 1;
	class ItemInfo : ItemInfo {
		uniformType = "Neopren";
		uniformClass = STB86_Combat_Unit;
	};
};
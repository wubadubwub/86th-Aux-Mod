class U_B_CombatUniform_mcam;
class MA_M56S_BDU : U_B_CombatUniform_mcam {
	class ItemInfo;
};

class STB86_Combat_Uniform : MA_M56S_BDU { // You forgot to set the amount they can carry.
	displayName = "[86th] Combat Uniform";
	author = AUTHOR;
	dlc = DLC;
	maximumLoad = 100;
	containerClass = "Supply100";
	CBRN_protection = 1;
	class ItemInfo : ItemInfo {
		uniformType = "Neopren";
			maximumLoad = 100;
			containerClass = "Supply100";
		uniformClass = STB86_Combat_Unit;
	};
};
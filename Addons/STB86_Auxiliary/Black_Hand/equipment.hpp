class UniformItem;
class U_B_CTRG_3;
class OPTRE_CMA_Helmet;
class V_Press_F;
class V_PlateCarrierSpec_blk;
class OPTRE_CMA_Helmet_chops;

class STB86_BH_Battledress : U_B_CTRG_3 {
	author = "86th STB Mod team";
	displayName = "[86th BH] Uniform";
	hiddenSelectionsTextures[] = {"STB86_Auxiliary\Black_hand\textures\Blackhand_Uniform.paa"};
	class ItemInfo : UniformItem{
		containerClass = "Supply80";
		mass = 40;
		uniformModel = "-";
		uniformClass="STB86_BH_Rifleman";
	};
};

class STB86_BH_Helmet : OPTRE_CMA_Helmet {
	author = "86th STB Mod team";
	displayName = "[86th BH] Helmet";
	hiddenSelectionsTextures[] = {"STB86_Auxiliary\Black_hand\textures\Blackhand_Helmet.paa"};
};

class STB86_BH_Medic_Vest : V_Press_F {
	displayName="[86th BH] Medic Vest";
	hiddenSelectionsTextures[] = {"STB86_Auxiliary\Black_Hand\textures\Square.paa"};
};

class STB86_BH_GL_Vest : V_PlateCarrierSpec_blk {
	displayName="[86th BH] GL Rig";
	hiddenSelectionsTextures[] = {"STB86_Auxiliary\Black_Hand\textures\Square.paa"};

};

class STB86_BH_Crew_Helmet : OPTRE_CMA_Helmet_chops {
	displayName = "[86th BH] Crew Helmet";
	hiddenSelectionsTextures[] = {"STB86_Auxiliary\Black_Hand\textures\Square.paa"};

};



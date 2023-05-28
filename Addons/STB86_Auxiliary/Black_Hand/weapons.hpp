class arifle_SPAR_01_blk_F;
class arifle_AK12_F;
class arifle_AK12_GL_F;
class OPTRE_BR55HB;
class arifle_RPK12_F;
class OPTRE_SRS99D;
class OPTRE_M6G;
class OPTRE_M7;
class OPTRE_MA5K;
//Weapon Base Classes
class STB86_BH_HK416: arifle_SPAR_01_blk_F
{
	author="Sinder";
	displayName="HK416 [BH]";
	class linkedItems{
		class linkedItemsOptic{
			item="optic_holosight_blk_f";
			slot="CowsSlot";
		};
	};
	magazines[]=
	{
		"STB86_556x45_30rnd",
		"STB86_556x45_30rnd_Tracer",
	};
	hiddenSelectionsTextures[]=
	{
		"STB86_Auxiliary\Black_Hand\textures\weapons\HK416_co.paa",
		"STB86_Auxiliary\Black_Hand\textures\square.paa",
	};
	baseWeapon="STB86_BH_HK416";
};
class STB86_BH_AK15: arifle_AK12_F 
{
	author="Sinder";
	displayName="AK15 [BH]";
	magazines[]=
	{
		"STB86_762x39_32rnd",
		"STB86_762x39_32rnd_Tracer",
		"STB86_762x39_60rnd",
	};
	hiddenSelectionsTextures[]=
	{
		"STB86_Auxiliary\Black_Hand\textures\weapons\AK15_co.paa",
		"STB86_Auxiliary\Black_Hand\textures\square.paa",
	};
	baseWeapon="STB86_BH_AK15";
};
class STB86_BH_AK15GL: arifle_AK12_GL_F 
{
	author="Sinder";
	displayName="AK15G [BH]";
	magazines[]=
	{
		"STB86_762x39_32rnd",
		"STB86_762x39_32rnd_Tracer",
		"STB86_762x39_60rnd",
		"1Rnd_HE_Grenade_shell",
    	"UGL_FlareWhite_F",
    	"UGL_FlareGreen_F",
    	"UGL_FlareRed_F",
    	"UGL_FlareYellow_F",
    	"UGL_FlareCIR_F",
    	"1Rnd_Smoke_Grenade_shell",
    	"1Rnd_SmokeRed_Grenade_shell",
    	"1Rnd_SmokeGreen_Grenade_shell",
    	"1Rnd_SmokeYellow_Grenade_shell",
    	"1Rnd_SmokePurple_Grenade_shell",
    	"1Rnd_SmokeBlue_Grenade_shell",
    	"1Rnd_SmokeOrange_Grenade_shell",
	};
	hiddenSelectionsTextures[]=
	{
		"STB86_Auxiliary\Black_Hand\textures\weapons\AK15_co.paa",
		"STB86_Auxiliary\Black_Hand\textures\square.paa",
		"STB86_Auxiliary\Black_Hand\textures\square.paa",
	};
	baseWeapon="STB86_BH_AK15GL";
};

class STB86_BH_BR55XHB : OPTRE_BR55HB { 
	displayName = "BR-55XHB [BH]";
	class linkedItems{
			class linkedItemsOptic{
				item="OPTRE_M73_Smartlink_v2";
				slot="CowsSlot";
			};
		};
};
class STB86_BH_SRS99C_Prefab : OPTRE_SRS99D { 
		scope=1; 
		scopeArsenal=1;
		scopeCurator=1;
		class linkedItems{
			class linkedItemsOptic{
				item="optre_srs99c_scope";
				slot="CowsSlot";
			};
			class linkedItemsMuzzle{
				item="optre_srs99d_suppressor";
				slot="MuzzleSlot";
			};
		};
	};

class STB86_BH_MA5K : OPTRE_MA5K { 
	displayName = "MA5K [BH]";
};

class STB86_BH_RPK : arifle_RPK12_F {
	displayName="RPK [BH]";
};

class STB86_BH_M7 : OPTRE_M7 {
	displayName="M7 [BH]";
};


/* Secondary */
class STB86_BH_M6G: OPTRE_M6G
{
	author="Sinder";
	displayName="M6G [BH]";
	baseWeapon="STB86_BH_M6G";
	hiddenSelectionsTextures[]=
	{
		"STB86_Auxiliary\Black_Hand\textures\weapons\M6G_co.paa"
	};
	magazines[]=
	{
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag_Tracer",
		"5Rnd_127x108_APDS_Mag",
		"OPTRE_8Rnd_127x40_AP_Mag"
	};
};


class MBT_01_base_F;
class B_MBT_01_base_F: MBT_01_base_F {
	class Turrets;
};
class B_MBT_01_cannon_F : B_MBT_01_base_F{
	class Turrets {
		class MainTurret;
	};
};
// A3_Armor_F_Gamma_MBT_01
class STB86_BH_CH_MBT : B_MBT_01_cannon_F {
    editorSubcategory = "STB86_BH_CH_Veh_SubCat";
	author = AUTHOR;
	dlc = DLC;

    smokeLauncherGrenadeCount = 20;
    smokeLauncherAngle = 360;
    smokeLauncherVelocity=30;
	smokeLauncherOnTurret=0;

    displayName = "Z-29 Vengeance";
    crew = "STB86_BH_CH_Crewmate";
    faction = "STB86_Black_Hand";
    side = 0; 	
    class TextureSources
	{
		class STB86_BH_CH_MBT_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\MBT_Body.paa",
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\MBT_Turret.paa",
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\Camonet.paa"
			};
			factions[]=
			{
				"STB86_Black_Hand"
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_MBT_Tex",
		1
	};
    hiddenSelectionsTextures[] = {
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\MBT_Body.paa",
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\MBT_Turret.paa",
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\Camonet.paa"
    };
    class Library
	{
		libTextDesc="The Chosen's Main MBT";
	};
};

class STB86_BH_CH_MBT_02 : STB86_BH_CH_MBT {
	displayName = "Z-29F Vengeance";
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {"OPTRE_30Rnd_90mm_APBC","OPTRE_30Rnd_90mm_SAPHE","OPTRE_10Rnd_90mm_S1","STB86_Flamethrower_Canister","STB86_Flamethrower_Canister"};
			weapons[] = {"OPTRE_90mm_M512","STB86_BH_CH_MBT_02_LMG"};
		};
	};
};
class APC_Tracked_02_base_F;
class O_APC_Tracked_02_base_F : APC_Tracked_02_base_F {
	class Turrets;
};
class O_APC_Tracked_02_cannon_F : O_APC_Tracked_02_base_F {
	class Components;
	class Turrets {
		class MainTurret;
	};
}; // A3_Armor_F_Exp_APC_Tracked_02

class STB86_BH_CH_IFV : O_APC_Tracked_02_cannon_F {
	author = AUTHOR;
	dlc = DLC;
    editorSubcategory = "STB86_BH_CH_Veh_SubCat";
    smokeLauncherGrenadeCount = 20;
    smokeLauncherAngle = 360;
    smokeLauncherVelocity=30;
	smokeLauncherOnTurret=0;

    displayName = "I-12 Stormbreaker";
    crew = "STB86_BH_CH_Crewmate";
    faction = "STB86_Black_Hand";
    side = 0; 	

    class TextureSources
	{
		class STB86_BH_CH_IFV_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\IFV_1.paa",
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\IFV_2.paa",
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\IFV_RCWS.paa",
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\Camonet.paa",
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\Cage.paa"
			};
			factions[]=
			{
				"STB86_Black_Hand"
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_IFV_Tex",
		1
	};
    hiddenSelectionsTextures[] = {
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\IFV_1.paa",
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\IFV_2.paa",
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\IFV_RCWS.paa",
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\Camonet.paa",
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\Cage.paa"
    };

    class Library
	{
		libTextDesc="The Chosen's IFV";
	};
};




class STB86_BH_CH_IFV_02 : STB86_BH_CH_IFV {
	displayName = "I-12AA Stormbreaker";
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {MAG_4(680Rnd_35mm_AA_shells_Tracer_Green),MAG_6(200Rnd_762x51_Belt_Green),MAG_2(2Rnd_GAT_missiles_O)};
			weapons[] = {"STB86_BH_CH_IFV_02_Cannon","LMG_coax_ext","missiles_titan"};
		};
	};
};


class O_APC_Wheeled_02_rcws_v2_F; // A3_Armor_F_Exp_APC_Wheeled_02
class STB86_BH_CH_APC : O_APC_Wheeled_02_rcws_v2_F {
    editorSubcategory = "STB86_BH_CH_Veh_SubCat";
    smokeLauncherGrenadeCount = 20;
    smokeLauncherAngle = 360;
    smokeLauncherVelocity=30;
	smokeLauncherOnTurret=0;

    displayName = "A-9 Intruder";
	author = AUTHOR;
	dlc = DLC;
    crew = "STB86_BH_Crewman";
    faction = "STB86_Black_Hand";
    side = 0; 	

    class TextureSources
	{
		class STB86_BH_CH_APC_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\APC_1.paa",
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\APC_2.paa",
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\APC_Turret.paa",
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\Camonet.paa",
                "STB86_Factions\Black_hand\The_Chosen\textures\veh\Cage.paa"
			};
			factions[]=
			{
				"STB86_Black_Hand"
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_APC_Tex",
		1
	};
    hiddenSelectionsTextures[] = {
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\APC_1.paa",
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\APC_2.paa",
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\APC_Turret.paa",
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\Camonet.paa",
        "STB86_Factions\Black_hand\The_Chosen\textures\veh\Cage.paa"
    };
    class Library
	{
		libTextDesc="The Chosen's APC";
	};
};
// Helis

class O_Heli_Attack_02_dynamicLoadout_F; // hiddenSelectionsTextures[] = {"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_CO.paa","A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_CO.paa"};
// A3_Air_F_Beta_Heli_Attack_02
class STB86_BH_CH_Heli_Attack : O_Heli_Attack_02_dynamicLoadout_F {
	displayName = "A-40 Shuriken";

	author = AUTHOR;
	dlc = DLC;
	crew = "STB86_BH_CH_HeliPilot";
    faction = "STB86_Black_Hand";
    side = 0; 	
    editorSubcategory = "STB86_BH_CH_Heli_SubCat";
	scopeCurator = 2;
	class TextureSources
	{
		class STB86_BH_CH_Heli_Attack_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
				"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_black_CO.paa",
				"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa",
			};
			factions[]=
			{
				"STB86_Black_Hand"
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_Heli_Attack_Tex",
		1
	};
	hiddenSelectionsTextures[] = {
		"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_black_CO.paa",
		"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa",
	};
	class Library
	{
		libTextDesc="The Chosen's Main Attack Helicopter. A force to be reckoned with.";
	};
};

class C_Heli_Light_01_civil_F; // hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_co.paa"};
// A3_Air_F_Heli_Heli_Light_01
class B_Heli_Light_01_F;
class B_Heli_Light_01_dynamicLoadout_F; // hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_Blufor_CO.paa","a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"};

class STB86_BH_CH_Heli_Light_O : C_Heli_Light_01_civil_F {
	displayname = "OH-4 Silkworm";
	author = AUTHOR;
	dlc = DLC;
	crew = "STB86_BH_CH_HeliPilot";
    faction = "STB86_Black_Hand";
    side = 0; 	
    editorSubcategory = "STB86_BH_CH_Heli_SubCat";
	scopeCurator = 2;
	class TextureSources
	{
		class STB86_BH_CH_Heli_Light_O_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
				"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa",
			};
			factions[]=
			{
				"STB86_Black_Hand",
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_Heli_Light_O_Tex",
		1
	};
	hiddenSelectionsTextures[] = {
		"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa",
	};
	class Library
	{
		libTextDesc="The Chosen's Main Scout Helicopter.";
	};
};
class STB86_BH_CH_Heli_Light_M : B_Heli_Light_01_F {
	displayname = "MH-4 Silkworm";

	author = AUTHOR;
	dlc = DLC;
	crew = "STB86_BH_CH_HeliPilot";
    faction = "STB86_Black_Hand";
    side = 0; 	
    editorSubcategory = "STB86_BH_CH_Heli_SubCat";
	scopeCurator = 2;
	class TextureSources
	{
		class STB86_BH_CH_Heli_Light_M_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
				"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa",
			};
			factions[]=
			{
				"STB86_Black_Hand",
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_Heli_Light_M_Tex",
		1
	};
	hiddenSelectionsTextures[] = {
		"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa",
	};
	class Library
	{
		libTextDesc="The Chosen's main light multipurpose Helicopter.";
	};
};
class STB86_BH_CH_Heli_Light_A : B_Heli_Light_01_dynamicLoadout_F {
	displayname = "AH-4 Silkworm";

	author = AUTHOR;
	dlc = DLC;
	crew = "STB86_BH_CH_HeliPilot";
    faction = "STB86_Black_Hand";
    side = 0; 	
    editorSubcategory = "STB86_BH_CH_Heli_SubCat";
	scopeCurator = 2;
	class TextureSources
	{
		class STB86_BH_CH_Heli_Light_A_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
				"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa",
				"a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa",
			};
			factions[]=
			{
				"STB86_Black_Hand",
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_Heli_Light_A_Tex",
		1
	};
	hiddenSelectionsTextures[] = {
		"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa",
		"a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa",
	};
	class Library
	{
		libTextDesc="The Chosen's main light attack Helicopter.";
	};
};

class I_Heli_light_03_unarmed_F;
class I_Heli_light_03_dynamicLoadout_F;  // hiddenSelectionsTextures[] = {"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_INDP_CO.paa","a3\weapons_f\ammoboxes\data\ammobox_co.paa","a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"};
// A3_Air_F_Heli_Heli_Light_03
class STB86_BH_CH_Heli_Medium_M : I_Heli_light_03_unarmed_F {
	displayname = "MH-16 Cheetah";

	author = AUTHOR;
	dlc = DLC;
	crew = "STB86_BH_CH_HeliPilot";
    faction = "STB86_Black_Hand";
    side = 0; 	
    editorSubcategory = "STB86_BH_CH_Heli_SubCat";
	scopeCurator = 2;
	class TextureSources
	{
		class STB86_BH_CH_Heli_Medium_M_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
				"STB86_Factions\Black_Hand\textures\square.paa",
			};
			factions[]=
			{
				"STB86_Black_Hand",
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_Heli_Medium_M_Tex",
		1
	};
	hiddenSelectionsTextures[] = {
		"STB86_Factions\Black_Hand\textures\square.paa",
	};
	class Library
	{
		libTextDesc="The Chosen's Main Medium Multipurpose Helicopter.";
	};
};
class STB86_BH_CH_Heli_Medium_A : I_Heli_light_03_dynamicLoadout_F {
	displayname = "AH-16 Cheetah";

	author = AUTHOR;
	dlc = DLC;
	crew = "STB86_BH_CH_HeliPilot";
    faction = "STB86_Black_Hand";
    side = 0; 	
    editorSubcategory = "STB86_BH_CH_Heli_SubCat";
	scopeCurator = 2;
	class TextureSources
	{
		class STB86_BH_CH_Heli_Medium_A_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
				"STB86_Factions\Black_Hand\textures\square.paa", 
				"a3\weapons_f\ammoboxes\data\ammobox_co.paa",
				"a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa",
			};
			factions[]=
			{
				"STB86_Black_Hand",
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_Heli_Medium_A_Tex",
		1
	};
	hiddenSelectionsTextures[] = {
		"STB86_Factions\Black_Hand\textures\square.paa", 
		"a3\weapons_f\ammoboxes\data\ammobox_co.paa",
		"a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa",
	};
	class Library
	{
		libTextDesc="The Chosen's Main Medium Attack Helicopter.";
	};
};
class I_Heli_Transport_02_F; // hiddenSelectionsTextures[] = {"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
// A3_Air_F_Heli_Heli_Transport_02
class STB86_BH_CH_Heli_Heavy : I_Heli_Transport_02_F {
	displayname = "UH-113 Behemoth";

	author = AUTHOR;
	dlc = DLC;
	crew = "STB86_BH_CH_HeliPilot";
    faction = "STB86_Black_Hand";
    side = 0; 	
    editorSubcategory = "STB86_BH_CH_Heli_SubCat";
	scopeCurator = 2;
	class TextureSources
	{
		class STB86_BH_CH_Heli_Heavy_U_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
				"STB86_Factions\Black_Hand\textures\square.paa",
				"STB86_Factions\Black_Hand\textures\square.paa",
				"STB86_Factions\Black_Hand\textures\square.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa",
			};
			factions[]=
			{
				"STB86_Black_Hand",
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_Heli_Heavy_U_Tex",
		1
	};
	hiddenSelectionsTextures[] = {
		"STB86_Factions\Black_Hand\textures\square.paa",
		"STB86_Factions\Black_Hand\textures\square.paa",
		"STB86_Factions\Black_Hand\textures\square.paa",
		"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa",
	};
	class Library
	{
		libTextDesc="The Chosen's Main Medium Attack Helicopter.";
	};
};

// Jets

class B_Plane_CAS_01_dynamicLoadout_F; // hiddenSelectionsTextures[] = {"A3\Air_F_EPC\Plane_CAS_01\Data\plane_cas_01_ext01_co.paa","A3\Air_F_EPC\Plane_CAS_01\Data\plane_cas_01_ext02_co.paa"};
// A3_Air_F_EPC_Plane_CAS_01
class STB86_BH_CH_Jet_CAS : B_Plane_CAS_01_dynamicLoadout_F {
	displayname = "A-1 Silverfish";

	author = AUTHOR;
	dlc = DLC;
	crew = "STB86_BH_CH_HeliPilot";
    faction = "STB86_Black_Hand";
    side = 0; 	
    editorSubcategory = "STB86_BH_CH_Jet_SubCat";
	scopeCurator = 2;
	class TextureSources
	{
		class STB86_BH_CH_Jet_CAS_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
				dlc = DLC;
			textures[]=
			{
				"STB86_Factions\Black_Hand\textures\square.paa",
				"STB86_Factions\Black_Hand\textures\square.paa",
			};
			factions[]=
			{
				"STB86_Black_Hand",
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_Jet_CAS_Tex",
		1
	};
	hiddenSelectionsTextures[] = {
		"STB86_Factions\Black_Hand\textures\square.paa",
		"STB86_Factions\Black_Hand\textures\square.paa",
	};
	class Library
	{
		libTextDesc="The Chosen's premier CAS plane";
	};
};

class I_Plane_Fighter_04_F; // hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_green_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_green_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"};
// A3_Air_F_Jets_Plane_Fighter_04
class STB86_BH_CH_Jet_CAP : I_Plane_Fighter_04_F {
	displayname = "F-240 Silvertongue";

	author = AUTHOR;
	dlc = DLC;
	crew = "STB86_BH_CH_HeliPilot";
    faction = "STB86_Black_Hand";
    side = 0; 	
    editorSubcategory = "STB86_BH_CH_Jet_SubCat";
	scopeCurator = 2;
	class TextureSources
	{
		class STB86_BH_CH_Jet_CAP_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
				"STB86_Factions\Black_Hand\textures\square.paa",
				"STB86_Factions\Black_Hand\textures\square.paa",
				"a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa",
				"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
				"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
				"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
			};
			factions[]=
			{
				"STB86_Black_Hand",
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_Jet_CAP_Tex",
		1
	};
	hiddenSelectionsTextures[] = {
		"STB86_Factions\Black_Hand\textures\square.paa",
		"STB86_Factions\Black_Hand\textures\square.paa",
		"a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa",
		"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
		"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
		"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa",
	};
	class Library
	{
		libTextDesc="The Chosen's premier CAP plane";
	};
};

// UAVs

class B_UAV_05_F; // hiddenSelectionsTextures[] = {"A3\Air_F_Jets\UAV_05\Data\UAV05_fuselage_01_co.paa","A3\Air_F_Jets\UAV_05\Data\UAV05_fuselage_02_co.paa","A3\Air_F_Jets\UAV_05\Data\UAV05_engine_fire_ca.paa"};
// A3_Air_F_Jets_UAV_05
class STB86_BH_CH_UAV_01 : B_UAV_05_F { // The jet
	displayname = "UAV-59 Stonewall";

	author = AUTHOR;
	dlc = DLC;
    faction = "STB86_Black_Hand";
    side = 0; 	
    editorSubcategory = "STB86_BH_CH_UAV_SubCat";
	class TextureSources
	{
		class STB86_BH_CH_UAV_01_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
				"STB86_Factions\Black_Hand\textures\square.paa",
				"STB86_Factions\Black_Hand\textures\square.paa",
				"A3\Air_F_Jets\UAV_05\Data\UAV05_engine_fire_ca.paa",
			};
			factions[]=
			{
				"STB86_Black_Hand",
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_UAV_01_Tex",
		1
	};
	hiddenSelectionsTextures[] = {
		"STB86_Factions\Black_Hand\textures\square.paa",
		"STB86_Factions\Black_Hand\textures\square.paa",
		"A3\Air_F_Jets\UAV_05\Data\UAV05_engine_fire_ca.paa",
	};
	class Library
	{
		libTextDesc="The Chosen's premier standoff UAV";
	};
};

class B_T_UAV_03_dynamicLoadout_F; // hiddenSelectionsTextures[] = {"\A3\Air_F_Exp\UAV_03\Data\UAV_03_1_CO.paa","\A3\Air_F_Exp\UAV_03\Data\UAV_03_2_CO.paa","\a3\air_f_exp\uav_03\data\uav_03_mlod_co.paa"};
// A3_Air_F_Exp_UAV_03
class STB86_BH_CH_UAV_02 : B_T_UAV_03_dynamicLoadout_F { // The helicopter
	displayname = "UAV-10 Sunspot";

	author = AUTHOR;
	dlc = DLC;
    faction = "STB86_Black_Hand";
    side = 0; 	
    editorSubcategory = "STB86_BH_CH_UAV_SubCat";
	class TextureSources
	{
		class STB86_BH_CH_UAV_02_Tex
		{
			displayName="The Chosen";
			author = AUTHOR;
			dlc = DLC;
			textures[]=
			{
				"STB86_Factions\Black_Hand\textures\square.paa",
				"STB86_Factions\Black_Hand\textures\square.paa",
				"STB86_Factions\Black_Hand\textures\square.paa",
			};
			factions[]=
			{
				"STB86_Black_Hand",
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_CH_UAV_02_Tex",
		1
	};
	hiddenSelectionsTextures[] = {
		"STB86_Factions\Black_Hand\textures\square.paa",
		"STB86_Factions\Black_Hand\textures\square.paa",
		"STB86_Factions\Black_Hand\textures\square.paa",
	};
	class Library
	{
		libTextDesc="The Chosen's premier standoff UAV";
	};
};

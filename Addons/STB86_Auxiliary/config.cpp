//**********************************************
//*****        Mod information             *****
//**********************************************

class CfgPatches
{
	class STB86_Auxiliary
	{
		//General mod info
		author = "86th STB Modding Team";
		name = "86th Auxiliary skins";
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

class CfgVehicles
{
	class ContainerSupply;
	class B_Bergen_Base;
	class OPTRE_ANPRC_521_Green;
	class OPTRE_Ins_ER_Rebel_tan;
	class OPTRE_ILCS_Rucksack_Black;
	class OPTRE_UNSC_Army_Uniform_OLI;
	class iteminfo;
	class VES_BDU_V_Base;
	class OPTRE_UNSC_Army_Uniform_BLK;
	class STB86_Ins_ER_Rebel_green : OPTRE_Ins_ER_Rebel_tan
	{
		dlc = "86th Auxilliary";
		scope = 1;
		displayName = "Waters Base";
		uniformClass = "STB86_INS_ER_uniform_GAgreen";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\armor\Waters_uniform_co.paa"
		};
	};
	class STB86_v_uniform : VES_BDU_V_Base
	{
		scope = 1;
		model = "\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			//"A_SlimLeg"
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[] =
		{
			"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO",
			"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO"
		};
		uniformclass = "STB86_v_uniform";
	};
	class STB86_pilot_v_uniform : VES_BDU_V_Base
	{
		scope = 1;
		model = "\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			//"A_SlimLeg"
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\armor\wildcard_khan_uniform_co.paa",
			"STB86_Auxiliary\armor\wildcard_khan_uniform_co.paa"
		};
		uniformclass = "STB86_pilot_v_uniform";
	};
	class STB86_Ouroboros_v_uniform : VES_BDU_V_Base
	{
		scope = 1;
		model = "\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			//"A_SlimLeg"
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\armor\Ouroboros_uniform_co.paa",
			"STB86_Auxiliary\armor\Ouroboros_uniform_co.paa"
		};
		uniformclass = "STB86_Ouroboros_v_uniform";
	};
	class STB86_Fox_uniform : VES_BDU_V_Base
	{
		scope = 1;
		model = "\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			//"A_SlimLeg"
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\armor\fox_uniform_co.paa",
			"STB86_Auxiliary\armor\fox_uniform_co.paa"
		};
		uniformclass = "STB86_fox_uniform";
	};
	class ILCS_RS_B : B_Bergen_Base
	{
		dlc = "";
		author = "Quiet";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		isbackpack = 1;
		picture = "\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
		displayName = "ILCS Rucksack [Black]";
		model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
		allowedSlots[] = { 901 };
		maximumLoad = 350;
		mass = 40;
		hiddenSelections[] =
		{
			"camo1",
			"AP_Heavy",
			"biofoam"
		};
		hiddenSelectionsTextures[] = { "OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa" };
		transportMaxWeapons = 10;
		transportMaxMagazines = 100;
		class DestructionEffects {};
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
	};
	class STB86_back_pack : ILCS_RS_B
	{
		dlc = "";
		author = "Center";
		displayName = "[86th STB] Infantry Rucksack";
		maximumLoad = 350;
		mass = 40;
		hiddenSelectionsTextures[] = { "STB86_Auxiliary\backpacks\rifleman_pack_co.paa" };
		hiddenSelections[] =
		{
			"camo1",
			"AP_Heavy",
			"biofoam"
		};
	};
	class STB86_medic_pack : ILCS_RS_B
	{
		dlc = "";
		author = "Center";
		displayName = "[86th STB] Medic Rucksack";
		maximumLoad = 400;
		mass = 40;
		hiddenSelectionsTextures[] = { "STB86_Auxiliary\backpacks\medic_pack_co.paa" };
		hiddenSelections[] =
		{
			"camo1",
			"AP_Heavy",
			//"biofoam"
		};
	};
	class STB86_heavy_pack : ILCS_RS_B
	{
		dlc = "";
		author = "Center";
		displayName = "[86th STB] Heavy Rucksack";
		maximumLoad = 400;
		mass = 40;
		hiddenSelectionsTextures[] = { "STB86_Auxiliary\backpacks\rifleman_pack_co.paa" };
		hiddenSelections[] =
		{
			"camo1",
			//"AP_Heavy",
			"biofoam"
		};
	};
	class STB86_radio_pack : OPTRE_ANPRC_521_Green
	{
		dlc = "OPTRE";
		author = "Center";
		displayName = "[86th STB] AN/PRC-521";
		descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>25km Effective Range";
		picture = "\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad = 300;
		mass = 50;
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[] =
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"STB86_Auxiliary\backpacks\radio_pack_co.paa"
		};
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
	};
	class STB86_waters_Rucksack : OPTRE_ILCS_Rucksack_Black
	{
		dlc = "OPTRE";
		author = "Center";
		displayName = "[86th STB] Crew Rucksack";
		model = "\OPTRE_unsc_units\army\rucksack.p3d";
		maximumLoad = 350;
		mass = 40;
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			//"B_Radio"
		};
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\backpacks\waters_rucksack_co.paa",
			""
		};
	};
	class STB86_Virtual_Long_Range : ILCS_RS_B
	{
		dlc = "";
		author = "Center";
		picture = "";
		displayName = "[86th STB] Compact LR";
		descriptionShort = "";
		model = "STB86_Auxiliary\backpacks\null.p3d";
		maximumLoad = 300;
		mass = 40;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
	};
	class STB86_concealed_radio_pack : ILCS_RS_B
	{
		dlc = "";
		author = "Center";
		displayName = "[86th STB] Concealed LR";
		maximumLoad = 300;
		mass = 40;
		hiddenSelectionsTextures[] = { "STB86_Auxiliary\backpacks\rifleman_pack_co.paa" };
		hiddenSelections[] =
		{
			"camo1",
			"AP_Heavy",
			"biofoam"
		};
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
	};
};

class cfgFactionClasses
{
    class STB86_Faction
    {
        displayName = "86th STB";
        scope = 2;
        scopeCurator = 2;
        priority = 3;
        side = 1;
    };
    class STB86_Black_Hand
    {
        displayName = "Black Hand";
        scope = 2;
        scopeCurator = 2;
        priority = 3;
        side = 0;
    };
};
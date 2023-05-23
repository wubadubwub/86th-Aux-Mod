//**********************************************
//*****        Mod information             *****
//**********************************************

class CfgPatches
{
	class STB86_Auxiliary_Helmets
	{
		//General mod info
		author = "86th STB Modding Team";
		name = "86th Auxiliary Helmets";
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

//**********************************************
//*****        Helmets                     *****
//**********************************************

class CfgWeapons
{
	//For helmet damage changes
	class HeadgearItem;
	class ItemInfo;
	//For helmets
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_Recon_Helmet_dp;
	class OPTRE_UNSC_Commando_Helmet;
	class OPTRE_UNSC_Commando_Helmet_dp;
	class ItemCore;
	//For body armor
	class OPTRE_UNSC_M52D_Armor;
	class V_PlateCarrier2_rgr;
	class VestItem;
	//For Uniforms
	class UniformItem;
	class VES_BDU_Evolved_slim;
	class OPTRE_UNSC_Army_Uniform_BLK;
	//class LM_OPCAN_SU_Uni;
	class Uniform_Base;
	class OPTRE_UNSC_Army_Uniform_OLI;
	class OPTRE_UNSC_M52A_Armor3_WDL;
	//Misfit Helmets
	class STB86_CH252D_Base : OPTRE_UNSC_CH252D_Helmet {
		dlc = "STB86_Auxiliary";
		author = "86th Mod Team"
		hiddenSelections[] =
			{
			"camo",
			"camo2",
			};
	};
	class STB86_CH252D_dp : OPTRE_UNSC_CH252D_Helmet_dp {
		dlc = "STB86_Auxiliary";
		author = "86th Mod Team"
	};
	class STB86_CH252D_Misfit : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Misfit Squad";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_helmet_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
	};
	class STB86_CH252D_Misfit_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Misfit Squad";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_helmet_co.paa"
		};
	};
	class STB86_CH252D_Misfit_Herrington : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Herrington";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_herrington_helmet_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
	};
	class STB86_CH252D_Misfit_Herrington_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Herrington";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_herrington_helmet_co.paa"
		};
	};
	class STB86_CH252D_Misfit_Center : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Center";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_Center_helmet_co.paa",
			"STB86_Auxiliary\helmets\Misfit_Center_visor_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			   "\OPTRE_UNSC_Units\Army\data\odst_helmet.rvmat",
			   "STB86_Auxiliary\material\VG_2.rvmat"
		};
	};
	class STB86_CH252D_Misfit_Center_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Center";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_Center_helmet_co.paa"
		};
	};
	class STB86_CH252D_Misfit_beckett : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Beckett";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_beckett_helmet_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa",
			"STB86_Auxiliary\Black_Hand\textures\square.paa"
		};
	};
	class STB86_CH252D_Misfit_beckett_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Beckett";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_beckett_helmet_co.paa"
		};
	};
	class STB86_CH252D_Misfit_cress : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Cress";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_cress_helmet_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
	};
	class STB86_CH252D_Misfit_cress_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Cress";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_cress_helmet_co.paa"
		};
	};
	class STB86_CH252D_Misfit_wrecker : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Wrecker";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_wrecker_helmet_co.paa",
			"STB86_Auxiliary\helmets\Misfit_wrecker_visor2_co.paa"
		};
	};
	class STB86_CH252D_Misfit_wrecker_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Wrecker";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_wrecker_helmet_co.paa"
		};
	};
	class STB86_CH252D_Misfit_vigilance : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Vigilance";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_vigilance_helmet_co.paa",
			"STB86_Auxiliary\helmets\Misfit_vigilance_visor_co.paa"
		};
	};
	class STB86_CH252D_Misfit_vigilance_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Vigilance";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_vigilance_helmet_co.paa"
		};
	};
	class STB86_CH252D_Vandal_xey : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Xey";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\vandal_xey_helmet_co.paa",
			"STB86_Auxiliary\helmets\vandal_xey_visor_co.paa"
		};
	};
	class STB86_CH252D_Vandal_xey_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Xey";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\vandal_xey_helmet_co.paa"
		};
	};
	class STB86_CH252D_Misfit_Neko : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Neko";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_neko_helmet_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
	};
	class STB86_CH252D_Misfit_Neko_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Neko";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Misfit_neko_helmet_co.paa"
		};
	};
	class STB86_CH252D_vandal_Rithon : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Rithon";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\vandal_rithon_helmet_co.paa",
			"STB86_Auxiliary\helmets\vandal_rithon_visor_co.paa"
		};
	};
	class STB86_CH252D_vandal_Rithon_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Rithon";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\vandal_rithon_helmet_co.paa"
		};
	};
	class STB86_CH252D_jester_rookie : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Rookie";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\jester_rookie_helmet_co.paa",
			"STB86_Auxiliary\helmets\jester_rookie_visor_co.paa"
		};
	};
	class STB86_CH252D_jester_rookie_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Rookie";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\jester_rookie_helmet_co.paa"
		};
	};
	//Phantom Helmets
	class STB86_CH252D_Phantom : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Reserves";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Phantom_helmet_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
	};
	class STB86_CH252D_Phantom_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Reserves";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Phantom_helmet_co.paa"
		};
	};
	class STB86_CH252D_Hound : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Hell Hound";
		scope = 1;
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Devil_helmet_co.paa",
			"STB86_Auxiliary\helmets\Devil_visor_co.paa"
		};
	};
	class STB86_CH252D_Hound_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Hell Hound";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Devil_helmet_co.paa"
		};
	};
	class STB86_CH252D_Phantom_medic : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Reserves SARC";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Phantom_sarc_helmet_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
	};
	class STB86_CH252D_Phantom_medic_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Reserves SARC";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Phantom_sarc_helmet_co.paa"
		};
	};
	class STB86_CH252D_Sinder_Visible : STB86_CH252D_Base
	{
		displayName = "[86th STB] Sinder Visible";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\jester_Sinder_helmet_co.paa",
			"STB86_Auxiliary\helmets\Jester_sinder_visor_co.paa"
		};
	};
	class STB86_CH252D_Sinder_Visible_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] Sinder Visible";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\jester_Sinder_helmet_co.paa"
		};
	};
	class STB86_CH252D_Zeus_Sinder : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Sinder (Zeus)";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Zeus_Sinder_helmet_co.paa"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 15;
			uniformModel = "STB86_Auxiliary\backpacks\null.p3d";
			modelSides[] = { 3,1 };
			armor = 605;
			armorStructural = 2.90000001;
			explosionShielding = 2.90000001;
			passThrough = 0.001;
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.4;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 605;
					passThrough = 0.001;
				};
				class Neck
				{
					hitPointName = "HitNeck";
					armor = 605;
					passThrough = 0.001;
				};
			};
		};
	};
	class STB86_CH252D_Zeus_Sinder_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Sinder (Zeus)";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Zeus_Sinder_helmet_co.paa"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 15;
			uniformModel = "STB86_Auxiliary\backpacks\null.p3d";
			modelSides[] = { 3,1 };
			armor = 605;
			armorStructural = 2.90000001;
			explosionShielding = 2.90000001;
			passThrough = 0.001;
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.4;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 605;
					passThrough = 0.001;
				};
				class Neck
				{
					hitPointName = "HitNeck";
					armor = 605;
					passThrough = 0.001;
				};
			};
		};
	};
	//Firebrand
	class STB86_CH252D_Firebrand : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Firebrand Squad";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Firebrand_helmet_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
	};
	class STB86_CH252D_Firebrand_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Firebrand Squad";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Firebrand_helmet_co.paa"
		};
	};
	class STB86_CH252D_Firebrand_Heathen : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Heathen";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Firebrand_heathen_helmet_co.paa",
			"STB86_Auxiliary\helmets\Firebrand_heathen_visor_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			   "\OPTRE_UNSC_Units\Army\data\odst_helmet.rvmat",
			   "STB86_Auxiliary\material\VG_2.rvmat"
		};
	};
	class STB86_CH252D_Firebrand_Heathen_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Heathen";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Firebrand_heathen_helmet_co.paa"
		};
	};
	class STB86_CH252D_Firebrand_Camestry : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Camestry";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Firebrand_camestry_helmet_co.paa",
			"STB86_Auxiliary\helmets\Firebrand_camestry_visor_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			   "\OPTRE_UNSC_Units\Army\data\odst_helmet.rvmat",
			   "STB86_Auxiliary\material\VG_2.rvmat"
		};
	};
	class STB86_CH252D_Firebrand_Camestry_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Camestry";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Firebrand_camestry_helmet_co.paa"
		};
	};
	class STB86_CH252D_Firebrand_Reject : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Reject";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Firebrand_reject_helmet_co.paa",
			"STB86_Auxiliary\helmets\Firebrand_reject_visor_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			   "\OPTRE_UNSC_Units\Army\data\odst_helmet.rvmat",
			   "STB86_Auxiliary\material\VG_2.rvmat"
		};
	};
	class STB86_CH252D_Firebrand_Reject_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Reject";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Firebrand_reject_helmet_co.paa"
		};
	};
	class STB86_CH252D_Vandal_Wrath : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Wrath";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_Wrath_helmet_co.paa",
			"STB86_Auxiliary\helmets\Chaos_Wrath_visor_co.paa"
		};
	};
	class STB86_CH252D_Vandal_Wrath_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Wrath";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_Wrath_helmet_co.paa"
		};
	};
	class STB86_CH252D_Jester_Conrad : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Conrad";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Jester_Conrad_helmet_co.paa",
			"STB86_Auxiliary\helmets\Jester_Conrad_visor_co.paa"
		};
	};
	class STB86_CH252D_Jester_Conrad_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Conrad";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Jester_Conrad_helmet_co.paa"
		};
	};
	class STB86_CH252D_Vandal : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Vandal Squad";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_helmet_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
	};
	class STB86_CH252D_Vandal_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Vandal Squad";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_helmet_co.paa"
		};
	};
	class STB86_CH252D_Vandal_Bow : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Bow";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_Bow_helmet_co.paa",
			"STB86_Auxiliary\helmets\Vandal_Bow_Visor_co.paa"
		};
	};
	class STB86_CH252D_Vandal_Bow_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Bow";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_Bow_helmet_co.paa"
		};
	};
	class STB86_CH252D_Vandal_Light : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Light";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_light_helmet_co.paa",
			"STB86_Auxiliary\helmets\Vandal_light_Visor_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			   "\OPTRE_UNSC_Units\Army\data\odst_helmet.rvmat",
			   "STB86_Auxiliary\material\VG_2.rvmat"
		};
	};
	class STB86_CH252D_Vandal_Light_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Light";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_light_helmet_co.paa"
		};
	};
	class STB86_CH252D_Vandal_Icey : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Icey";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_Icey_helmet_co.paa",
			"STB86_Auxiliary\helmets\Vandal_Icey_Visor_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			   "\OPTRE_UNSC_Units\Army\data\odst_helmet.rvmat",
			   "STB86_Auxiliary\material\Vandal.rvmat"
		};
	};
	class STB86_CH252D_Vandal_Icey_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Icey";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_Icey_helmet_co.paa"
		};
	};
	class STB86_CH252D_Vandal_Bub : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Bub";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_Bub_helmet_co.paa",
			"STB86_Auxiliary\helmets\Vandal_Bub_Visor_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			   "\OPTRE_UNSC_Units\Army\data\odst_helmet.rvmat",
			   "STB86_Auxiliary\material\VG_2.rvmat"
		};
	};
	class STB86_CH252D_Vandal_Bub_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Bub";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_Bub_helmet_co.paa"
		};
	};
	class STB86_CH252D_Vandal_Heimdall : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Heimdall";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_heimdall_helmet_co.paa",
			"STB86_Auxiliary\helmets\Vandal_heimdall_Visor_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"OPTRE_UNSC_Units\Army\data\odst_helmet.rvmat",
			"STB86_Auxiliary\material\Vandal.rvmat"
		};
	};
	class STB86_CH252D_Vandal_Heimdall_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Bub";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_heimdall_helmet_co.paa"
		};
	};
	class STB86_CH252D_Wildcard_AJ : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D AJ (Battle)";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Wildcard_AJ_battlehelmet_co.paa",
			"STB86_Auxiliary\helmets\Wildcard_AJ_battlevisor_co.paa"
		};
	};
	class STB86_CH252D_Wildcard_AJ_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D AJ";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Wildcard_AJ_battlehelmet_co.paa"
		};
	};
	class STB86_CH252D_Faidan : STB86_CH252D_Base
	{
		displayName = "[86th STB] Faidan";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\faidan_helmet_co.paa",
			"STB86_Auxiliary\helmets\faidan_visor_co.paa"
		};
	};
	class STB86_CH252D_Faidan_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] Faidan";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\faidan_helmet_co.paa"
		};
	};
	class STB86_CH252D_Jester_celtic : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Celtic";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Jester_celtic_helmet_co.paa",
			"STB86_Auxiliary\helmets\Jester_celtic_visor_co.paa"
		};
	};
	class STB86_CH252D_Jester_celtic_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Celtic";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Jester_celtic_helmet_co.paa"
		};
	};
	class STB86_CH252D_Jester_guilty : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D guilty";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Jester_guilty_helmet_co.paa",
			"STB86_Auxiliary\helmets\Jester_guilty_visor_co.paa"
		};
	};
	class STB86_CH252D_Jester_guilty_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D guilty";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Jester_guilty_helmet_co.paa"
		};
	};
	class STB86_CH252D_Jester_Lewie : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Lewie";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\jester_Lewie_helmet_co.paa",
			"STB86_Auxiliary\helmets\jester_Lewie_visor_co.paa"
		};
	};
	class STB86_CH252D_Jester_Lewie_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Lewie";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\jester_Lewie_helmet_co.paa"
		};
	};
	class STB86_CH252D_Vandal_n3rf : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D n3rf";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_n3rf_helmet_co.paa",
			"STB86_Auxiliary\helmets\Vandal_n3rf_visor_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			   "\OPTRE_UNSC_Units\Army\data\odst_helmet.rvmat",
			   "STB86_Auxiliary\material\VG_2.rvmat"
		};
	};
	class STB86_CH252D_Vandal_n3rf_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D n3rf";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Vandal_n3rf_helmet_co.paa"
		};
	};
	class STB86_CH252D_banana : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D Monkey";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\banana_monkey_helmet_co.paa",
			"STB86_Auxiliary\helmets\banana_monkey_visor_co.paa"
		};
	};
	class STB86_CH252D_banana_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D Monkey";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\banana_monkey_helmet_co.paa"
		};
	};
	//Recon
	class _Senko_Recon : OPTRE_UNSC_Recon_Helmet
	{
		displayName = "Senko";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\armor\fox_uniform_co.paa",
			"STB86_Auxiliary\helmets\Fox_visor_co.paa"
		};
	};
	class _Senko_Recon_dp : OPTRE_UNSC_Recon_Helmet_dp
	{
		displayName = "Senko";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\armor\fox_uniform_co.paa",
		};
	};
	class STB86_Recon : OPTRE_UNSC_Recon_Helmet
	{
		displayName = "[86th STB] Recon Center OLD";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Center_co.paa",
			"STB86_Auxiliary\helmets\Center_visor_co.paa"
		};
	};
	class STB86_Recon_dp : OPTRE_UNSC_Recon_Helmet_dp
	{
		displayName = "[86th STB] Recon Center OLD";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Center_co.paa",
		};
	};
	class STB86_Recon_Luci : OPTRE_UNSC_Recon_Helmet
    {
        displayName = "[86th STB] Recon Luci";
        hiddenSelectionsTextures[] =
        {
            "STB86_Auxiliary\helmets\Firebrand_Luci_helmet_co.paa",
            "STB86_Auxiliary\helmets\Firebrand_Luci_visor_co.paa"
        };
	};
	class STB86_Recon_Luci_dp : OPTRE_UNSC_Recon_Helmet
    {
        displayName = "[86th STB] Recon Luci";
		scope= 1;
		scopeArsenal= 1;
        hiddenSelectionsTextures[] =
        {
            "STB86_Auxiliary\helmets\Firebrand_Luci_helmet_co.paa",
            "STB86_Auxiliary\helmets\Firebrand_Luci_visor_dp_co.paa"
        };
	};
	class STB86_mickyC_CH252D : STB86_CH252D_Base
	{
		displayName = "[86th STB] CH252D McAllister";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\McAllister_helmet_co.paa",
			"STB86_Auxiliary\helmets\McAllister_visor_co.paa"
		};
	};
	class STB86_mickyC_CH252D_dp : STB86_CH252D_dp
	{
		displayName = "[86th STB] CH252D McAllister";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\McAllister_helmet_co.paa",
		};
	};
	class STB86_Ouroboros : OPTRE_UNSC_Commando_Helmet
	{
		displayName = "[Innie] Ouroboros";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Ouroboros_helmet_co.paa",
			"STB86_Auxiliary\helmets\Ouroboros_visor_co.paa"
		};
	};
	class STB86_Ouroboros_dp : OPTRE_UNSC_Commando_Helmet_dp
	{
		displayName = "[Innie] Ouroboros";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Ouroboros_helmet_co.paa"
		};
	};
	//Wildcard
	class STB86_Wildcard_AJ_helmet : STB86_CH252D_Base  // Hey AJ if you read this, I'll let you add ODST huds to these if you ask, I'll teach you the set up.
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[86th STB] Wildcard AJ";
		picture = "STB86_Auxiliary\Icons\pilots_suck_co.paa"; // This is the most based thing I ever did.
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Wildcard_AJ_helmet_co.paa"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 25;
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
			modelSides[] = { 3,1 };
			armor = 30;
			armorStructural = 0.50000001;
			explosionShielding = 0.50000001;
			passThrough = 0.1;
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.4;
			hiddenSelections[] =
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 20;
					passThrough = 0.1;
				};
			};
		};
	};
	class STB86_Wildcard_AJ_helmet_dp : STB86_CH252D_dp  // Hey AJ if you read this, I'll let you add ODST huds to these if you ask, I'll teach you the set up.
	{
		scope = 1;
		scopeArsenal = 0;
		displayName = "[86th STB] Wildcard AJ dp";
		picture = "STB86_Auxiliary\Icons\pilots_suck_co.paa"; // This is the most based thing I ever did.
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Wildcard_AJ_helmet_co.paa"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 25;
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
			modelSides[] = { 3,1 };
			armor = 30;
			armorStructural = 0.50000001;
			explosionShielding = 0.50000001;
			passThrough = 0.1;
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.4;
			hiddenSelections[] =
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 20;
					passThrough = 0.1;
				};
			};
		};
	};
	class STB86_Wildcard_Neko_helmet : STB86_CH252D_Base
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[86th STB] Wildcard Neko";
		picture = "STB86_Auxiliary\Icons\pilots_suck_co.paa";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		hiddenSelections[] =
		{
			"camo",,
			"camo_1",
			"camo2",
			"camo_2"
		};
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Wildcard_Neko_helmet_co.paa",
			"STB86_Auxiliary\helmets\Wildcard_neko_visor_co.paa",
			"STB86_Auxiliary\helmets\Wildcard_neko_visor_co.paa",
			"STB86_Auxiliary\helmets\Wildcard_neko_visor_co.paa"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 25;
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
			modelSides[] = { 3,1 };
			armor = 30;
			armorStructural = 0.50000001;
			explosionShielding = 0.50000001;
			passThrough = 0.1;
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.4;
			hiddenSelections[] =
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 20;
					passThrough = 0.1;
				};
			};
		};
	};
	class STB86_Wildcard_Neko_helmet_dp : STB86_CH252D_dp
	{
		scope = 1;
		scopeArsenal = 0;
		weaponPoolAvailable = 1;
		displayName = "[86th STB] Wildcard Neko";
		picture = "STB86_Auxiliary\Icons\pilots_suck_co.paa";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		hiddenSelections[] =
		{
			"camo",
			"visor",
			"camo2",
			"faceshield",
			"shield"
		};
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\helmets\Wildcard_Neko_helmet_co.paa",
			"STB86_Auxiliary\helmets\Wildcard_neko_visor_co.paa",
			"STB86_Auxiliary\helmets\Wildcard_neko_visor_co.paa",
			"STB86_Auxiliary\helmets\Wildcard_neko_visor_co.paa",
			"STB86_Auxiliary\helmets\Wildcard_neko_visor_co.paa"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 25;
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
			modelSides[] = { 3,1 };
			armor = 30;
			armorStructural = 0.50000001;
			explosionShielding = 0.50000001;
			passThrough = 0.1;
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.4;
			hiddenSelections[] =
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 20;
					passThrough = 0.1;
				};
			};
		};
	};
};
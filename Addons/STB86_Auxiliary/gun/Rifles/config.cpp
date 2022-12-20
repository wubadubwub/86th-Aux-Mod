class CfgPatches
{
	class Custom_Primary
	{
		author="Sinder";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"OPTRE_Weapons"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class Single;
class WeaponSlotsInfo;
class CfgWeapons
{
	class OPTRE_MA5B;
	class OPTRE_MA5C;
	class UGL_F;
	class OPTRE_MA5BGL;
	class OPTRE_M45;
	class OPTRE_MA5CGL;
	class OPTRE_M90A;
	class ItemCore;
	class OPTRE_M392_DMR;
	class OPTRE_M6G;
	class OPTRE_BR55;
	class OPTRE_BR55HB;
	class OPTRE_MA37K;
	class OPTRE_SRS99C;
	class InventoryOpticsItem_Base_F;
	class OPTRE_M41_SSR;
	class OPTRE_M12_SOC;
	class OPTRE_M28A2;
	class srifle_EBR_F;
	class OPTRE_LongRifle_Base: srifle_EBR_F
	{
		class Single;
		class Auto;
		class WeaponSlotsInfo;
	};
	//Weapon Base Classes
	class STB86_BR55HB: OPTRE_BR55HB
	{
		author="Sinder";
		displayName="[86th] BR55XHB Battle Rifle";
		magazines[]=
		{
			"OPTRE_36Rnd_95x40_Mag",
			"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",
			"OPTRE_36Rnd_95x40_Mag_Tracer",
			"TCF_36Rnd_95x40_Mag_JHP",
			"TCF_36Rnd_95x40_Mag_SS",
			"TCF_36Rnd_95x40_Mag_JHPT"
		};
		picture="\OPTRE_weapons\br\icons\br.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\gun\Rifles\Data\br55_86_CO.paa"
		};
		baseWeapon="86_BR55HB";
	};
	class STB86_BR55: OPTRE_BR55
	{
		author="Sinder";
		displayName="[86th] BR55X Battle Rifle";
		magazines[]=
		{
			"OPTRE_36Rnd_95x40_Mag",
			"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",
			"OPTRE_36Rnd_95x40_Mag_Tracer",
			"TCF_36Rnd_95x40_Mag_JHP",
			"TCF_36Rnd_95x40_Mag_SS",
			"TCF_36Rnd_95x40_Mag_JHPT"
		};
		picture="\OPTRE_weapons\br\icons\br.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\gun\Rifles\Data\br55_86_CO.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[]=
                {
                    "OPTRE_MA5Suppressor",
					"41st_Bayonet2"
                };
            };
        };
		baseWeapon="86_BR55";
	};
	class STB86_StreetSweeper: OPTRE_M12_SOC
	{
		author="Sinder";
		scope=2;
		scopeArsenal=2;
		displayName="[86TH] StreetSweeper";
		baseWeapon="86_StreetSweeper";
		magazines[]=
		{
			"OPTRE_6Rnd_8Gauge_Pellets",
			"OPTRE_6Rnd_8Gauge_Slugs",
			"OPTRE_6Rnd_8Gauge_HEDP",
			"TCF_12Rnd_8Gauge_Pellet",
			"STB86_StreetSweeper_32Rnd_Drum"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\gun\Rifles\Data\MA5B_86_co.paa"
			
		};
	};
	class STB86_MA5B: OPTRE_MA5B
	{
		author="Sinder";
		scope=2;
		scopeArsenal=2;
		displayName="[86TH] MA5B";
		baseWeapon="86_MA5B";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762X51_Mag",
			"OPTRE_32Rnd_762X51_Mag_Tracer",
			"OPTRE_32Rnd_762X51_Mag_Tracer_Yellow",
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\gun\Rifles\Data\MA5B_86_co.paa",
			"STB86_Auxiliary\gun\Rifles\Data\MA5B_86_co.paa"
			
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[]=
                {
                    "OPTRE_MA5Suppressor",
					"41st_Bayonet2",
					"optre_m6_silencer",
					
                };
            };
        };
	};
	class STB86_MA5BGL: OPTRE_MA5BGL
	{
		author="Sinder";
		scope=2;
		scopeArsenal=2;
		displayName="[86TH] MA5BGL";
		baseWeapon="86_MA5BGL";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762X51_Mag",
			"OPTRE_32Rnd_762X51_Mag_Tracer",
			"OPTRE_32Rnd_762X51_Mag_Tracer_Yellow",
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\gun\Rifles\Data\MA5B_86_co.paa",
			"STB86_Auxiliary\gun\Rifles\Data\MA5B_86_co.paa"
			
		};
	};
	class NERF_MA5B: OPTRE_MA5B
	{
		author="Sinder";
		scope=2;
		scopeArsenal=2;
		displayName="[86TH] MA5B [Nerf]";
		baseWeapon="NERF_MA5B";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762X51_Mag",
			"OPTRE_32Rnd_762X51_Mag_Tracer",
			"OPTRE_32Rnd_762X51_Mag_Tracer_Yellow",
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\gun\Rifles\Data\MA5B_Nerf_CO.paa",
            "STB86_Auxiliary\gun\Rifles\Data\Smartlink_Nerf_co.paa"
			
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[]=
                {
                    "OPTRE_MA5Suppressor",
					"41st_Bayonet2",
					"optre_m6_silencer"
                };
            };
        };
	};
	class STB86_M90: OPTRE_M90A
	{
		author="Sinder";
		scope=2;
		scopeArsenal=2;
		displayName="[86TH] M90";
		baseWeapon="86_M90";
		magazines[]=
		{
			"OPTRE_6Rnd_8Gauge_Pellets",
			"OPTRE_6Rnd_8Gauge_Slugs",
			"TCF_12Rnd_8Gauge_Pellet",
			"TCF_12Rnd_8Gauge_Slug"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]= // These do not work on this shotgun
		{
			"STB86_Auxiliary\armor\fox_uniform_co.paa",
			"STB86_Auxiliary\armor\fox_uniform_co.paa"
		};
	};
	class STB86_SRS99C: OPTRE_SRS99C
	{
		author="Sinder";
		scope=2;
		scopeArsenal=2;
		displayName="[86TH] SRS99C";
		baseWeapon="86_SRS99C";
		modes[]=
		{
			"Single"
		};
		magazines[]=
		{
			"OPTRE_4Rnd_145x114_APFSDS_Mag",
			"TCF_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_HEDP_Mag",
			"OPTRE_4Rnd_145x114_HVAP_Mag",
			"TCF_4Rnd_145x114_Mag_HVAPT",
			"TCF_4Rnd_145x114_Mag_NARQT",
			"TCF_4Rnd_145x114_Mag_NARQ",
			"SC_5Rnd_50HV_Mag",
			"SC_5Rnd_50HE_Mag",
			"TCF_4Rnd_145x114_Mag_SS",
			"TCF_4Rnd_145x114_Mag_SST"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\gun\Rifles\Data\SRS99C_86_co.paa",
			"STB86_Auxiliary\gun\Rifles\Data\SRS99C_86_co.paa"
		};
			class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[]=
                {
                    "OPTRE_SRS99D_Suppressor"
                };
            };
        };
	};
	class STB86_M392_DMR: OPTRE_M392_DMR
	{
		author="Sinder";
		scope=2;
		scopeArsenal=2;
		displayName="[86TH] M392 DMR";
		baseWeapon="86_M392_DMR";
		modes[]=
		{
			"Single"
		};
		magazines[]=
		{
			"OPTRE_36Rnd_95x40_Mag",
			"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",
			"OPTRE_36Rnd_95x40_Mag_Tracer",
			"TCF_36Rnd_95x40_Mag_JHP",
			"TCF_36Rnd_95x40_Mag_SS",
			"TCF_36Rnd_95x40_Mag_JHPT",
			"Commando_20Rnd_65_Mag",
			"Commando_20Rnd_65_TracerY_Mag",
			"OPTRE_16Rnd_127x40_Mag_AP",
			"OPTRE_10Rnd_127x99"
			
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\gun\Rifles\Data\M392_86_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[]=
                {
                    "OPTRE_MA5Suppressor",
					"41st_Bayonet2",
					"OPTRE_M12_Suppressor",
					"ace_muzzle_mzls_b",
					"optre_m7_silencer"
                };
            };
        };
	};
	class STB86_M45 : OPTRE_M45
	{
		author = "Sinder";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[86TH] M45 Special";
		baseWeapon = "STB86_M45";
		magazines[] =
		{
			"OPTRE_6Rnd_8Gauge_Pellets",
			"OPTRE_6Rnd_8Gauge_Slugs",
			"STB86_M45_UR_SLUG"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = // these don't actually work on this shotgun
		{
			"_86th_Auxilery\armor\fox_uniform_co.paa",
			"_86th_Auxilery\armor\fox_uniform_co.paa"
		};
	};

	//Chaos (There's not really a need to seperate by squad since the guns aren't squad based and are just individual.)  Actually might be better to organize by gun
	class STB86_BR55_Chaos_Luci : STB86_BR55 {
		displayName = "[86th] Luci BR55";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\gun\Rifles\Data\br55_chaos_luci_co.paa"
		};
	};
	class STB86_MA5B_Chaos_Heathen : STB86_MA5B {
		displayName = "[86th] Heathen MA5B";
		hiddenSelectionsTextures[] =
		{
			"STB86_Auxiliary\gun\Rifles\Data\MA5_Heathen_co.paa",
			"STB86_Auxiliary\gun\Rifles\Data\MA5_Heathen_upper_co.paa"
		};
	};
	//Vandal ignore
	class STB86_MA5_Vandal_Grenader : STB86_MA5B {
		displayName = "[86th] Grenader MA5B";
		hiddenSelectionsTextures[] = {
			"STB86_Auxiliary\gun\Rifles\Data\MA5_vandal_herrington_co.paa",
			"STB86_Auxiliary\gun\Rifles\Data\MA5B_86_co.paa"
		};
	};
	// SRS99C
	class STB86_SRS99C_Monkey : STB86_SRS99C {
		displayName = "[86th] Monkey SRS";
		hiddenSelectionsTextures[] = {
			"STB86_Auxiliary\gun\Rifles\Data\SRS99C_Monkey_co.paa"
		};
	};
};

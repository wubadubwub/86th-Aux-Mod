class CfgPatches
{
	class Custom_weapons
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
			"OPTRE_Weapons",
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
class BaseSoundModeType;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class cfgWeapons
{
	class OPTRE_M6G;
	class TCF_M33;
	class M6G_Sinder_Vivy: OPTRE_M6G // I apparently made my pistol the base class for everyone.
	{
		dlc="STB86_Auxiliary";
		author="Sinder";
		scope=2;
		scopeArsenal=2;
		displayName="[86th STB] M6G Sinder (Vivy)";
		baseWeapon="OPTRE_M6GC";
		model="\OPTRE_Weapons\Pistol\M6G";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\gun\data\SinderSpecial_CO.paa"
		};
		magazines[]=
		{
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag_Tracer",
			"OPTRE_10Rnd_127x99",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"TCF_16Rnd_127x40_Mag_NARQT"
		};
	};
	class M6G_86: M6G_Sinder_Vivy
	{
		Displayname="[86th STB] M6G";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Weapons\Pistol\data\M6G_CO.paa"
		};
	};
	class M6G_Foxpattern: M6G_Sinder_Vivy
	{
		Displayname="[86th STB] M6G Fox";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\armor\fox_uniform_co.paa"
		};
	};
	class M33_86: TCF_M33
	{
		Displayname="[86th STB] Godfather";
		dlc="STB86_Auxiliary";
		author="The J";
		scope=2;
		scopeArsenal=2;
		baseWeapon="M33_86";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Weapons\Pistol\data\M6G_CO.paa"
		};
		magazines[]=
		{
			"TCF_6Rnd_127x40_Cyl",
			"STB86_6Rnd_127x40_HiPow_Cyl",
			"STB86_6Rnd_127x40_EHiPow_Cyl"
		};
	}
};
class CfgPatches
{
	class customcommando
	{
		units[]={};
		weapons[]=
		{
			"86th_Commando"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"OPTRE_Weapons"
		};
		author="Article 2 Studios";
		magazines[]={};
		ammo[]=
		{
			"OPTRE_65_Creedmoor",
			"OPTRE_65_Tracer_Y",
			"OPTRE_65_Tracer_R"
		};
	};
};
class CfgAmmo
{
	class B_93x64_Ball;
	class OPTRE_65_Creedmoor: B_93x64_Ball
	{
		cartridge="FxCartridge_65";
	};
	class OPTRE_65_Tracer_Y: OPTRE_65_Creedmoor
	{
		cartridge="FxCartridge_65";
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class OPTRE_65_Tracer_R: OPTRE_65_Creedmoor
	{
		cartridge="FxCartridge_65";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};
class CfgMagazines
{
	class 10Rnd_93x64_DMR_05_Mag;
	class Commando_30Rnd_95_Mag: 10Rnd_93x64_DMR_05_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Commando\Commando_Mag.p3d";
		displayname="30 9.5 Creedmoor Magazine";
		displaynameshort="9.5 Creedmoor";
		ammo="OPTRE_65_Creedmoor";
		count=30;
		initspeed=1000;
		picture="\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort="30 Round Magazine<br>9.5 Creedmoor";
		mass=13;
		tracersEvery=0;
		lastRoundsTracer=0;
	};
	class Commando_30Rnd_95_TracerY_Mag: Commando_30Rnd_95_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Commando\Commando_Mag.p3d";
		displayname="30 9.5 Magazine (Tracers Yellow)";
		displaynameshort="9.5 Creed Tracer";
		ammo="OPTRE_65_Tracer_Y";
		count=30;
		initspeed=1000;
		picture="\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort="30 Round Magazine<br>9.5 Tracer Yellow";
		mass=14;
		tracersEvery=1;
		lastRoundsTracer=40;
	};
	class Command_30Rnd_95_TracerR_Mag: Commando_30Rnd_95_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Commando\Commando_Mag.p3d";
		displayname="30Rnd 9.5 Magazine (Tracers Red)";
		displaynameshort="9.5 Creed Tracer";
		ammo="OPTRE_65_Tracer_R";
		count=30;
		initspeed=1000;
		picture="\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort="30 Round Magazine<br>9.5 Tracer Red";
		mass=14;
		tracersEvery=1;
		lastRoundsTracer=30;
	};
	class Commando_30Rnd_95_ReloadY_Mag: Commando_30Rnd_95_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Commando\Commando_Mag.p3d";
		displayname="30Rnd 9.5 Reload Tracer (Yellow)";
		displaynameshort="9.5 Creedmoor";
		ammo="OPTRE_65_Tracer_Y";
		count=30;
		initspeed=1000;
		picture="\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort="30 Round Magazine<br>9.5 Creedmoor";
		mass=14;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
	class Commando_30Rnd_95_ReloadR_Mag: Commando_30Rnd_95_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Commando\Commando_Mag.p3d";
		displayname="30Rnd 9.5 Reload Tracer (Red)";
		displaynameshort="9.5 Creedmoor";
		ammo="OPTRE_65_Tracer_R";
		count=30;
		initspeed=1000;
		picture="\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort="30 Round Magazine<br>9.5 Creedmoor";
		mass=15;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class CfgWeapons
{
	class OPTRE_M295_BMR;
	class 86th_Commando: OPTRE_M295_BMR
	{
		dlc="OPTRE";
		author="Vigilance";
		scope=2;
		scopeArsenal=2;
		displayName="(86th) VK78 Commando";
		descriptionShort="Tactical Rifle (Long Range)";
		picture="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\Commando\VK.paa";
		model="\OPTRE_Weapons\Commando\Commando.p3d";
		baseWeapon="86th_Commando";
		cursor="OPTRE_M392";
		magazines[]=
		{
			"Commando_30Rnd_95_Mag",
			"Commando_30Rnd_95_Mag",
			"Commando_30Rnd_95_TracerY_Mag",
			"Command_30Rnd_95_TracerR_Mag",
			"Commando_30Rnd_95_ReloadY_Mag",
			"Commando_30Rnd_95_ReloadR_Mag"
		};
		magazineWell[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Weapons\Commando\data\commando_black_co.paa",
			"OPTRE_Weapons\Commando\data\commando2_black_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Commando\data\anims\VK78_handanim.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\Handanim_M395_Spartan.rtm"
		};
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\Commando\VK.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye="OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows=2;
		HUD_TotalPosibleBullet=30;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_65_TI_blk_F",
					"OPTRE_MA5Suppressor",
					"41st_Bayonet2"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
					"OPTRE_M392_Scope",
					"OPTRE_BR55HB_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"OPTRE_BR45_Scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_IR",
					"acc_flashlight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
	class 86th_Bow_Commando : 86th_Commando
	{
		dlc="OPTRE";
		author="Vigilance";
		scope=2;
		scopeArsenal=2;
		displayName="(86th) VK78 Commando (Bow)";
		baseWeapon="86th_Bow_Commando";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_commando\Data\commando_kitty_co.paa",
			"custom_commando\Data\commando2_kitty_co.paa"
		};
	};
};

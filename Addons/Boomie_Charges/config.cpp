class CfgPatches
{
	class explosives_86ths_Stuff
	{
		author="Papa N3rf";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F"
		};
	};
};
class CfgVehicles
{
	class MineGeneric;
	class MineBase: MineGeneric
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=1;
		_generalMacro="MineBase";
		icon="iconExplosiveGP";
	};
	class ACE_Explosives_Place;
	class Demolition_86ths_Charge_Place: ACE_Explosives_Place
	{
		author="Papa N3rf";
		displayName="Demolition charge";
		model="\Boomie_Charges\Boom_Charges.p3d";
	};
	class Demolition_86th_Charge: MineBase
	{
		author="Papa N3rf";
		mapSize=0.31;
		editorPreview="";
		_generalMacro="DemoCharge_F";
		scope=2;
		icon="iconExplosiveGP";
		ammo="Light_demo_charge_ammo";
		model="\Boomie_Charges\Boom_Charges.p3d";
		displayName="Light Demolition charge";
	};
	class Demolition_Heavy_86th_Charge: MineBase
	{
		author="Papa N3rf";
		mapSize=0.31;
		editorPreview="";
		_generalMacro="DemoCharge_F";
		scope=2;
		icon="iconExplosiveGP";
		ammo="heavy_demo_charge_mag";
		model="\Boomie_Charges\Boom_Charges.p3d";
		displayName="heavy Demolition charge";
	};
};
class CfgAmmo
{
	class Default;
	class Grenade;
	class DemoCharge_Remote_Ammo;
	class Light_demo_charge_ammo: DemoCharge_Remote_Ammo
	{
		hit=5000;
		indirectHit=1000;
		indirectHitRange=7;
		dangerRadiusHit=5;
		suppressionRadiusHit=0;
		model="\Boomie_Charges\Boom_Charges.p3d";
		mineModelDisabled="\Boomie_Charges\Boom_Charges_defused.p3d";
		soundHit[]=
		{
			"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge",
			3.1622777,
			1,
			1500
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
			1.4125376,
			1,
			20
		};
		defaultMagazine="Light_demo_charge_mag";
		ExplosionEffects="MineNondirectionalExplosionSmall";
		CraterEffects="MineNondirectionalCraterSmall";
		whistleDist=32;
		mineInconspicuousness=5;
		mineTrigger="RemoteTrigger";
	};
	class Heavy_demo_charge_ammo: DemoCharge_Remote_Ammo
	{
		hit=20000;
		indirectHit=1000;
		indirectHitRange=11;
		dangerRadiusHit=10;
		suppressionRadiusHit=12;
		model="\Boomie_Charges\Boom_Charges.p3d";
		mineModelDisabled="\Boomie_Charges\Boom_Charges_defused.p3d";
		soundHit[]=
		{
			"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge",
			3.1622777,
			1,
			1500
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
			1.4125376,
			1,
			20
		};
		defaultMagazine="heavy_demo_charge_mag";
		ExplosionEffects="MineNondirectionalExplosionSmall";
		CraterEffects="MineNondirectionalCraterSmall";
		whistleDist=32;
		mineInconspicuousness=5;
		mineTrigger="RemoteTrigger";
	};
};
class CfgMagazines
{
	class DemoCharge_Remote_Mag;
	class Light_demo_charge_mag: DemoCharge_Remote_Mag
	{
		ace_explosives_SetupObject="Demolition_86ths_Charge_Place";
		ACE_Placeable=1;
		ACE_SetupObject="Light_demo_charge_mag";
		author="Papa N3rf";
		scope=2;
		mass=15;
		displayName="(86th) Tactical Light Demolition charge";
		picture="\Boomie_Charges\UI\boomies_iu.paa";
		model="\Boomie_Charges\Boom_Charges.p3d";
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		ammo="Light_demo_charge_ammo";
		descriptionShort="Fucks shit up a little";
		class Library
		{
			libTextDesc="";
		};
		allowedSlots[]={901,701};
	};
	class heavy_demo_charge_mag: DemoCharge_Remote_Mag
	{
		ace_explosives_SetupObject="Demolition_86ths_Charge_Place";
		ACE_Placeable=1;
		ACE_SetupObject="Heavy_demo_charge_ammo";
		author="Papa N3rf";
		scope=2;
		mass=30;
		displayName="(86th) Tactical Heavy Demolition charge";
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		picture="\Boomie_Charges\UI\boomies_iu.paa";
		model="\Boomie_Charges\Boom_Charges.p3d";
		ammo="Heavy_demo_charge_ammo";
		descriptionShort="Fucks shit up a whole lot";
		class Library
		{
			libTextDesc="";
		};
		allowedSlots[]={901,701};
	};
};
class CfgWeapons
{
	class Default;
	class Put: Default
	{
		muzzles[]+=
		{
			"light_Demolition_charge_muzzle",
			"Heavy_Demolition_charge_muzzle"
		};
		displayName="$STR_A3_CfgWeapons_Put0";
		class PutMuzzle;
		class light_Demolition_charge_muzzle: PutMuzzle
		{
			autoreload=0;
			displayName="Light Demolition charge";
			magazines[]=
			{
				"Light_demo_charge_mag"
			};
			enableAttack=1;
			showToPlayer=1;
		};
		class Heavy_Demolition_charge_muzzle: PutMuzzle
		{
			autoreload=0;
			displayName="Heavy Demolition charge";
			magazines[]=
			{
				"heavy_demo_charge_mag"
			};
			enableAttack=1;
			showToPlayer=1;
		};
	};
};
class cfgMods
{
	author="Papa N3rf";
	timepacked="1669834505";
};

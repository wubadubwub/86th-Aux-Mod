class CfgPatches
{
	class STB86_Ammunition
	{
		units[]={};
		weapons[]=
		{
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"OPTRE_Weapons"
		};
		author="86th mod team";
		magazines[]={};
		ammo[]=
		{
			"OPTRE_4Rnd_145x114_HEDP_Mag"  // TBH this can be any magazine, I just kind of used this as I couldn't be bothered.
		};
	};
};
class CfgAmmo 
{
    class B_127x108_Ball;
    class STB86_127x108_HighPow_Ammo : B_127x108_Ball{
        hit = 30;
        caliber = 3;
    };
};
class CfgMagazines
{
	class OPTRE_4Rnd_145x114_HEDP_Mag;
	class TCF_6Rnd_127x40_Cyl ;
	class ACE_2Rnd_12Gauge_Pellets_No2_Buck;
	class STB86_M45_UR_SLUG: OPTRE_4Rnd_145x114_HEDP_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Commando\Commando_Mag.p3d"; // Is actually the magazine model when dropped.
		displayname="(Test)Depleted Uranium Slugs"; // Name of magazine in arsenal
		displaynameshort="UR Slugs"; // Name of magazine in hud
		ammo="B_40mm_APFSDS_Tracer_Green"; // This is what's actually determining our damage and round.  You can manually define this with other magic, but this is inheriting this rounds stats.
		count=3; // Amount of bullets in magazine
		initspeed=300; // Speed of bullet, this speed pretty much makes it drop immediately after traveling 100 feet
		picture="\OPTRE_weapons\ar\icons\magazine.paa"; // Picture in inventory.
		descriptionshort="Depleted Uranium <br>Slug"; // Description area in arsenal.
		mass=60; // Weight of magazine
		tracersEvery=1; // Determines how many shots needed before tracer fired
		lastRoundsTracer=0; // When below this number, all shots will be tracers and ignore the tracersEvery number
	};
	class STB86_StreetSweeper_32Rnd_Drum: ACE_2Rnd_12Gauge_Pellets_No2_Buck
	{
		displayname="(86th)StreetSweeper Drum Mag";
		displaynameshort="Pellet Drum";
		count=32;
		descriptionshort="Street Sweeper Drum Magazine";
		mass=40;
	};
	class STB86_6Rnd_127x40_HiPow_Cyl : TCF_6Rnd_127x40_Cyl
	{
        dlc = "86th STB";
        displayName="[86th] Hi-Power 6rnd Cylinder (Heavy Load)";
        displaynameshort=".69 ACP";
        initspeed=1200;
        mass=5.5;
        ammo="STB86_127x108_HighPow_Ammo"
        descriptionshort="6rnd Hi-Power Cylinder";
    };
	class STB86_6Rnd_127x40_EHiPow_Cyl: TCF_6Rnd_127x40_Cyl
	{
		dlc="OPTRE";
		displayname="[86th] Extra Hi-power 6rnd Cylinder (Very Heavy Load)";
		displaynameshort="EHP Load .69 ACP";
		ammo="B_127x54_Ball";
		count=6;
		initspeed=1200;
		descriptionshort="Extra High Power Load";
		mass=6.5;
		tracersEvery=1;
		lastRoundsTracer=0;
	};
};

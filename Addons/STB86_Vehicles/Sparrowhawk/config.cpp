class CfgPatches
{
	class CustomHawk
	{
		units[]=
		{
			"OPTRE_AV22_Sparrowhawk",
			"OPTRE_AV22A_Sparrowhawk",
			"OPTRE_AV22B_Sparrowhawk",
			"OPTRE_AV22C_Sparrowhawk",
			"Wildcard_Sparrowhawk",
			"STB86_Sparrowhawk"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Air_F_Beta",
			"A3_Weapons_F",
			"OPTRE_Core",
			"OPTRE_Weapons"
		};
	};
};
class CfgVehicles
{
	class OPTRE_AV22_Sparrowhawk_Base;
	class OPTRE_AV22A_Sparrowhawk;
	class Turrets;
	class CopilotTurret;
	
	class Wildcard_Sparrowhawk: OPTRE_AV22A_Sparrowhawk
	{
		displayName="Wildcard Sparrowhawk";
		author="86TH STB modteam";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		vehicleClass="OPTRE_UNSC_Air_class";
		faction= "STB86_Faction";
		crew="OPTRE_UNSC_Airforce_Soldier_Airman";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"attach_noseLaser",
			"attach_CannonHeavy",
			"attach_Pylons",
			"attach_Decal1",
			"attach_Decal2"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Vehicles\Sparrowhawk\textures\Wildcard_Body_01_co.paa",
			"STB86_Vehicles\Sparrowhawk\textures\Wildcard_Body_02_co.paa",
			"STB86_Vehicles\Sparrowhawk\textures\Wildcard_Body_03_co.paa",
			"STB86_Vehicles\Sparrowhawk\textures\Wildcard_Body_04_co.paa",
			"STB86_Vehicles\Sparrowhawk\textures\Wildcard_Body_05_co.paa",
			"STB86_Vehicles\Sparrowhawk\textures\Wildcard_Autocannon_co.paa",
			"STB86_Vehicles\Sparrowhawk\textures\Wildcard_Feed_Autocannon_co.paa"
		};
		weapons[]=
		{
			"OPTRE_GUA23B",
			"OPTRE_M9109",
			"CMFlareLauncher",
			"OPTRE_M230",
			"OPTRE_M6_Laser"
		};
		magazines[]=
		{
			"OPTRE_2000Rnd_20mm_HEIAP",
			"OPTRE_2000Rnd_20mm_HEIAP",
			"OPTRE_2500Rnd_50mm_HE",
			"OPTRE_2500Rnd_50mm_HE",
			"OPTRE_100Rnd_50mm_HE",
			"OPTRE_100Rnd_50mm_HE",
			"OPTRE_100Rnd_50mm_HE",
			"OPTRE_100Rnd_50mm_APFSDS",
			"OPTRE_100Rnd_50mm_APFSDS",
			"OPTRE_100Rnd_50mm_APFSDS",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"OPTRE_SpLaser_Battery",
			"Laserbatteries",
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class STB86_Sparrowhawk: OPTRE_AV22_Sparrowhawk_Base
	{
		displayName="Specialized Sparrowhawk";
		author="86TH STB modteam";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		vehicleClass="OPTRE_UNSC_Air_class";
		faction= "STB86_Faction";
		crew="OPTRE_UNSC_Airforce_Soldier_Airman";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"attach_noseLaser",
			"attach_CannonHeavy",
			"attach_Pylons",
			"attach_Decal1",
			"attach_Decal2"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Vehicles\Sparrowhawk\textures\Protobody_01_co.paa",
			"STB86_Vehicles\Sparrowhawk\textures\Protobody_02_co.paa",
			"STB86_Vehicles\Sparrowhawk\textures\Protobody_03_co.paa",
			"STB86_Vehicles\Sparrowhawk\textures\Protobody_04_co.paa",
			"STB86_Vehicles\Sparrowhawk\textures\Protobody_05_co.paa",
			"STB86_Vehicles\Sparrowhawk\textures\ProtoAutocannon_co.paa",
			"STB86_Vehicles\Sparrowhawk\textures\ProtoFeed_Autocannon_co.paa"
		};
		weapons[]=
		{
			"OPTRE_GUA23B",
			"OPTRE_M9109",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"OPTRE_2000Rnd_20mm_HEIAP",
			"OPTRE_2000Rnd_20mm_HEIAP",
			"OPTRE_2500Rnd_50mm_HE",
			"OPTRE_2500Rnd_50mm_HE",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				weapons[]=
				{
					"OPTRE_M230",
					"OPTRE_M6_Laser",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_SpLaser_Battery",
					"OPTRE_SpLaser_Battery",
					"OPTRE_SpLaser_Battery",
					"OPTRE_SpLaser_Battery",
					"OPTRE_SpLaser_Battery",
					"Laserbatteries"
				};
			};
		};
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
	};
};
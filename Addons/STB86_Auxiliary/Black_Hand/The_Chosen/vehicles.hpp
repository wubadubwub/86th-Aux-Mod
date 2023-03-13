class B_MBT_01_cannon_F{
	class Turrets {
		class MainTurret;
	}
};

class STB86_BH_CH_MBT : B_MBT_01_cannon_F {
    editorSubcategory = "STB86_BH_CH_Veh_SubCat";

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
			author="86th Dev team";
			textures[]=
			{
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\MBT_Body.paa",
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\MBT_Turret.paa",
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\Camonet.paa"
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
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\MBT_Body.paa",
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\MBT_Turret.paa",
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\Camonet.paa"
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


class O_APC_Tracked_02_cannon_F{
	class Components;
	class Turrets {
		class MainTurret;
	};
};

class STB86_BH_CH_IFV : O_APC_Tracked_02_cannon_F {
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
			author="86th Dev team";
			textures[]=
			{
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\IFV_1.paa",
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\IFV_2.paa",
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\IFV_RCWS.paa",
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\Camonet.paa",
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\Cage.paa"
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
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\IFV_1.paa",
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\IFV_2.paa",
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\IFV_RCWS.paa",
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\Camonet.paa",
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\Cage.paa"
    };

    class Library
	{
		libTextDesc="The Chosen's IFV";
	};
};




class STB86_BH_CH_IFV_02 : STB86_BH_CH_IFV {
	displayName = "I-12AA Stormbreaker";
	commanderCanSee = 31;
	gunnerCanSee = 2 + 4 + 8 + 16;
	visualTarget = 1;
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			canUseScanner = 1;
			magazines[] = {"lxws_100rnd_23x152_truck_mag","lxws_100rnd_23x152_truck_mag","lxws_100rnd_23x152_truck_mag","lxws_100rnd_23x152_truck_mag","200Rnd_762x51_Belt_Green","200Rnd_762x51_Belt_Green","200Rnd_762x51_Belt_Green","200Rnd_762x51_Belt_Green","200Rnd_762x51_Belt_Green","200Rnd_762x51_Belt_Green","200Rnd_762x51_Belt_Green","200Rnd_762x51_Belt_Green","2Rnd_GAT_missiles_O","2Rnd_GAT_missiles_O"};
			weapons[] = {"STB86_BH_CH_IFV_02_Cannon","LMG_coax_ext","missiles_titan"};
		};
	};
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class ActiveRadarSensorComponent : SensorTemplateActiveRadar
				{
					class AirTarget
					{
						minRange = 100;
						maxRange = 4000;
						objectDistanceLimitCoef	= -1;
						viewDistanceLimitCoef	= -1;
					};
					angleRangeHorizontal = 270;
					angleRangeVertical = 90;
				};
				class IRSensorComponent : SensorTemplateIR {};
			};
		};
	};

};


class O_APC_Wheeled_02_rcws_v2_F;
class STB86_BH_CH_APC : O_APC_Wheeled_02_rcws_v2_F {
    editorSubcategory = "STB86_BH_CH_Veh_SubCat";
    smokeLauncherGrenadeCount = 20;
    smokeLauncherAngle = 360;
    smokeLauncherVelocity=30;
	smokeLauncherOnTurret=0;

    displayName = "A-9 Intruder";
    crew = "STB86_BH_Crewman";
    faction = "STB86_Black_Hand";
    side = 0; 	

    class TextureSources
	{
		class STB86_BH_CH_APC_Tex
		{
			displayName="The Chosen";
			author="86th Dev team";
			textures[]=
			{
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\APC_1.paa",
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\APC_2.paa",
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\APC_Turret.paa",
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\Camonet.paa",
                "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\Cage.paa"
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
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\APC_1.paa",
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\APC_2.paa",
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\APC_Turret.paa",
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\Camonet.paa",
        "STB86_Auxiliary\Black_hand\The_Chosen\textures\veh\Cage.paa"
    };
    class Library
	{
		libTextDesc="The Chosen's APC";
	};
};

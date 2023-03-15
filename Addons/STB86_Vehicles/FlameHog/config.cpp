class CfgPatches
{
	class STB86_FlameHog
	{
		units[]=
		{
			"STB86_Flame_M12G1",
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Vehicles_Warthog",
            "STB86_Flamethrower_cfg",
		};
	};
};

class CfgVehicles {
	class Car_F;
	class OPTRE_M12_Base:Car_F
	{
	    class Turrets;
	};

	class OPTRE_M12G1_LRV: OPTRE_M12_Base
	{
	    class Turrets: Turrets
	    {
	        class MainTurret;
	        class CargoGunner_1;
	    };
	};

    class STB86_Flame_M12G1 : OPTRE_M12G1_LRV {
		displayName = "M12G1 Flame Hog";
		faction = "STB86_Faction";	
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                magazines[] = {"STB86_Flamethrower_Canister","STB86_Flamethrower_Canister","STB86_Flamethrower_Canister","STB86_Flamethrower_Canister"};
                weapons[] = {"STB86_Vehicle_Flamethrower"};
            };
			class CargoGunner_1: CargoGunner_1 {};
        };
    };
};
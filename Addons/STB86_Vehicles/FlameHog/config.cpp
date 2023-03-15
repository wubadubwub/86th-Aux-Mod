class CfgPatches
{
	class STB86_FlameHog
	{
		units[]=
		{
			"STB86_Flame_M12G1",
		};
		weapons[]={
            "STB86_Flame_M12G1_MainGun",
        };
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Vehicles_Warthog",
            "STB86_Flamethrower_cfg",
		};
	};
};

class CfgVehicles {
    class OPTRE_M12G1_LRV {
        class Turrets {
            class MainTurret;
        }
    };
    class STB86_Flame_M12G1 : OPTRE_M12G1_LRV {
		displayName = "M12G1 Flame Hog";
		faction = "STB86_Faction";	
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                magazines[] = {"STB86_Flamethrower_Canister","STB86_Flamethrower_Canister","STB86_Flamethrower_Canister","STB86_Flamethrower_Canister"};
                weapons[] = {"STB86_Flame_M12G1_MainGun"};
            };
        };
    };
};

class CfgWeapons {
    class STB86_Flamethrower {
        class FullAuto;
    };
	// Vehicles
	class STB86_Flame_M12G1_MainGun : STB86_Flamethrower {
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		STB86_Flamethrower_Speed = 45;
		displayName = "Flamethrower";
		class FullAuto : FullAuto {
			minRange=10;
			minRangeProbab=1;
			midRange=25;
			midRangeProbab=0.97;
			maxRange=40;
			maxRangeProbab=0.5;
		};
	};  
};
class CfgPatches{
    class STB86_Flamer{
        name = "86th STB flamer";
		author = "AJ";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = { "A3_Functions_F" };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"STB86_Flamer"};
    };
};

class CfgWeapons{
    class OPTRE_M247H_Etilka;
    class STB86_Flamer : OPTRE_M247H_Etilka {
        baseWeapon = "STB86_Flamer";
        displayName = "[86th] Flamer";
        descriptionShort = "A FUCKING FLAMETHROWER";
        author = "AJ";
        magazines[] = {"STB86_Flamer_Canister"};
    };
};
class CfgAmmo{
    class B_762x39_Ball_Green_F;
    class STB86_Flame : B_762x39_Ball_Green_F{
        typicalSpeed = 50;
        timeToLive = 3;
        deflecting = 1;
        affectedByWind = true;
        tracerColorR[] = {0,0,0,0};
        lightColor[] = {217, 88, 0, 0.8};
        triggerTime = 0;
    };
};
class CfgMagazines{
    class OPTRE_200Rnd_127x99_M247H_Etilka_Ball;
    class STB86_Flamer_Canister : OPTRE_200Rnd_127x99_M247H_Etilka_Ball{
        count=300;
        ammo="STB86_Flame";
        displayName = "Flame Canister";
        initSpeed = 50;
    };
};

class Extended_FiredBIS_Eventhandlers {
    class CAManBase{
            fired="[(_this select 1), (_this select 6)] spawn STB86_Flamer_fnc_Flamethrower_EH";
    };
};

class CfgFunctions{
    class STB86_Flamer{
        class functions{
			file = "\STB86_Flamethrower";
            class Flamethrower_EH{};
        };
    };
};
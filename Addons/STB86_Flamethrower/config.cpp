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
    class M319_HE;
    class STB86_Flame : M319_HE{
	    class CamShakeFire
	    {
	    	power = 0;
	    	duration = 0;
	    	frequency = 0;
	    	distance = 0;
	    };
	    class CamShakePlayerFire
	    {
	    	power = 0;
	    	duration = 0;
	    	frequency = 0;
	    };
	    class CamShakeHit
	    {
	    	power = 0;
	    	duration = 0;
	    	frequency = 0;
	    };

        explosionEffects = "";
        craterEffects = "";
        soundHit1[] = {"",1,1,1};
        soundHit2[] = {"",1,1,1};
        soundHit3[] = {"",1,1,1};
        soundHit4[] = {"",1,1,1};
        soundHit5[] = {"",1,1,1};
        soundHit6[] = {"",1,1,1};
        SoundSetExplosion[] = {"","",""};
        hit = 0;
        indirectHit=1;
        indirectHitRange=2;
        timeToLive = 2;
        fuseDistance = 0;
        model="none.p3d";
    };
};
class CfgMagazines{
    class 30Rnd_762x39_AK12_Mag_F;
    class STB86_Flamer_Canister : 30Rnd_762x39_AK12_Mag_F{
        count=300;
        ammo="STB86_Flame";
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
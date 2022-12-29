class CfgPatches{
    class STB86_Flamethrower{
        name = "86th STB Flamethrower";
		author = "AJ";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = { 
            "A3_Functions_F", 
            "ace_fire",
			"ace_medical_damage",
            "cba_settings",
            "cba_xeh_a3",
            "cba_main",
            "OPTRE_Weapons_M247H_Etilka"
        };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"STB86_Flamethrower"};
    };
};

class Mode_FullAuto;
class Mode_SemiAuto;
class CfgWeapons{
    class OPTRE_M247H_Etilka;

    class BaseSoundModeType;
    class STB86_Flamethrower : OPTRE_M247H_Etilka {
        baseWeapon = "STB86_Flamethrower";
        displayName = "[86th] Flamethrower";
        descriptionShort = "A FUCKING FLAMETHROWER";
        author = "AJ";
        magazines[] = {"STB86_Flamethrower_Canister"};
		modes[]={"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\STB86_Flamethrower\Audio\FlamethrowerClose1.wav",
					1,
					1,
					2000
				};
                begin2[]=
				{
					"\STB86_Flamethrower\Audio\FlamethrowerClose2.wav",
					1,
					1,
					2000
				};
                begin3[]=
				{
					"\STB86_Flamethrower\Audio\FlamethrowerClose3.wav",
					1,
					1,
					2000
				};
                begin4[]=
				{
					"\STB86_Flamethrower\Audio\FlamethrowerClose4.wav",
					1,
					1,
					2000
				};

				soundBegin[]=
				{
					"begin1",0.1,"begin2", 0.1, "begin3", 0.1, "begin4", 0.1
				};
                class SoundTails
				{
				    class TailInterior
					{
						sound[]=
						{
							"",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};

			};
			reloadTime=0.075;
			dispersion=0.00085;
			recoil="recoil_auto_trg";
			recoilProne="recoil_auto_prone_trg";
			minRange=5;
			minRangeProbab=0.3;
			midRange=40;
			midRangeProbab=0.7;
			maxRange=80;
			maxRangeProbab=0.05;
		};
		class EventHandlers
		{
			fired = "0 = [(_this select 1), (_this select 6)] spawn STB86_Flamethrower_fnc_Flamethrower_EH";
		};
    };
};

class CfgAmmo{
    class B_762x39_Ball_F;
    class STB86_Flame : B_762x39_Ball_F{
		ACE_damageType = "fire";
        typicalSpeed = 50;
        timeToLive = 3;
        deflecting = 1;
        affectedByWind = true;
        tracerColorR[] = {0,0,0,0};
        lightColor[] = {217, 88, 0, 0.8};
        triggerTime = 0;
		hit = 25;
    };
};
class CfgMagazines{
    class OPTRE_200Rnd_127x99_M247H_Etilka_Ball;
    class STB86_Flamethrower_Canister : OPTRE_200Rnd_127x99_M247H_Etilka_Ball{
        count=300;
        ammo="STB86_Flame";
        displayName = "Fuel Canister";
        initSpeed = 50;
    };

};

class CfgFunctions{
    class STB86_Flamethrower{
        class functions{
			file = "\STB86_Flamethrower\Scripts";
            class Flamethrower_EH{};
        };
    };
};

class Extended_PreInit_EventHandlers {
    class STB86_Flamethrower_XEH_PreInit{
	    init = "call compile preprocessFileLineNumbers '\STB86_Flamethrower\XEH_preInit.sqf'";
    };
};
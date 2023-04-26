class CfgPatches{
    class STB86_Flamethrower_cfg{
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
		magazineWell[] = {};
		modes[]={"FullAuto"};
		dispersion = .002;
        initSpeed = 250;
		STB86_Flamethrower_Speed = 25;
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
			minRange=2;
			minRangeProbab=1;
			midRange=10;
			midRangeProbab=0.97;
			maxRange=30;
			maxRangeProbab=0.5;
		};
		class EventHandlers
		{
			fired = "0 = [(_this select 1), (_this select 6), (_this select 4)] spawn STB86_Flamethrower_fnc_Flamethrower_EH";
		};
    };
	class STB86_Vehicle_Flamethrower : STB86_Flamethrower {
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		STB86_Flamethrower_Speed = 45;
		displayName = "Flamethrower";
		baseWeapon = "STB86_Vehicle_Flamethrower";
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

class CfgAmmo{
    class B_762x39_Ball_F;
    class STB86_Flame : B_762x39_Ball_F{
		ACE_damageType = "STB86_flamethrower";
        typicalSpeed = 250;
        timeToLive = 1;
        deflecting = 1;
        affectedByWind = true;
		coefGravity = 0.1;
        lightColor[] = {217, 88, 0, 0.8};
        triggerTime = 0;
		hit = 5;
    };
};
class CfgMagazines{
    class OPTRE_200Rnd_127x99_M247H_Etilka_Ball;
	class 30Rnd_762x39_AK12_Mag_F;
    class STB86_Flamethrower_Canister : OPTRE_200Rnd_127x99_M247H_Etilka_Ball{
        count=300;
        ammo="STB86_Flame";
        displayName = "Fuel Canister";
        initSpeed = 250;
		tracersEvery = 0;
		lastRoundsTracer=0;
    };
};

class CfgFunctions{
    class STB86_Flamethrower{
        class functions{
			file = "\STB86_Flamethrower\Scripts";
            class Flamethrower_EH{};
			class Flamethrower_WH{};
        };
    };
};

class Extended_PreInit_EventHandlers {
    class STB86_Flamethrower_XEH_PreInit{
	    init = "call compile preprocessFileLineNumbers '\STB86_Flamethrower\XEH_preInit.sqf'";
    };
};


class ACE_Medical_Injuries {

	class wounds {
        // each sub-class defines a valid wound type
		class ThermalBurn;
        class STB86_Melt : ThermalBurn {
			pain=0.01;
		};
		class STB86_Char : STB86_Melt {
			pain = 0.42;
			bleeding = 0.2;
		};
    };

    class damageTypes {
		class woundHandlers;
        // each sub-class defines a valid damage type
        class STB86_flamethrower {
            // this is used to determine how many wounds to produce - see explanation above
            thresholds[] = {{0.9, 2}, {0.5, 1}};
            // if 1, wounds are only applied to the most-damaged body part. if 0, wounds are applied to all damaged parts
            selectionSpecific = 1;
            // if 1, wounds do not produce blood spurts
            noBlood = 1;
            // one class for each type of wound this damage type is allowed to create
            // must match a wound type defined above
			class woundHandlers : woundHandlers {
				STB86_Medical_Flamethrower_WH = "STB86_Flamethrower_fnc_Flamethrower_WH"
			};

            class STB86_Melt {
                // used to determine the chance of producing this type of wound instead of another - see explanation above
                weighting[] = {{0.8, 2}, {0.5, 1}, {0.1, 0}};
            };
			class STB86_Char {
                // used to determine the chance of producing this type of wound instead of another - see explanation above
                weighting[] = {{0.7, 0}, {0.6, 2}, {0.3, 1}};
            };
			class ThermalBurn {
				weighting[] = {{0.2, 1}, {0.1, 0}};
			};
        };
    };

};
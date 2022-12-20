class CfgPatches
{
	class Squad_Tahoes
	{
		//General mod info
		author = "86th STB Modding Team";
		name = "86th Squad Tahoe";
		//unknown
		units[] = {
			"STB86_Test_Tahoe",
			"Command_Tahoe",
			"Firebrand_Tahoe",
			"Vandal_Tahoe",
			"Misfit_Tahoe"
		};
		//unknown
		weapons[] = {};
		//unknown
		requiredVersion = 0.1;
		//Dependancies for C++ style inheritence.
		//If building off of a mod piece it needs
		//to be listed here.
		requiredAddons[] = {}; //No dependencies since they are part of the aux mod. Requires Solib Tahoes
	};
};
class CfgVehicles {
	class Car;
	class Car_F : Car
	{
		class HitPoints /// we want to use hitpoints predefined for all cars
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class EventHandlers;
	};
	// This Tahoe is effectively a copy of the Base one from the mod. However, it calls different file paths for it's Physx, so that we can edit the Physx of the Tahoe. Based will ensue.
	/*
	* Changes:
	* Fire Resistance
	* Armor
	* Wheel Damage Coef
	* Fording Depth
	* Crash protection
	* Wheel Armor
	*/
	class Base_Tahoe : Car_F
	{
		model = "\Solib_Tahoe\Solib_Tahoe";  /// simple path to model
		picture = "\STB86_Vehicles\Squad_Tahoes\data\textures\logo.paa"; /// just some icon in command bar
		Icon = "\STB86_Vehicles\Squad_Tahoes\data\textures\logo.paa"; /// icon in map

		displayName = "Test Car"; /// displayed in Editor



		hiddenSelections[] = { "camo1","plate_text" }; ///we want to allow changing the color of this selection

		terrainCoef = 1.5; 	/// different surface affects this car more, stick to tarmac
		turnCoef = 2.5; 	/// should match the wheel turn radius
		precision = 10; 	/// how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach to way
		brakeDistance = 3.0; 	/// how many internal waypoints should the AI plan braking in advance
		acceleration = 15; 	/// how fast acceleration does the AI think the car has

		fireResistance = 8; 	/// lesser protection against fire than tanks
		armor = 90; 	/// just some protection against missiles, collisions and explosions
		cost = 50000; /// how likely is the enemy going to target this vehicle

		transportMaxBackpacks = 4; /// just some backpacks fit the trunk by default
		transportSoldier = 9; /// number of cargo except driver

		/// some values from parent class to show how to set them up
		wheelDamageRadiusCoef = 0.9; 			/// for precision tweaking of damaged wheel size
		wheelDestroyRadiusCoef = 0.7;			/// for tweaking of rims size to fit ground
		maxFordingDepth = 1;			/// how high water would damage the engine of the car
		waterResistance = 1;			/// if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
		crewCrashProtection = 0.1;			/// multiplier of damage to crew of the vehicle => low number means better protection
		driverLeftHandAnimName = "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)

		/*class TransportItems /// some first aid kits in trunk according to safety regulations
		{
			item_xx(FirstAidKit,4);
		};*/

		class Turrets {}; /// doesn't have any gunner nor commander
		class HitPoints : HitPoints
		{
			class HitLFWheel : HitLFWheel { armor = 0.9; passThrough = 0; }; /// it is easier to destroy wheels than hull of the vehicle
			class HitLF2Wheel : HitLF2Wheel { armor = 0.9; passThrough = 0; };

			class HitRFWheel : HitRFWheel { armor = 0.9; passThrough = 0; };
			class HitRF2Wheel : HitRF2Wheel { armor = 0.9; passThrough = 0; };

			class HitFuel { armor = 1; material = -1; name = "fueltank"; visual = ""; passThrough = 0.2; }; /// correct points for fuel tank, some of the damage is aFRLied to the whole
			class HitEngine { armor = 1; material = -1; name = "engine"; visual = ""; passThrough = 0.2; };
			class HitBody : HitBody { name = "body"; visual = "camo1"; passThrough = .5; }; /// all damage to the hull is aFRLied to total damage

			class HitGlass1 : HitGlass1 { armor = 0.25; }; /// it is pretty easy to puncture the glass but not so easy to remove it
			class HitGlass2 : HitGlass2 { armor = 0.25; };
			class HitGlass3 : HitGlass3 { armor = 0.25; };
			class HitGlass4 : HitGlass4 { armor = 0.25; };
		};

		driverAction = driver_low01; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
		cargoAction[] = 
		{
			"passenger_low01",
			"passenger_low01",
			"passenger_low01",
			"passenger_low01",
			"passenger_low01",
			"passenger_low01",
			"passenger_low01",
			"passenger_low01",
			"passenger_low01"
		}; // Vic has 4 passenger seats by default. Other seats are invulnerable and invisible.
		getInAction = GetInLow; 		/// how does driver look while getting in
		getOutAction = GetOutLow; 		/// and out
		cargoGetInAction[] = { "GetInLow" }; 	/// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
		cargoGetOutAction[] = { "GetOutLow" }; 	/// that means all use the same in this case

	#include "\Solib_Tahoe\sounds.hpp"	/// sounds are in a separate file to make this one simple
	#include "\Solib_Tahoe\pip.hpp"		/// PiPs are in a separate file to make this one simple
	#include "\STB86_Vehicles\Squad_Tahoes\physx.hpp"	/// PhysX settings are in a separate file to make this one simple

		class PlayerSteeringCoefficients /// steering sensitivity configuration
		{
			turnIncreaseConst = 0.3; // basic sensitivity value, higher value = faster steering
			turnIncreaseLinear = 1.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			turnDecreaseConst = 5.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear = 3.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			maxTurnHundred = 0.7; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};

		/// memory points where do tracks of the wheel appear
		// front left track, left offset
		memoryPointTrackFLL = "TrackFLL";
		// front left track, right offset
		memoryPointTrackFLR = "TrackFLR";
		// back left track, left offset
		memoryPointTrackBLL = "TrackBLL";
		// back left track, right offset
		memoryPointTrackBLR = "TrackBLR";
		// front right track, left offset
		memoryPointTrackFRL = "TrackFRL";
		// front right track, right offset
		memoryPointTrackFRR = "TrackFRR";
		// back right track, left offset
		memoryPointTrackBRL = "TrackBRL";
		// back right track, right offset
		memoryPointTrackBRR = "TrackBRR";

		class Damage /// damage changes material in specific places (visual in hitPoint)
		{
			tex[] = {};
			mat[] =
			{
				"A3\data_f\glass_veh_int.rvmat", 		/// material mapped in model
				"A3\data_f\Glass_veh_damage.rvmat", 	/// changes to this one once damage of the part reaches 0.5
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes to this one once damage of the part reaches 1

				"A3\data_f\glass_veh.rvmat",			/// another material
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes into different ones
				"A3\data_f\Glass_veh_damage.rvmat"
			};
		};

		class Exhausts /// specific exhaust effects for the car
		{
			class Exhaust1 /// the car has two exhausts - each on one side
			{
				position = "exhaust";  		/// name of initial memory point
				direction = "exhaust_dir";	/// name of memory point for exhaust direction
				effect = "ExhaustsEffect";	/// what particle effect is it going to use
			};

			class Exhaust2
			{
				position = "exhaust2_pos";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffect";
			};
		};

		class Reflectors	/// only front lights are considered to be reflectors to save CPU
		{
			class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
			{
				color[] = { 1900, 1800, 1700 };		/// approximate colour of standard lights
				ambient[] = { 5, 5, 5 };				/// nearly a white one
				position = "LightCarHeadL01";		/// memory point for start of the light and flare
				direction = "LightCarHeadL01_end";	/// memory point for the light direction
				hitpoint = "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection = "Light_L";				/// selection for artificial glow around the bulb, not much used any more
				size = 1;						/// size of the light point seen from distance
				innerAngle = 100;						/// angle of full light
				outerAngle = 179;						/// angle of some light
				coneFadeCoef = 10;						/// attenuation of light between the above angles
				intensity = 1;						/// strength of the light
				useFlare = true;						/// does the light use flare?
				dayLight = false;					/// switching light off during day saves CPU a lot
				flareSize = 1.0;						/// how big is the flare

				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd = 60;		/// this allows adding more lights into scene
				};
			};

			class LightCarHeadL02 : LightCarHeadL01
			{
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				FlareSize = 0.5;						/// side bulbs aren't that strong
			};

			class LightCarHeadR01 : LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};

			class LightCarHeadR02 : LightCarHeadR01
			{
				position = "LightCarHeadR02";
				direction = "LightCarHeadR02_end";
				FlareSize = 0.5;
			};

			class gyro1
			{
				color[] = { 2500, 0, 0 };
				ambient[] = { 5, 5, 5 };
				intensity = 1;
				size = 0.5;					/// size of the light point seen from distance
				innerAngle = 50;					/// angle of full light
				outerAngle = 100;					/// angle of some light
				coneFadeCoef = 4;					/// attenuation of light between the above angles

				position = "gyropos1";		/// memory point for start of the light and flare
				direction = "gyrodir1";		/// memory point for the light direction
				hitpoint = "Light_R";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection = "gyro1";		/// selection for artificial glow around the bulb, not much used any more

				useFlare = true;
				flareSize = 1.0;
				flareMaxDistance = 200;
				activeLight = false;					/// engine counts this one as an active light into limit of lights
				dayLight = false;				/// it doesn't shine during the day
				drawLight = true;

				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.3;

					hardLimitStart = 25;
					hardLimitEnd = 35;
				};
			};
			class gyro2 : gyro1
			{
				position = "gyropos2";
				direction = "gyrodir2";
			};
			class gyro3 : gyro1
			{
				position = "gyropos3";
				direction = "gyrodir3";
			};
			class gyro4 : gyro1
			{
				position = "gyropos4";
				direction = "gyrodir4";
			};
			class gyro5
			{
				color[] = { 0, 0, 2500 };
				ambient[] = { 0, 0, 2500 };
				intensity = 1;
				size = 0.5;					/// size of the light point seen from distance
				innerAngle = 50;					/// angle of full light
				outerAngle = 100;					/// angle of some light
				coneFadeCoef = 4;					/// attenuation of light between the above angles

				position = "gyropos5";		/// memory point for start of the light and flare
				direction = "gyrodir5";		/// memory point for the light direction
				hitpoint = "Light_R";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection = "gyro2";		/// selection for artificial glow around the bulb, not much used any more

				useFlare = true;
				flareSize = 1.0;
				flareMaxDistance = 200;
				activeLight = true;					/// engine counts this one as an active light into limit of lights
				dayLight = true;				/// it doesn't shine during the day
				drawLight = true;

				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.3;

					hardLimitStart = 25;
					hardLimitEnd = 35;
				};

			};
			class gyro6 : gyro5
			{
				position = "gyropos6";
				direction = "gyrodir6";
			};
			class gyro7 : gyro5
			{
				position = "gyropos7";
				direction = "gyrodir7";
			};
			class gyro8 : gyro5
			{
				position = "gyropos8";
				direction = "gyrodir8";

			};


		};
		class ACE_SelfActions;
		aggregateReflectors[] = { {"gyro1"},{"gyro2"},{"gyro3"},{"gyro4"},{"gyro5"},{"gyro6"},{"gyro7"},{"gyro8"},{"LightCarHeadL01", "LightCarHeadL02"}, {"LightCarHeadR01", "LightCarHeadR02"} }; /// aggregating reflectors helps the engine a lot
		/// it might be even good to aggregate all lights into one source as it is done for most of the cars

		class EventHandlers : EventHandlers
		{
			// (_this select 0): the vehicle
			// """" Random texture source (pick one from the property textureList[])
			// []: randomize the animation sources (accordingly to the property animationList[])
			// false: Don't change the mass even if an animation source has a defined mass
			//init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};

		// Must be kept as fail-safe in case of issue with the function
		hiddenSelectionsTextures[] = { "\A3\Weapons_F\Data\placeholder_co.paa" };	 /// we could use any texture to cover the car
/*
		class MFD /// Clocks on the car board
		{
			class ClockHUD
			{
				#include "cfgHUD.hpp"
			};
		};*/

	};


	
	class STB86_Test_Tahoe : Base_Tahoe  //Inherits from the base Solib Tahoe
{	
		//Adds Self Destruct
		/*class UserActions {
			class Self_Destruct {
				displayName = "<t color='#FF0000'>Self Destruct</t>";
				displayNameDefault = "Press The Button";
				priority = 10;
				radius = 2; // A too small radius might cause the action to not be visible
				position = "camera";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "alive this && (driver (this)) isEqualTo player;"; //Player alive and in vic
				statement = "0 = _this execVM '\STB86_Vehicles\Squad_Tahoes\data\scripts\selfDestruct.sqf'";
			};
		};*/
		
		class ACE_SelfActions : ACE_SelfActions {
			class Self_Destruct {
				displayName = "<t color='#FF0000'>Self Destruct</t>";
				displayNameDefault = "Press The Button";
				priority = 2.5;
				hideOnUse = 1;
				runOnHover = 0;
				condition = "(player == driver this) AND (alive this)"; //Player alive and in vic
				statement = "0 = _this spawn STB86_fnc_selfDestruct";
			};
		};

		//Adds MG
		class EventHandlers : EventHandlers
		{
			init = "0 = _this spawn STB86_fnc_attachMgTahoe"; //7/16/22
		};





		forceInGarage = 1; 	// This will force the garage to display this vehicle, otherwise it won't because it shares the same p3d as the previous
		displayName = "Solib Tahoe Test";
		scope = 1; 			/// makes the car visible in editor
		scopeCurator = 1;		// scope 2 means it's available in Zeus mode (0 means hidden)
		crew = "C_man_1"; 	/// we need someone to fit into the car
		side = 1; 			
		faction = "STB86_Faction";	
		// the texture source used will be the green one, whatever it probability because it's the only one defined here
		hiddenSelectionsTextures[] =
		{
			"\STB86_Vehicles\Squad_Tahoes\data\skins\matrix.paa",
			"\Solib_VW_SciroccoGT_09_hq\data\texture\nomer.paa"
		};
	};

	//Sinder test tahoe
	class Command_Tahoe : STB86_Test_Tahoe
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Command Tahoe";
		hiddenSelectionsTextures[] =
		{
			"\STB86_Vehicles\Squad_Tahoes\data\skins\command_Tahoe.paa",
			"\Solib_VW_SciroccoGT_09_hq\data\texture\nomer.paa"
		};
	}
	class Firebrand_Tahoe : Command_Tahoe
	{
		displayName = "Firebrand Tahoe";
		hiddenSelectionsTextures[] =
		{
			"\STB86_Vehicles\Squad_Tahoes\data\skins\Firebrand_Tahoe.paa",
			"\Solib_VW_SciroccoGT_09_hq\data\texture\nomer.paa"
		};
	}
	class Vandal_Tahoe : Command_Tahoe
	{
		displayName = "Vandal Tahoe";
		hiddenSelectionsTextures[] =
		{
			"\STB86_Vehicles\Squad_Tahoes\data\skins\vandal_Tahoe.paa",
			"\Solib_VW_SciroccoGT_09_hq\data\texture\nomer.paa"
		};
	}
	class Misfit_Tahoe : Command_Tahoe
	{
		displayName = "Misfit Tahoe";
		hiddenSelectionsTextures[] =
		{
			"\STB86_Vehicles\Squad_Tahoes\data\skins\misfit_Tahoe.paa",
			"\Solib_VW_SciroccoGT_09_hq\data\texture\nomer.paa"
		};
	}
};
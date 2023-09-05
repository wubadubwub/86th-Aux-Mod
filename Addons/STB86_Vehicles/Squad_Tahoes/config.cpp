class CfgPatches
{
	class Squad_Tahoes
	{
		//General mod info
		author = "86th STB Modding Team";
		name = "86th Squad Tahoe";
		//unknown
		units[] = {
			"STB86_TestTahoe",
			"STB86_CommandTahoe",
			"STB86_VandalTahoe",
			"STB86_MisfitTahoe",
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
	class Solib_Tahoe_black;
	class STB86_TestTahoe : Solib_Tahoe_black  {	

		class ACE_SelfActions {
			class STB86_SelfDestruct {
				displayName = "<t color='#FF0000'>Self Destruct</t>";
				displayNameDefault = "Press The Button";
				priority = 2.5;
				hideOnUse = 1;
				runOnHover = 0;
				condition = "(player == driver (_this select 0)) AND (alive (_this select 0))"; //Player alive and in vic
				statement = "[{createVehicle ['HelicopterExploSmall', ASLToAGL getPosASL _this];}, (_this select 0), 15] call CBA_fnc_waitAndExecute";
			};
		};
		//Adds MG
		class EventHandlers {
			init = "[_this] call STB86_fnc_attachMgTahoe"; //7/16/22
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
		cargoAction[] = {"passenger_low01","passenger_low01","passenger_low01","passenger_low01","passenger_low01","passenger_low01","passenger_low01","passenger_low01","passenger_low01",};
		transportSoldier = 9;
		#include "physx.hpp"
	};

	//Sinder test tahoe
	class STB86_CommandTahoe : STB86_TestTahoe {
		scope = 2;
		scopeCurator = 2;
		displayName = "Command Tahoe";
		hiddenSelectionsTextures[] =
		{
			"\STB86_Vehicles\Squad_Tahoes\data\skins\command_Tahoe.paa",
			"\Solib_VW_SciroccoGT_09_hq\data\texture\nomer.paa"
		};
	};
	class STB86_VandalTahoe : STB86_CommandTahoe {
		displayName = "Vandal Tahoe";
		hiddenSelectionsTextures[] =
		{
			"\STB86_Vehicles\Squad_Tahoes\data\skins\vandal_Tahoe.paa",
			"\Solib_VW_SciroccoGT_09_hq\data\texture\nomer.paa"
		};
	};
	class STB86_MisfitTahoe : STB86_CommandTahoe {
		displayName = "Misfit Tahoe";
		hiddenSelectionsTextures[] =
		{
			"\STB86_Vehicles\Squad_Tahoes\data\skins\misfit_Tahoe.paa",
			"\Solib_VW_SciroccoGT_09_hq\data\texture\nomer.paa"
		};
	};
};
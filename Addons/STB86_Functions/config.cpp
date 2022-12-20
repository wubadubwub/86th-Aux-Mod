class CfgPatches{
	class STB86_Functions {
		author = "AJ";
		name = "86th Function Library"; 
		units[] = {};
		weapons[] = {};
		requiredAddons[] = { "zen_common"};
		//If ya add shit just don't break anything lol
	};
}

class CfgFunctions {

	class STB86{
		
		class functions {
			file = "\STB86_Functions\functions";
			class retrograde {};
			class orbitalDeploy {};
			class cinematic_bars{};
			class cinematic_bars_bridge{};
			class cinematic_bars_server{};
		};
		class veh_scripts {
			file = "\STB86_Functions\functions\Vehicle_Scripts";
			class attachMgTahoe;
			class selfDestruct;
		};
	};
};

#include "cfgRemoteExec.hpp"
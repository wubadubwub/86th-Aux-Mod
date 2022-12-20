class CfgPatches {
	class STB86_Trenches {
		name = "STB86_Trenches";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.02;
		requiredAddons[] = {
			"ace_trenches"
		};
		authors[] = {
			"AJ"
		};
	};
};
#include "CBA_Handlers.hpp"
class CfgVehicles {
	class Man;
	class CAManBase : Man {
		class ACE_SelfActions{
			class ACE_Equipment {
				class STB86_Trenches {
					displayName = "Dig";
					condition = "_player call STB86_Trenches_Functions_fnc_canDig";
					showDisabled = 0;
					priority = 3;
					exceptions[] =
					{
						"notOnMap",
						"isNotInside",
						"isNotSitting"
					};
					statement = "_player call STB86_Trenches_Functions_fnc_trenchDig";
				};
			};
		};
	};
};
#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class STB86_Trenches_Functions {
		author = "AJ";
		name = "86th Trenches Functions";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
		};
		//If ya add shit just don't break anything lol
	};
};

class CfgFunctions {
	class STB86_Trenches_Functions {
		class functions {
			file = "STB86_Trenches\trenches_functions\scripts";
			class canDig;
			class trenchDig;
			class serverDig;
		};
	};
};

class cfgRemoteExec{
	class Functions{
		class STB86_Trenches_Functions_fnc_serverDig {allowedTargets = 0; jip=1;}
	};
};
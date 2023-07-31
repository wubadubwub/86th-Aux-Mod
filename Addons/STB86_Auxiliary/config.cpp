//**********************************************
//*****        Mod information             *****
//**********************************************

#include "defines.hpp"

class CfgPatches
{
	class STB86_Auxiliary
	{
		//General mod info
		author = AUTHOR;
		name = "86th Auxiliary skins";
		//unknown
		units[] = {
			"STB86_Combat_Unit",
		};
		//unknown
		weapons[] = {};
		//unknown
		requiredVersion = 0.1;
		//Dependancies for C++ style inheritence.
		//If building off of a mod piece it needs
		//to be listed here.
		requiredAddons[] = {
			"OPTRE_Core",
			"OPTRE_Vehicles",
			"OPTRE_UNSC_Units",
			"OPTRE_Weapons",
			"MA_Armor",
		};
	};
};

class CfgVehicles
{
	#include "units.hpp"
	#include "backpacks.hpp"
};


class CfgWeapons {
	#include "helmets.hpp"
	#include "vests.hpp"
	#include "uniforms.hpp"
};

class cfgFactionClasses
{
    class STB86_Faction
    {
        displayName = "86th STB";
        scope = 2;
        scopeCurator = 2;
        priority = 3;
        side = 1;
    };
    class STB86_Black_Hand
    {
        displayName = "Black Hand";
        scope = 2;
        scopeCurator = 2;
        priority = 3;
        side = 0;
    };
};
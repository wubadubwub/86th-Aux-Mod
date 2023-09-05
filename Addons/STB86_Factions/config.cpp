#include "defines.hpp"
class CfgPatches
{
	class STB86_Factions
	{
		//General mod info
		author = AUHTOR;
		name = "86th Factions";
		//unknown
		units[] = {};
		//unknown
		weapons[] = {};
		//unknown
		requiredVersion = 0.1;
		//Dependancies for C++ style inheritence.
		//If building off of a mod piece it needs
		//to be listed here.
		requiredAddons[] = {
            "OPTRE_ACE_Compat",
        };
	};
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

class CfgEditorSubcategories
{
	class STB86_BH_SubCat // Category class, you point to it in editorSubcategory property
	{
		displayName = "Infantry"; // Name visible in the list
	};
	class STB86_BH_Veh_SubCat // Category class, you point to it in editorSubcategory property
	{
		displayName = "Vehicles"; // Name visible in the list
	};
    	class STB86_BH_CH_SubCat // Category class, you point to it in editorSubcategory property
	{
		displayName = "The Chosen"; // Name visible in the list
	};
	class STB86_BH_CH_Veh_SubCat // Category class, you point to it in editorSubcategory property
	{
		displayName = "TC (Vehicles)"; // Name visible in the list
	};
	class STB86_BH_CH_Heli_SubCat
	{
		displayName = "TC (Helis)";
	};
	class STB86_BH_CH_Jet_SubCat
	{
		displayName = "TC (Jets)";
	};
	class STB86_BH_CH_UAV_SubCat
	{
		displayName = "TC (UAVs)";
	};
};

#include "CfgFunctions.hpp"
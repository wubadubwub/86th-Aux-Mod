class CfgPatches{
    class STB86_Pelicat {
        // Meta information for editor
        addonRootClass = "STB86_Auxiliary";
		requiredVersion = 1.60;
		requiredAddons[] = {};
		units[] = {
            "STB86_PelicatEarLeft",
            "STB86_PelicatEarRight",
            "STB86_Pelicat",
        };
		weapons[] = {};
    };
};
class CfgFunctions {

	class STB86_Pelicat {
        class functions {
        file = "STB86_Vehicles\Pelicat";
        class PelicatInit{};

        };
    };
};
class CfgVehicles {
    class Land_Can_Rusty_F;
    class STB86_PelicatEarLeft : Land_Can_Rusty_F {
        displayName = "Pelicat Ear Left";
        model = "STB86_Vehicles\Pelicat\EarLeft.p3d";
        hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Vehicles\Pelicat\PelicatEars.paa"
		};
        class ItemInfo {
            hiddenSelections[]=
		    {
			    "camo"
		    };
        };
    };
    class STB86_PelicatEarRight : Land_Can_Rusty_F {
        displayName = "Pelicat Ear Right";
        model = "STB86_Vehicles\Pelicat\EarRight.p3d";
    };
    class OPTRE_Pelican_unarmed;
    class STB86_Pelicat : OPTRE_Pelican_unarmed {
        displayName = "Pelicat";
        faction = "STB86_Faction";	
	    class EventHandlers {
            class STB86_EventHandlers {
    	    	init = "0 = _this spawn STB86_Pelicat_fnc_PelicatInit";
            };
            class OPTRE_EventHandlers
            {
            	killed="{ detach _x; _x setVelocity [0,0,-1]; } forEach ((_this select 0) getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]);";
            }; // This is the OPTRE event handler. I do not understand how to do external nested skeletons. 
	    };
        hiddenSelections[] = {"camo1","camo3","camo2", "clan","clan_text","insignia","attach_gun"};
        hiddenSelectionsTextures[] = {
            "STB86_Vehicles\Pelicat\Pelicat.paa",
            "",
            "STB86_Vehicles\Pelicat\PelicatInterior.paa",
        };
    };
};
class CfgPatches{
    class STB86_DropVehicle {
        // Meta information for editor
		name = "STB86 Drop Vehicle";
        author = "AJ";
		requiredVersion = 1.60;
		requiredAddons[] = {};
		units[] = {
            "STB86_DropVehicle",
        };
		weapons[] = {};
    };
};

class CfgVehicles {
    class Land_Can_Rusty_F;
    class STB86_DropVehicle : Land_Can_Rusty_F {
        displayName = "Drop Vehicle";
        slingLoadCargoMemoryPoints[] = {"slingLoad0"};
        model = "STB86_Vehicles\DropVehicle\Data\DropVehicle.p3d";
    };
};
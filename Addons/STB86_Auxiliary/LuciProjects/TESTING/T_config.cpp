//**********************************************
//*****        Mod information             *****
//**********************************************

 class CfgPatches
{
    class Test_Bot_Uniform
    {
        version = "1.1.3";
        units[] = {};
        weapons[] = {};
        requiredVersion = "1.1.3";
        requiredAddons[] = {};
    };
};
class CfgVehicles
{

        class B_Soldier_base_F;
        class Test_Bot_Uniform : B_Soldier_base_F
    {
        scope = 2;
        author = "Luci";
        model = "STB86_Auxiliary\LuciProjects\TESTING\leg.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};

};
};

class cfgWeapons
{
  class UniformItem;
    class Uniform_Base;

    class Test_Bot_Uniform : Uniform_Base
    {
        scope = 2;
        author = "Luci";
        displayName = "Test_Bot";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "Test_Bot_Uniform";
            containerClass = "Supply40";
            mass = 1;
            allowedSlots[] = {"701","801","901"};
            armor = 0;
        };
    };
};




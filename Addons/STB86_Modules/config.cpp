//https://community.bistudio.com/wiki/Modules
/*
Author: AJ
Purpose: Suck my dick
*/

class CfgPatches
{
	class STB6_Modules
	{
		units[] = { 
			"STB86_test_Function",
			"STB86_Orbital_Deploy_Module",
			"STB86_Cinematic_Borders_Module",
			"STB86_Penis_Module",
			"STB86_Kill_Switch",
			 };
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F" };
	};
};

//Creates new faction for game logic
class CfgFactionClasses
{
	class  STB86_Modules_Faction
	{
		displayName = "86th Functions";
		scope = 2;
		scopeCurator = 2;
		priority = 3;
		side = 7;
	};
};

class CfgVehicles //Because everything is a fucking vehicle GOD FUCKING DMAnit arma AUSBNDEIYUAGBWDIU
{
	class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;					// Default edit box (i.e., text input field)
			class Combo;				// Default combo box (i.e., drop-down menu)
			class Checkbox;				// Default checkbox (returned value is Boolean)
			class CheckboxNumber;		// Default checkbox (returned value is Number)
			class ModuleDescription;	// Module description
			class Units;				// Selection of units on which the module is applied
		};
		// Description base classes, for more information see below
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class STB86_test_Function : Module_F
	{
		scope = 0; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 0; //Zeus Visibility <3 monky
		displayName = "86th Test"; // Name displayed in the menu
		/*icon = "";  //Icon path// */
		category = "STB86_Modules_Faction";

		function = "STB86_fnc_test";

		functionPriority = 1; // Lower number Executes first

		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 1;

		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
		isDisposable = 1;
		// 1 to run init function in Eden Editor as well
		is3DEN = 0;

		// Menu displayed when the module is placed or double-clicked on by Zeus
		curatorInfoType = "";

		class Attributes : AttributesBase
		{
			//Inherit from classes in AttributesBase, This is how you create a menu
		};
		class ModuleDescription : ModuleDescription 
		{
		};
	};
	class STB86_Orbital_Deploy_Module : Module_F{
		scope = 1; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2; //Zeus Visibility <3 monky
		displayName = "86th Orbital Tahoe "; // Name displayed in the menu
		/*icon = "";  //Icon path// */
		category = "STB86_Modules_Faction";

		function = "STB86_fnc_orbital_deploy";

		functionPriority = 1; // Lower number Executes first

		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 1;

		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
		isDisposable = 1;
		// 1 to run init function in Eden Editor as well
		is3DEN = 0;

		// Menu displayed when the module is placed or double-clicked on by Zeus
		curatorInfoType = "";

		class Attributes : AttributesBase
		{
			//Used in conjunction with curatorInfoType when using default arma GUI creators. They suck ass
		};
		class ModuleDescription : ModuleDescription
		{
		};
	};
	class STB86_Cinematic_Borders_Module : Module_F {
		scope = 1; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2; //Zeus Visibility <3 monky
		displayName = "Cinematic Bars"; // Name displayed in the menu
		/*icon = "";  //Icon path// */
		category = "STB86_Modules_Faction";

		function = "STB86_fnc_cinematic_bars";

		functionPriority = 1; // Lower number Executes first

		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 1;

		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 1;
		// 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
		isDisposable = 1;
		// 1 to run init function in Eden Editor as well
		is3DEN = 0;

		// Menu displayed when the module is placed or double-clicked on by Zeus
		curatorInfoType = "";

		class Attributes : AttributesBase
		{
			//Used in conjunction with curatorInfoType when using default arma GUI creators. They suck ass
		};
		class ModuleDescription : ModuleDescription
		{
		};
	};
	class STB86_Penis_Module : Module_F{
		scope = 1; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2; //Zeus Visibility <3 monky
		displayName = "Penis"; // Name displayed in the menu
		/*icon = "";  //Icon path// */
		category = "STB86_Modules_Faction";

		function = "STB86_fnc_penis";

		functionPriority = 1; // Lower number Executes first

		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 1;

		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
		isDisposable = 1;
		// 1 to run init function in Eden Editor as well
		is3DEN = 0;

		// Menu displayed when the module is placed or double-clicked on by Zeus
		curatorInfoType = "";

		class Attributes : AttributesBase
		{
			//Used in conjunction with curatorInfoType when using default arma GUI creators. They suck ass
		};
		class ModuleDescription : ModuleDescription
		{
		};
	};
	class STB86_Kill_Switch : Module_F {
		curatorCanAttach = 1;
		scope = 1; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2; //Zeus Visibility <3 monky
		displayName = "Kill Switch"; // Name displayed in the menu
		/*icon = "";  //Icon path// */
		category = "STB86_Modules_Faction";

		function = "STB86_Factions_fnc_killSwitch";

		functionPriority = 1; // Lower number Executes first

		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 1;

		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
		isDisposable = 1;
		// 1 to run init function in Eden Editor as well
		is3DEN = 0;

		// Menu displayed when the module is placed or double-clicked on by Zeus
		curatorInfoType = "";

		class Attributes : AttributesBase
		{
			//Used in conjunction with curatorInfoType when using default arma GUI creators. They suck ass
		};
		class ModuleDescription : ModuleDescription
		{
		};
	};
};
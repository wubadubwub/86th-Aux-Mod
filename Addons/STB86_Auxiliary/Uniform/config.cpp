//**********************************************
//*****        Mod information             *****
//**********************************************

class CfgPatches
{
	class STB86_Uniform
	{
		//General mod info
		author = "86th STB Modding Team";
		name = "86th Auxiliary skins";
		//unknown
		units[] = 
		{
			"STB86_Battleuniform_v"
		};
		weapons[] = 
		{
			"STB86_Plated_Uniform"
		};
		
		requiredVersion = 0.1;
		//Dependancies for C++ style inheritence.
		//If building off of a mod piece it needs
		//to be listed here.
		requiredAddons[] = {
			"OPTRE_Core",
			"OPTRE_Vehicles",
			"OPTRE_UNSC_Units",
			"OPTRE_Weapons",
		};
	};
};

class CfgVehicles
{
	class ContainerSupply;
	class ItemInfo;
	class O_V_Soldier_Viper_F;
	
	
	class STB86_Battlesuit : O_V_Soldier_Viper_F
	{
			author="Sinder";
			scope=2;
			displayName= "[86th] Battlesuit";
			camoflauge=0.555555; // This might be a thing, pulling it from a reference
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress3.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="STB86_Battleuniform";
			modelsides[]+={0,1,2,3,6};
			armor=15;
		};
	};
	class STB86_Battlesuit2 : STB86_Battlesuit
	{
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress4.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="STB86_Battleuniform2";
			modelsides[]+={0,1,2,3,6};
			armor=15;
		};
	};
	class STB86_Battlesuit3 : STB86_Battlesuit
	{
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress5.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="STB86_Battleuniform3";
			modelsides[]+={0,1,2,3,6};
			armor=15;
		};
	};
	class STB86_Battlesuit4 : STB86_Battlesuit
	{
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress6.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="STB86_Battleuniform4";
			modelsides[]+={0,1,2,3,6};
			armor=15;
		};
	};
	class STB86_Battlesuit5 : STB86_Battlesuit
	{
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress7.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="STB86_Battleuniform5";
			modelsides[]+={0,1,2,3,6};
			armor=15;
		};
	};
	class STB86_Battlesuit6 : STB86_Battlesuit
	{
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress8.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="STB86_Battleuniform6";
			modelsides[]+={0,1,2,3,6};
			armor=15;
		};
	};
	class STB86_Battlesuit7 : STB86_Battlesuit
	{
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress9.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="STB86_Battleuniform7";
			modelsides[]+={0,1,2,3,6};
			armor=15;
		};
	};
};

class cfgWeapons
{	
	class UniformItem;
	class U_O_V_Soldier_Viper_F;

	class STB86_Battlesuit_Dress: U_O_V_Soldier_Viper_F
	{
		author="Sinder";
		displayName="[86th] Plated Undersuit (Urban)";
		scope=2;
		uniformClass="STB86_Battlesuit";
		CBRN_protection = 1;
		class ItemInfo : UniformItem
		{
			containerClass = "Supply0";
			mass = 40;
			uniformModel = "";
			uniformClass="STB86_Battlesuit";
			armor=15;
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress3.paa"
		};
	};
	class STB86_Battlesuit_Dress2: STB86_Battlesuit_Dress
	{
		author="Sinder";
		displayName="[86th] Plated Undersuit (Black)";
		scope=2;
		uniformClass="STB86_Battlesuit2";
		CBRN_protection = 1;
		class ItemInfo : UniformItem
		{
			containerClass = "Supply0";
			mass = 40;
			uniformModel = "";
			uniformClass="STB86_Battlesuit2";
			armor=15;
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress4.paa"
		};
	};
	class STB86_Battlesuit_Dress3: STB86_Battlesuit_Dress
	{
		author="Sinder";
		displayName="[86th] Plated Undersuit (Flecktarn)";
		scope=2;
		uniformClass="STB86_Battlesuit3";
		CBRN_protection = 1;
		class ItemInfo : UniformItem
		{
			containerClass = "Supply0";
			mass = 40;
			uniformModel = "";
			uniformClass="STB86_Battlesuit3";
			armor=15;
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress5.paa"
		};
	};
	class STB86_Battlesuit_Dress4: STB86_Battlesuit_Dress
	{
		author="Sinder";
		displayName="[86th] Plated Undersuit (Arctic Splinter)";
		scope=2;
		uniformClass="STB86_Battlesuit4";
		CBRN_protection = 1;
		class ItemInfo : UniformItem
		{
			containerClass = "Supply0";
			mass = 40;
			uniformModel = "";
			uniformClass="STB86_Battlesuit4";
			armor=15;
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress6.paa"
		};
	};
	class STB86_Battlesuit_Dress5: STB86_Battlesuit_Dress
	{
		author="Sinder";
		displayName="[86th] Plated Undersuit (Night)";
		scope=2;
		uniformClass="STB86_Battlesuit5";
		CBRN_protection = 1;
		class ItemInfo : UniformItem
		{
			containerClass = "Supply0";
			mass = 40;
			uniformModel = "";
			uniformClass="STB86_Battlesuit5";
			armor=15;
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress7.paa"
		};
	};
	class STB86_Battlesuit_Dress6: STB86_Battlesuit_Dress
	{
		author="Sinder";
		displayName="[86th] Plated Undersuit (Urban Tigerstripe)";
		scope=2;
		uniformClass="STB86_Battlesuit6";
		CBRN_protection = 1;
		class ItemInfo : UniformItem
		{
			containerClass = "Supply0";
			mass = 40;
			uniformModel = "";
			uniformClass="STB86_Battlesuit6";
			armor=15;
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress8.paa"
		};
	};
	class STB86_Battlesuit_Dress7: STB86_Battlesuit_Dress
	{
		author="Sinder";
		displayName="[86th] Plated Undersuit (UNSC)";
		scope=2;
		uniformClass="STB86_Battlesuit7";
		CBRN_protection = 1;
		class ItemInfo : UniformItem
		{
			containerClass = "Supply0";
			mass = 40;
			uniformModel = "";
			uniformClass="STB86_Battlesuit7";
			armor=15;
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
		};
		hiddenSelectionsTextures[]=
		{
			"STB86_Auxiliary\Uniform\data\Battledress9.paa"
		};
	};
};
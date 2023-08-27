class BIS_AddonInfo
{
	author="Kuro Game";
	timepacked="1588339695";
};
class CfgPatches
{
	class PGR
	{
		version="1.0";
		units[]=
		{
			"Lucia_F"
		};
		weapons[]={};
		requiredVersion="1.0";
		requiredAddons[]=
		{

		};
	};
};
class CfgGlasses
{
	class G_Combat;
	class lucia_headphones: G_Combat
	{
		author="Kuro Game";
		dlc="PGR";
		scope=2;
		displayName="Lucia's Sheathe";
        picture ="\lucia\data\icon.paa";
		model="\lucia\luciasheathe\sheathe.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class Lucia_F: B_Soldier_base_F
	{
		_generalMacro="Lucia_F";
		displayname="Lucia (Crimson Abyss)";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Kuro Game";
		dlc="PGR";
		model="\lucia\luciabody\luciabody.p3d";
		identityTypes[]=
		{
			"lucia"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="lucia_uniform";
	};
};
class cfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class lucia_uniform: Uniform_Base
	{
		scope=2;
		author="Kuro Game";
		dlc="PGR";
		displayName="Lucia (Crimson Abyss)";
        picture ="\lucia\data\icon.paa";
		model="\lucia\luciabody\luciabody.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Lucia_F";
			containerClass="Supply40";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=0;
			uniformType="Neopren";
		};
	};
};
class Man;
class Custom;
class Default;
class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class Default;
		class luciaface: Default
		{
			author="Kuro Game";
			dlc="PGR";
			name="lucia";
			displayname="Lucia (Crimson Abyss)";
			texture="\lucia\data\body.paa";
			textureHL="\lucia\data\body.paa";
			head="luciahead";
			identityTypes[]=
			{
				"lucia"
			};
		};
	};
};
class CfgHeads
{
	class Default_A3;
	class luciahead: Default_A3
	{
		model="\lucia\luciahead\luciahead.p3d";
		selectionHeadWound="injury_head";
		selectionPersonality="personality";
	};
};
class CfgIdentities
{
	class lucia
	{
		name="lucia";
		face="luciaface";
		speaker="FemaleCV2CHI";
		pitch=1;
		glasses="none";
	};
};
class cfgMods
{
	author="Kuro Game";
	timepacked="1623150170";
};

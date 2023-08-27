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
			"Liv_F"
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
	class liv_headphones: G_Combat
	{
		author="Kuro Game";
		dlc="PGR";
		scope=2;
		displayName="Liv's Headphones";
        picture ="\liv\data\icon.paa";
		model="\liv\livheadphones\headphones.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class Liv_F: B_Soldier_base_F
	{
		_generalMacro="Liv_F";
		displayname="Liv";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Kuro Game";
		dlc="PGR";
		model="\liv\livbody\livbody.p3d";
		identityTypes[]=
		{
			"liv"
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
		uniformClass="liv_uniform";
	};
};
class cfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class liv_uniform: Uniform_Base
	{
		scope=2;
		author="Kuro Game";
		dlc="PGR";
		displayName="Liv";
        picture ="\liv\data\icon.paa";
		model="\liv\livbody\livbody.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Liv_F";
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
		class livface: Default
		{
			author="Kuro Game";
			dlc="PGR";
			name="liv";
			displayname="Liv";
			texture="\liv\data\body.paa";
			textureHL="\liv\data\body.paa";
			head="livhead";
			identityTypes[]=
			{
				"liv"
			};
		};
	};
};
class CfgHeads
{
	class Default_A3;
	class livhead: Default_A3
	{
		model="\liv\livhead\livhead.p3d";
		selectionHeadWound="injury_head";
		selectionPersonality="personality";
	};
};
class CfgIdentities
{
	class liv
	{
		name="liv";
		face="livface";
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

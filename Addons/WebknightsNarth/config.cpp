class CfgPatches
{
	class Webknights_Narth
	{
		name="Webknights_Narth";
		author="Webknight";
		requiredVersion=1.6;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Air_F_Beta",
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Soft_F"
		};
		units[]=
		{
			""
		};
		weapons[]=
		{
			"WBK_Narth_1"
		};
		magazines[]=
		{
			""
		};
		ammo[]=
		{
			""
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class ToolKit;
	class WBK_Genseed: ToolKit // Inheritor, we don't get rid of this but it's only for 40k, we cut oaths of healing though as they could be cut.
	{
		scope=1;
		author="WebKnights";
		displayName="Space Marine Gene-Seed";
		picture="\WebknightsNarth\GeneSeedIcon.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionShort="Gene-seed is the colloquial term used amongst the Adeptus Astartes for the genetic material that allows for the creation of the superhuman Space Marines.";
		class ItemInfo
		{
			mass=8; // Upping this as vitae Cannisters are very powerful for Ace Medical, Original value was 2
			uniformModel="\A3\weapons_F\ammo\mag_univ.p3d";
			type=620;
			allowedSlots[]={801,701,901};
			scope=2;
		};
	};
	class WBK_NarthBlood: WBK_Genseed // Vitae Cannisters, keeping class name the same for fear of it not working.
	{
		scope=2;
		displayName="RumbleDrug Formula"; // Original name was Vita Cannisters
		picture="\WebknightsNarth\VitaeCannisterIcon.paa"; // Picture Changed
		descriptionShort="An experimental Rumbledrug adaptation to treat seriously wounded soldiers and get them back into combat.";  // Edited description for Halo
	};
	class NVGoggles;
	class WBK_Narth_3: NVGoggles // there were WBK Narth 1s and 2s but I've elected to cut them as they were meant for space marines and would clog things, I've also removed their models from this version of the pbo.
	{
		descriptionShort="This tool mixes rumbledrug formula with biofoam to stabalize patients from the brink of death and bring them back.  It can also be used to heal ones self in situations"; // Description changed
		IMS_isNarthecium="true";
		displayName="Corpsman Rumbledrug Injector"; // Name changed
		picture="WebknightsNarth\NartheciumIcon.paa";
		visionMode[]=
		{
			"Normal" // I know webknight fixed this but I'm pleased with medics losing thermals for this tool.
		};
		thermalMode[]={2,3};
		modelOptics="-";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"WebknightsNarth\textures\SM_Narth_CO" // texture changed, kept sheet named the same due to laziness.
		};
		class ItemInfo
		{
			picture="WebknightsNarth\NartheciumIcon.paa";
			type=616;
			hmdType=0;
			uniformModel="WebknightsNarth\models\Narth3.p3d";
			modelOff="WebknightsNarth\models\Narth3.p3d";
			mass=4;
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"WebknightsNarth\textures\SM_Narth_CO"  // This texture has been changed.
			};
		};
	};
};
class CfgSounds  // untouched
{
	sounds[]={};
	class WBK_Narth_boop
	{
		name="WBK_Narth_boop";
		sound[]=
		{
			"\WebknightsNarth\sounds\boop.wav",
			1,
			1
		};
		titles[]={};
	};
	class WBK_Narth_heal_1
	{
		name="WBK_Narth_heal_1";
		sound[]=
		{
			"\WebknightsNarth\sounds\heal_1.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_heal_2
	{
		name="WBK_Narth_heal_2";
		sound[]=
		{
			"\WebknightsNarth\sounds\heal_2.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_north_hit
	{
		name="WBK_Narth_north_hit";
		sound[]=
		{
			"\WebknightsNarth\sounds\north_hit.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_north_hit_genseed
	{
		name="WBK_Narth_north_hit_genseed";
		sound[]=
		{
			"\WebknightsNarth\sounds\north_hit_genseed.ogg",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_sm_body_movement
	{
		name="WBK_Narth_sm_body_movement";
		sound[]=
		{
			"\WebknightsNarth\sounds\sm_body_movement.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_sm_movement_1
	{
		name="WBK_Narth_sm_movement_1";
		sound[]=
		{
			"\WebknightsNarth\sounds\sm_movement_1.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_sm_movement_2
	{
		name="WBK_Narth_sm_movement_2";
		sound[]=
		{
			"\WebknightsNarth\sounds\sm_movement_2.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_sm_movement_3
	{
		name="WBK_Narth_sm_movement_3";
		sound[]=
		{
			"\WebknightsNarth\sounds\sm_movement_3.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_switched_genseed
	{
		name="WBK_Narth_switched_genseed";
		sound[]=
		{
			"\WebknightsNarth\sounds\switched_genseed.ogg",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_switched_health
	{
		name="WBK_Narth_switched_health";
		sound[]=
		{
			"\WebknightsNarth\sounds\switched_health.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
};
class cfgMods
{
	author="WebKnight";
	timepacked="1665714084";
};

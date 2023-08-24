class CfgPatches
{
	class STB86_Medical
	{
		author = "86th STB Modding Team";
		name = "86th Auxiliary Medical";
		units[]= {};
		weapons[]=
		{
			"STB86_Trauma_Kit",
			"STB86_Biofoam_pack",
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"OPTRE_Core",
			"OPTRE_Vehicles",
			"OPTRE_UNSC_Units",
			"OPTRE_Weapons",
			"ace_medical_treatment"
		};
	};
};

#include "CfgFunctions.hpp"


class CfgWeapons
{
	class CBA_MiscItem_ItemInfo;
	class ItemInfo;
	class OPTRE_Biofoam;
	class STB86_Trauma_Kit: OPTRE_Biofoam
	{
		scope=2;
		author="Sinder&AJ";
		displayName="[86th] Trauma Kit";
		picture="STB86_Medical\icons\trauma_kit.paa";
		model="\OPTRE_Weapons\items\Medkit.p3d";
		descriptionShort = "An emergency Trauma kit for serious wounds.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=25;
		};
	};
	class STB86_Biofoam_pack: OPTRE_Biofoam
	{
		scope=2;
		author="Sinder&AJ";
		displayName="[86th] Biofoam Pack";
		picture="STB86_Medical\icons\biofoam.paa";
		model="\OPTRE_Weapons\items\Biofoam.p3d";
		descriptionShort = "A large pack of Biofoam for Medics.";
		class ItemInfo: ItemInfo
		{
			mass=30;
		};
	};
	class STB86_UMP45andUMP40_Pic: OPTRE_Biofoam
	{
		scope=2;
		author="Sinder&AJ";
		displayName="[86th] Picture of UMP45 and UMP40";
		picture="STB86_Medical\icons\UMP45UMP40.paa";
		model="\OPTRE_Weapons\items\Biofoam.p3d";
		descriptionShort = "A reminder of what we fight for.";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
};
class ACE_Medical_Treatment
{
	class Morphine;
	class BloodIV;
	class OPTRE_Biofoam;
	
	class IV // This class determines blood that goes in the person
	{
		class STB86_Trauma_Kit: BloodIV
		{
			volume=1500; // How many ML's of blood
		};
	};
	class Medication //This class determines what medicinal effects the treatment has
	{
		class STB86_Trauma_Kit: Morphine
		{
			painReduce=0.55; // How much does it reduce pain?
			hrIncreaseLow[]={0}; // Dict, how heart rate changes
			hrIncreaseNormal[]={0}; // Dict, how heart rate changes
			hrIncreaseHigh[]={0}; // Dict, how heart rate changes
			timeInSystem=300; // How many seconds in your system
			timeTillMaxEffect=30; // How long does it take to take effect
			maxDose=10000; // Probably how many till you die
			incompatibleMedication[]={}; // What medicines fuck you over if taken with this
			viscosityChange=0; // How much does it change viscoscity of your blood. Affects bleedout from wounds
		}
		class STB86_UMP45andUMP40_Pic: Morphine
		{
			painReduce=0.95;
			hrIncreaseLow[]={30};
			hrIncreaseNormal[]={20};
			hrIncreaseHigh[]={15};
			timeInSystem=45;
			timeTillMaxEffect=3; // How long does it take to take effect
			maxDose=3; // Probably how many till you die
			incompatibleMedication[]={}; // What medicines fuck you over if taken with this
			viscosityChange=0; // How much does it change viscoscity of your blood. Affects bleedout from wounds
		}
		class STB86_Biofoam_pack: Morphine
		{
			painReduce=0.45;
			hrIncreaseLow[]={0};
			hrIncreaseNormal[]={0};
			hrIncreaseHigh[]={0};
			timeInSystem=120;
			timeTillMaxEffect=20;
			maxDose=10000;
			incompatibleMedication[]={};
			viscosityChange=0;
		}
	};	
	class Bandaging //This class determines what wounds are closed
	{
		class STB86_Biofoam_pack: OPTRE_Biofoam
		{
			effectiveness=4; //Less effective means it won't close as well. IE at 0 it won't close, at 0.5 will take half damage away, at 1 it will fully heal
			reopeningChance=0.2; // Chance to reopen
			reopeningMinDelay=900; //Min delay on reopening
			reopeningMaxDelay=900; // Max delay on reopening
		};
		class STB86_Trauma_Kit: OPTRE_Biofoam
		{
			effectiveness=8;
			reopeningChance=0.1;
			reopeningMinDelay=1200;
			reopeningMaxDelay=1200;
		};
	};
};



class ACE_Medical_Treatment_Actions // Handles the stuff you see in the menu
{
	class OPTRE_Medigel;
	class OPTRE_Biofoam;
	class Morphine;
	class STB86_Biofoam_pack: OPTRE_Biofoam
	{
		displayName="Use biofoam from biofoam pack"; // What you see in the menu
		displayNameProgress="Using biofoam"; // What you see in the progress bar
		items[]=
		{
			"STB86_Biofoam_pack" // The item it uses 
		};
		consumeItem=0; // Do we get rid of the item when we do this
		category="bandage"; // Where does it show up 
		medicRequired=1; // Do you need to be a medic
	};
	class STB86_UMP45andUMP40_Pic: Morphine
	{
		displayName="What am I fighting for?";
		displayNameProgress="Reminding your self what you're fighting for.";
		items[]=
		{
			"STB86_UMP45andUMP40_Pic" // The item it uses 
		};
		consumeItem=0; // Do we get rid of the item when we do this
		medicRequired=0; // Do you need to be a medic
		treatmentTime=15;
		allowedSelections[]=
		{
		"Head"
		};
	};
	class STB86_Trauma_Kit: OPTRE_Medigel
	{
		displayName="Use Trauma Kit";
		displayNameProgress="Hope you read the instructions";
		consumeItem=1;
		treatmentTime=12; // How long does it take to treat
		medicRequired=0;
		allowSelfTreatment=0; // Can you use it on yourself
		category="advanced";
		callbackSuccess="STB86_Medical_fnc_trauma_kit"; // What do we do if it succeeds (Must be passed as a function defined in CfgFunctions)
		items[]=
		{
			"STB86_Trauma_Kit"
		};
	};
};
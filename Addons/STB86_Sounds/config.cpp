class CfgPatches
{
	class STB86_sound_pack
	{
		units[ ] = 
		{
		"STB86_chaindrag.ogg",
		"STB86_comeplaywithus.ogg",
		"STB86_distantscraping.ogg",
		"STB86_echoedgrowl.ogg",
		"STB86_hivemindambience.ogg",
		"STB86_WFirebrand",
		"STB86_WVandal",
		"STB86_WMisfit",
		"STB86_WBehind",
		"STB86_WLeft",
		"STB86_WRight",
		"STB86_WFront",
		"STB86_WIdleOne",
		"STB86_WIdleTwo",
		"STB86_WIdleThree",
		"STB86_WIdleFour",
		"STB86_WNoFriends",
		"STB86_WDown",
		"STB86_WMorning",
		"STB86_WIntro",
		"STB86_WAwoken",
		};
		weapons[ ] = {};
		requiredVersion = 0.1;
		requiredAddons[ ] = {};
	}; 
};

class CfgSFX
{
	sounds[]={};
	class STB86_comeplaywithus
	{
		name="[86th] Come Play with us";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\comeplaywithus.ogg", 
			100, 
			1, 
			100,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_distantscraping
	{
		name="[86th] Distant Scraping";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\distantscraping.ogg", 
			160, 
			1, 
			200,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_hivemindambience
	{
		name="[86th] Hivemind Ambience";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\hivemindambience.ogg", 
			160, 
			1, 
			200,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_chaindrag
	{
		name="[86th] Chain Drag";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\chaindrag.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	// Start of Warfarin AI
	class STB86_WBehind
	{
		name="[Warfarin] Behind you";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WBehind.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WFront
	{
		name="[Warfarin] Infront of you";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WFront.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WLeft
	{
		name="[Warfarin] Left of you";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WLeft.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WRight
	{
		name="[Warfarin] Right of you";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WRight.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WVandal
	{
		name="[Warfarin] Vandal is about to wiped!";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WVandal.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WMisfit
	{
		name="[Warfarin] Misfit is about to wiped!";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WMisfit.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WFirebrand
	{
		name="[Warfarin] Firebrand is about to wiped!";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WFirebrand.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WNoFriends
	{
		name="[Warfarin] Please feel free to kill everything";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WNoFriends.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WIdleOne
	{
		name="[Warfarin] Idle Chatter 1";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WIdleOne.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WIdleTwo
	{
		name="[Warfarin] Idle Chatter 2";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WIdleTwo.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WIdleThree
	{
		name="[Warfarin] Idle Chatter 3";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WIdleThree.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WIdleFour
	{
		name="[Warfarin] Idle Chatter 4";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WIdleFour.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WDown
	{
		name="[Warfarin] You're down";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WDown.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class STB86_WAwoken
	{
		name="[Warfarin] You're awake";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\WAwaken.ogg", 
			60, 
			1, 
			140,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	// End of Warfarin AI
	class STB86_echoedgrowl
	{
		name="[86th] Echoed Growl";
		sounds[]=
		{
			"sfxsound"
		};
		sfxsound[]=
		{
			"STB86_sounds\echoedgrowl.ogg", 
			160, 
			1, 
			200,
			0,
			99, 
			99,
			0 
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
};
class CfgVehicles
{
	class All;
	class Sound: All
	{
		author="Center";
		mapSize=10;
		_generalMacro="Sound";
		scope=0;
		side=-1;
		animated=0;
		vehicleClass="Sounds";
		icon="iconSound";
		faction="none";
		editorCategory="STB86_Sounds";
		editorSubcategory="STB86_sub_Sounds";
	};
	class STB86_comeplaywithus: Sound
	{
		author="Center";
		_generalMacro="STB86_comeplaywithus_veh";
		scope=2;
		sound="STB86_comeplaywithus";
		displayName="[86th] come play with us";
	};
		class STB86_distantscraping: Sound
	{
		author="Center";
		_generalMacro="STB86_distantscraping_veh";
		scope=2;
		sound="STB86_distantscraping";
		displayName="[86th] Distant Scraping";
	};
	class STB86_hivemindambience: Sound
	{
		author="Center";
		_generalMacro="STB86_hivemindambience_veh";
		scope=2;
		sound="STB86_hivemindambience";
		displayName="[86th] Hivemind Ambience";
	};
	class STB86_chaindrag: Sound
	{
		author="Center";
		_generalMacro="STB86_chaindrag_veh";
		scope=2;
		sound="STB86_chaindrag";
		displayName="[86th] Chain Drag";
	};
	// Warfarin Stuff
		class STB86_WIdleOne: Sound
	{
		author="Center";
		_generalMacro="STB86_WIdleOne_veh";
		scope=2;
		sound="STB86_WIdleOne";
		displayName="[Warfarin] Idle Chatter One";
	};
		class STB86_WIdleTwo: Sound
	{
		author="Center";
		_generalMacro="STB86_WIdleTwo_veh";
		scope=2;
		sound="STB86_WIdleTwo";
		displayName="[Warfarin] Idle Chatter Two";
	};
		class STB86_WIdleThree: Sound
	{
		author="Center";
		_generalMacro="STB86_WIdleThree_veh";
		scope=2;
		sound="STB86_WIdleThree";
		displayName="[Warfarin] Idle Chatter Three";
	};
		class STB86_WIdleFour: Sound
	{
		author="Center";
		_generalMacro="STB86_WIdleFour_veh";
		scope=2;
		sound="STB86_WIdleFour";
		displayName="[Warfarin] Idle Chatter Four";
	};
		class STB86_WFront: Sound
	{
		author="Center";
		_generalMacro="STB86_WFront_veh";
		scope=2;
		sound="STB86_WFront";
		displayName="[Warfarin] Enemy Infront of you!";
	};
		class STB86_WBehind: Sound
	{
		author="Center";
		_generalMacro="STB86_WBehind_veh";
		scope=2;
		sound="STB86_WBehind";
		displayName="[Warfarin] Enemy Behind you!";
	};
		class STB86_WLeft: Sound
	{
		author="Center";
		_generalMacro="STB86_WLeft_veh";
		scope=2;
		sound="STB86_WLeft";
		displayName="[Warfarin] Enemy left of you!";
	};
		class STB86_WRight: Sound
	{
		author="Center";
		_generalMacro="STB86_WRight_veh";
		scope=2;
		sound="STB86_WRight";
		displayName="[Warfarin] Enemy right of you!";
	};
		class STB86_WVandal: Sound
	{
		author="Center";
		_generalMacro="STB86_WVandal_veh";
		scope=2;
		sound="STB86_WVandal";
		displayName="[Warfarin] VANDAL IS ABOUT TO BE WIPED OUT!";
	};
		class STB86_WMisfit: Sound
	{
		author="Center";
		_generalMacro="STB86_WMisfit_veh";
		scope=2;
		sound="STB86_WMisfit";
		displayName="[Warfarin] MISFT IS ABOUT TO BE WIPED OUT!";
	};
		class STB86_WFirebrand: Sound
	{
		author="Center";
		_generalMacro="STB86_WFirebrand_veh";
		scope=2;
		sound="STB86_WFirebrand";
		displayName="[Warfarin] Firebrand IS ABOUT TO BE WIPED OUT!";
	};
		class STB86_WNoFriends: Sound
	{
		author="Center";
		_generalMacro="STB86_WNoFriends_veh";
		scope=2;
		sound="STB86_WNoFriends";
		displayName="[Warfarin] There are no friendlies near you!";
	};
		class STB86_WDown: Sound
	{
		author="Center";
		_generalMacro="STB86_WDown_veh";
		scope=2;
		sound="STB86_WDown";
		displayName="[Warfarin] Captain, you've passed out!";
	};
		class STB86_WAwoken: Sound
	{
		author="Center";
		_generalMacro="STB86_WAwoken_veh";
		scope=2;
		sound="STB86_WAwoken";
		displayName="[Warfarin] You're awake captain!";
	};
	// End of Warfarin Stuff HOLY FUCK, I HATE HOW MUCH THIS TAKES TO WRITE OUT
	class STB86_echoedgrowl: Sound
	{
		author="Center";
		_generalMacro="STB86_echoedgrowl_veh";
		scope=2;
		sound="STB86_echoedgrowl";
		displayName="[86th] Echoed Growl";
	};
}
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
		"STB86_hivemindambience.ogg"
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
	class STB86_echoedgrowl: Sound
	{
		author="Center";
		_generalMacro="STB86_echoedgrowl_veh";
		scope=2;
		sound="STB86_echoedgrowl";
		displayName="[86th] Echoed Growl";
	};
}
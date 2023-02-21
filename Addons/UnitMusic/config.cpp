class CfgPatches
{
	class Music86 // Total Track Count 81 , I should add [86] infront of all our tracks to make them show up together in triggers.
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMusicClasses // This is the categories that show up in Menu, the CfgMusic bit uses classes for Themes and Music Class.  If you do a large music pack, you 	         should probably make multiple PBOs. (We did not make multiple PBOs, do not be like us, we're stupid.)
{
	class SinderMusic // SM
	{
		displayName = "Sinder Selection" 
	};
	class McAllisterMusic // MM
	{
		displayName = "McAllister Selection" 
	};
	class EllisMusic // EM
	{
		displayName = "Ellis Selection" 
	};
	class UnitPick // UC
	{
		displayName = "Unit Selection" 
	};
	class HaloSongs // HM
	{
		displayName = "Exclusively Halo Music" 
	};
	class SinderTax // ST
	{
		displayName = "Sinder's Tax"
	};
	class Blackhand // BH
	{
		displayName = "Blackhand Selection"
	};
};

class CfgMusic // Music Goes here, follow the schema, the 2 numbers after the .OGG file are Volume and Speed. Classes do not need to be in order, but it looks cleaner.
{
	// Sinder Music 13 tracks
	class SM1
	{
		name = " [86] Theme of the Slayer - Goblinslayer";  // Name of song in list
		sound[] = {"UnitMusic\Sinder\Orcbold.ogg",1.8,1}; // File path and volume/speed
		theme = "SinderMusic"; // What category it goes in?
		duration = "197"; // Duration in seconds
		musicClass = "SinderMusic"; // Category
	};
	class SM2
	{
		name = " [86] PeaceKeepers - Project Wingman OST";
		sound[] = {"UnitMusic\Sinder\Peacekeeper.ogg",1,1};
		theme = "SinderMusic";
		duration = "185";
		musicClass = "SinderMusic";
	};
	class SM3
	{
		name = "[86] Bankrupt Sea - Project Wingman OST";
		sound[] = {"UnitMusic\Sinder\BankruptSea.ogg",1,1};
		theme = "SinderMusic";
		duration = "182";
		musicClass = "SinderMusic";
	};
	class SM4
	{
		name = "[86] Coronation - Project Wingman OST";
		sound[] = {"UnitMusic\Sinder\Coronation.ogg",1,1};
		theme = "SinderMusic";
		duration = "160";
		musicClass = "SinderMusic";
	};
	class SM5
	{
		name = "[86] Kings Combat - Project Wingman OST";
		sound[] = {"UnitMusic\Sinder\KingsAction.ogg",1,1};
		theme = "SinderMusic";
		duration = "178";
		musicClass = "SinderMusic";
	};
	class SM6
	{
		name = "[86] Showdown - Project Wingman OST";
		sound[] = {"UnitMusic\Sinder\Showdown.ogg",1,1};
		theme = "SinderMusic";
		duration = "189";
		musicClass = "SinderMusic";
	};
	class SM7
	{
		name = "[86] Sol Squadron - Ace Combat 7 OST";
		sound[] = {"UnitMusic\Sinder\SolSquad.ogg",1,1};
		theme = "SinderMusic";
		duration = "223";
		musicClass = "SinderMusic";
	};
	class SM8
	{
		name = "[86] Homeward - Ace Combat 7 OST";
		sound[] = {"UnitMusic\Sinder\Homeward.ogg",1,1};
		theme = "SinderMusic";
		duration = "273";
		musicClass = "SinderMusic";
	};
	class SM9
	{
		name = "[86] Unrivavled - Vivy Fluorite Eyes OST";
		sound[] = {"UnitMusic\Sinder\Unrivaled.ogg",2.4,1};  // I've no clue if decimals work.  Update: They work
		theme = "SinderMusic";
		duration = "105";
		musicClass = "SinderMusic";
	};
	class SM10
	{
		name = "[86] Demons of Razgriz - Ace Combat 5 OST";
		sound[] = {"UnitMusic\Sinder\DemonsRazgriz.ogg",1,1};
		theme = "SinderMusic";
		duration = "124";
		musicClass = "SinderMusic";
	};
	class SM11
	{
		name = "[86] Judgementday - Blackops 2 OST";
		sound[] = {"UnitMusic\Sinder\Judgementday.ogg",1,1};
		theme = "SinderMusic";
		duration = "320";
		musicClass = "SinderMusic";
	};
	class SM12
	{
		name = "[86] Poincare Recurrence - Girlsfrontline OST";
		sound[] = {"UnitMusic\Sinder\PoincareRecurrence.ogg",1,1};
		theme = "SinderMusic";
		duration = "215";
		musicClass = "SinderMusic";
	};
	class SM13
	{
		name = "[86] Fixed Point - Girlsfrontline OST";
		sound[] = {"UnitMusic\Sinder\Fixedpoint.ogg",1,1};
		theme = "SinderMusic";
		duration = "228";
		musicClass = "SinderMusic";
	};
	// McAllister Music 3 Tracks
	class MM1
	{
		name = "[86] For Narmer - Warframe OST";
		sound[] = {"UnitMusic\McAllister\ForNarmer.ogg",3.8,1}; // This was edited to 3.8 because it was SUPER quiet.
		theme = "McAllisterMusic";
		duration = "203";
		musicClass = "McAllisterMusic";
	};
	class MM2
	{
		name = "[86] Future for the Krogan - Mass Effect 3 OST";
		sound[] = {"UnitMusic\McAllister\FutureForKrogan.ogg",2,1}; // This was edited to 2 because it was quiet.
		theme = "McAllisterMusic";
		duration = "208";
		musicClass = "McAllisterMusic";
	};
	class MM3
	{
		name = "[86] Bury the light - Fucking dumb game";
		sound[] = {"UnitMusic\McAllister\Burythelight.ogg",1.4,1};
		theme = "McAllisterMusic";
		duration = "576";
		musicClass = "McAllisterMusic";
	};
	class MM4
	{
		name = "[86] Trespasser Lost Elf Theme - Dragon Age";
		sound[] = {"UnitMusic\McAllister\DAILostElf.ogg",1.7,1};
		theme = "McAllisterMusic";
		duration = "226";
		musicClass = "McAllisterMusic";
	};
	class MM5
	{
		name = "[86] Alexius - Dragon Age";
		sound[] = {"UnitMusic\McAllister\Alexius.ogg",1.5,1};
		theme = "McAllisterMusic";
		duration = "147";
		musicClass = "McAllisterMusic";
	};
	class MM6
	{
		name = "[86] Golden Spade - Mechwarrior 2";
		sound[] = {"UnitMusic\McAllister\Mech2GoldenSpade.ogg",1,1};
		theme = "McAllisterMusic";
		duration = "247";
		musicClass = "McAllisterMusic";
	};
	class MM7
	{
		name = "[86] Judgement and Retribution - Mechwarrior 5";
		sound[] = {"UnitMusic\McAllister\Mech5MercenariesJudgementRetribution.ogg",1,1};
		theme = "McAllisterMusic";
		duration = "244";
		musicClass = "McAllisterMusic";
	};
	class MM8
	{
		name = "[86] Freedom Fight - Mechwarrior 2";
		sound[] = {"UnitMusic\McAllister\Mech2MercenariesFreedomFight.ogg",1,1};
		theme = "McAllisterMusic";
		duration = "288";
		musicClass = "McAllisterMusic";
	};
	class MM9
	{
		name = "[86] Rolling Storm - I forgot, so I'm not fixing it.";
		sound[] = {"UnitMusic\McAllister\RollingStorm.ogg",1,1};
		theme = "McAllisterMusic";
		duration = "247";
		musicClass = "McAllisterMusic";
	};
	class MM10
	{
		name = "[86] Snake Eater - Metal Gear Solid 3";
		sound[] = {"UnitMusic\McAllister\SnakeEater.ogg",1,1};
		theme = "McAllisterMusic";
		duration = "173";
		musicClass = "McAllisterMusic";
	};
	class MM11
	{
		name = "[86] A Beautiful Song - Nier";
		sound[] = {"UnitMusic\McAllister\NierBeautifulSong.ogg",1,1};
		theme = "McAllisterMusic";
		duration = "241";
		musicClass = "McAllisterMusic";
	};
	class MM12
	{
		name = "[86] Song of Ancients Atonement - Nier";
		sound[] = {"UnitMusic\McAllister\NierSongofAncient.ogg",1,1};
		theme = "McAllisterMusic";
		duration = "323";
		musicClass = "McAllisterMusic";
	};
	// Ellis Music 28 tracks  Sidenote: I hated these the most.
	class EM1
	{
		name = "[86] Along the Watchtower - medium, flat, cool, [general](atmosphere)";
		sound[] = {"UnitMusic\Ellis\Watchtower.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "241";
		musicClass = "EllisMusic";
	};
	class EM2
	{
		name = "[86] Overture - slow, building, stoic, [general](cinematics)";
		sound[] = {"UnitMusic\Ellis\Overture.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "148";
		musicClass = "EllisMusic";
	};
	class EM3
	{
		name = "[86] Son of Flynn - medium, flat, wonder, [forerunner](mixed)";
		sound[] = {"UnitMusic\Ellis\SonofFlynn.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "95";
		musicClass = "EllisMusic";
	};
	class EM4
	{
		name = "[86] Recognizer - fast, building, urgent, [forerunner](action)";
		sound[] = {"UnitMusic\Ellis\Recognizer.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "157";
		musicClass = "EllisMusic";
	};
	class EM5
	{
		name = "[86] Armory - medium, rising, tense, [forerunner](preparation)";
		sound[] = {"UnitMusic\Ellis\Armory.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "122";
		musicClass = "EllisMusic";
	};
	class EM6
	{
		name = "[86] Outlands - fast, building, tense, [general](action)";
		sound[] = {"UnitMusic\Ellis\Outlands.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "162";
		musicClass = "EllisMusic";
	};
	class EM7
	{
		name = "[86] Nocturne - slow, flat, sombre, [general](atmosphere)";
		sound[] = {"UnitMusic\Ellis\Nocturne.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "101";
		musicClass = "EllisMusic";
	};
	class EM8
	{
		name = "[86] Rectifier - slow, peaking, overwhelmed, [general](action)";
		sound[] = {"UnitMusic\Ellis\Rectifier.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "134";
		musicClass = "EllisMusic";
	};
	class EM9
	{
		name = "[86] Disc Wars - medium, building, overcoming, [general](action)";
		sound[] = {"UnitMusic\Ellis\DiscWars.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "251";
		musicClass = "EllisMusic";
	};
	class EM10
	{
		name = "[86] Arrival - slow, flat, discovery, [covenant](atmosphere)";
		sound[] = {"UnitMusic\Ellis\Arrival.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "120";
		musicClass = "EllisMusic";
	};
	class EM11
	{
		name = "[86] Flynn Lives - fast, building, achieving, [general](mixed)";
		sound[] = {"UnitMusic\Ellis\FlynnLives.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "202";
		musicClass = "EllisMusic";
	};
	class EM12
	{
		name = "[86] Finale - slow, rising, accomplishment, [general](atmosphere)";
		sound[] = {"UnitMusic\Ellis\Finale.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "262";
		musicClass = "EllisMusic";
	};
	class EM13
	{
		name = "[86] Father and Son - slow, rising, sombre, [general](atmosphere)";
		sound[] = {"UnitMusic\Ellis\FatherandSon.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "189";
		musicClass = "EllisMusic";
	};
	class EM14
	{
		name = "[86] Wallace - slow, decline, creepy, [flood](atmosphere)";
		sound[] = {"UnitMusic\Ellis\Wallace.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "323";
		musicClass = "EllisMusic";
	};
	class EM15
	{
		name = "[86] Memory - slow, flat, lost, [general](atmosphere)";
		sound[] = {"UnitMusic\Ellis\Memory.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "152";
		musicClass = "EllisMusic";
	};
	class EM16
	{
		name = "[86] Furnace - slow, flat, eerie, [flood](atmosphere)";
		sound[] = {"UnitMusic\Ellis\Furnace.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "221";
		musicClass = "EllisMusic";
	};
	class EM17
	{
		name = "[86] Pilot - slow, flat, eerie, [flood](action)";
		sound[] = {"UnitMusic\Ellis\Pilot.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "137";
		musicClass = "EllisMusic";
	};
	class EM18
	{
		name = "[86] The Terminator - medium, rising, realisation, [general](atmosphere)";
		sound[] = {"UnitMusic\Ellis\TheTerminator.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "159";
		musicClass = "EllisMusic";
	};
	class EM19
	{
		name = "[86] Sarah - slow, rising, abandoned, [general](mixed)";
		sound[] = {"UnitMusic\Ellis\Sarah.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "83";
		musicClass = "EllisMusic";
	};
	class EM20
	{
		name = "[86] Arm and Eye Surgery - slow, flat, waiting, [covenant](mixed)";
		sound[] = {"UnitMusic\Ellis\ArmEyeSurgery.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "225";
		musicClass = "EllisMusic";
	};
	class EM21
	{
		name = "[86] Nocturnal - medium, rising, powerful, [general](action)";
		sound[] = {"UnitMusic\Ellis\Nocturnal.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "423";
		musicClass = "EllisMusic";
	};
	class EM22
	{
		name = "[86] Something in the Way - slow, flat, loss, [general](mixed)";
		sound[] = {"UnitMusic\Ellis\SomethingInTheWay.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "290";
		musicClass = "EllisMusic";
	};
	class EM23
	{
		name = "[86] Feline - medium, building, sabotage, [general](atmosphere)";
		sound[] = {"UnitMusic\Ellis\Feline.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "106";
		musicClass = "EllisMusic";
	};
	class EM24
	{
		name = "[86] Funeral - medium, flat, mourning, [general](atmosphere)";
		sound[] = {"UnitMusic\Ellis\Funeral.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "105";
		musicClass = "EllisMusic";
	};
	class EM25
	{
		name = "[86] Wayfaring Stranger - slow, flat, suicide, [general](mixed)";
		sound[] = {"UnitMusic\Ellis\WayfaringStranger.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "289";
		musicClass = "EllisMusic";
	};
	class EM26
	{
		name = "[86] Fortunate Son - fast, flat, cool, [general](mixed)";
		sound[] = {"UnitMusic\Ellis\FortunateSon.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "141";
		musicClass = "EllisMusic";
	};
	class EM27
	{
		name = "[86] California Dreamin - medium, flat, effortless, [general](mixed)";
		sound[] = {"UnitMusic\Ellis\CaliforniaDreamin.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "157";
		musicClass = "EllisMusic";
	};
	class EM28
	{
		name = "[86] Country Roads - slow, flat, carefree, [general](atmosphere)";
		sound[] = {"UnitMusic\Ellis\CountryRoads.ogg",1,1}; 
		theme = "EllisMusic";
		duration = "189";
		musicClass = "EllisMusic";
	};
	// Unit Choice 8 Tracks
	class UC1
	{
		name = "[86] BabyLadyLove - Nekopara";
		sound[] = {"UnitMusic\UnitChoice\BabyLadyLove.ogg",1,1}; 
		theme = "UnitPick";
		duration = "248";
		musicClass = "UnitPick";
	};
	class UC2
	{
		name = "[86] Phantom Russian - Warsong";
		sound[] = {"UnitMusic\UnitChoice\PhantomRussian.ogg",1,1}; 
		theme = "UnitPick";
		duration = "138";
		musicClass = "UnitPick";
	};
	class UC3
	{
		name = "[86] Papism - MonsterMusume";
		sound[] = {"UnitMusic\UnitChoice\notPapism.ogg",1,1}; 
		theme = "UnitPick";
		duration = "257";
		musicClass = "UnitPick";
	};
	class UC4
	{
		name = "[86] On a Bright Wind - Man of War";
		sound[] = {"UnitMusic\UnitChoice\ABrightWind.ogg",1,1}; 
		theme = "UnitPick";
		duration = "242";
		musicClass = "UnitPick";
	};
	class UC5
	{
		name = "[86] Celtics Writing Music - Celtic";
		sound[] = {"UnitMusic\UnitChoice\Celtic.ogg",2.7,1}; 
		theme = "UnitPick";
		duration = "292";
		musicClass = "UnitPick";
	};
	class UC6
	{
		name = "[86] My Brother - Berserk";
		sound[] = {"UnitMusic\UnitChoice\MyBrother.ogg",1,1}; 
		theme = "UnitPick";
		duration = "393";
		musicClass = "UnitPick";
	};
	class UC7
	{
		name = "[86] Bloodstone - Audiomachine";
		sound[] = {"UnitMusic\UnitChoice\BloodStone.ogg",1,1}; 
		theme = "UnitPick";
		duration = "204";
		musicClass = "UnitPick";
	};
	class UC8
	{
		name = "[86] I will find you - Audiomachine";
		sound[] = {"UnitMusic\UnitChoice\FindYou.ogg",1,1}; 
		theme = "UnitPick";
		duration = "190";
		musicClass = "UnitPick";
	};
	// Sinders Tax 4 Tracks
	class ST1
	{
		name = "[86] Sentry A - Girls Frontline";
		sound[] = {"UnitMusic\SinderTax\SENTRYA.ogg",1,1}; 
		theme = "SinderTax";
		duration = "133";
		musicClass = "SinderTax";
	};
	class ST2
	{
		name = "[86] Sentry B - Girls Frontline";
		sound[] = {"UnitMusic\SinderTax\SENTRYB.ogg",1,1}; 
		theme = "SinderTax";
		duration = "133";
		musicClass = "SinderTax";
	};
	class ST3
	{
		name = "[86] Nihilism A - Girls Frontline";
		sound[] = {"UnitMusic\SinderTax\NIHILISMA.ogg",1,1}; 
		theme = "SinderTax";
		duration = "141";
		musicClass = "SinderTax";
	};
	class ST4
	{
		name = "[86] Nihilism B - Girls Frontline";
		sound[] = {"UnitMusic\SinderTax\NIHILISMB.ogg",1,1}; 
		theme = "SinderTax";
		duration = "141";
		musicClass = "SinderTax";
	};
	class ST5
	{
		name = "[86] Suck My Rock - Ken Ashcorp";
		sound[] = {"UnitMusic\SinderTax\Suckmyrock.ogg",1,1}; 
		theme = "SinderTax";
		duration = "97";
		musicClass = "SinderTax";
	};
	class ST6
	{
		name = "[86] Warcry - Kabaneri Iron Fortress";
		sound[] = {"UnitMusic\SinderTax\Warcry.ogg",1,1}; 
		theme = "SinderTax";
		duration = "251";
		musicClass = "SinderTax";
	};
	class ST7
	{
		name = "[86] Looming Dread (Metal) - Resident Evil 2";
		sound[] = {"UnitMusic\SinderTax\LoomingDread.ogg",1,1}; 
		theme = "SinderTax";
		duration = "130";
		musicClass = "SinderTax";
	};
	class ST8
	{
		name = "[86] Japanese Goblin - Touhou Suikas Theme";
		sound[] = {"UnitMusic\SinderTax\JapaneseGoblin.ogg",1,1}; 
		theme = "SinderTax";
		duration = "241";
		musicClass = "SinderTax";
	};
	//Blackhand Tracks
	class BH1
	{
		name = "[86] DeathSquad";
		sound[] = {"UnitMusic\Blackhand\Deathsquad.ogg",1,1}; 
		theme = "Blackhand";
		duration = "249";
		musicClass = "Blackhand";
	};
	class BH2
	{
		name = "[86] Aegis";
		sound[] = {"UnitMusic\Blackhand\Aegus.ogg",1,1}; 
		theme = "Blackhand";
		duration = "251";
		musicClass = "Blackhand";
	};
	// Halo Music 32 Tracks
	class HM1
	{
		name = "[86] Death on a pale horse";
		sound[] = {"UnitMusic\HaloMusic\PaleHorse.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "95";
		musicClass = "HaloSongs";
	};
	class HM2
	{
		name = "[86] Bravo Zulu Trooper";
		sound[] = {"UnitMusic\HaloMusic\BravoZulu.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "221";
		musicClass = "HaloSongs";
	};
	class HM3
	{
		name = "[86] Break the Covenant";
		sound[] = {"UnitMusic\HaloMusic\Breaking.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "186";
		musicClass = "HaloSongs";
	};
	class HM4
	{
		name = "[86] Brothers in Arms";
		sound[] = {"UnitMusic\HaloMusic\BrothersArms.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "123";
		musicClass = "HaloSongs";
	};
	class HM5
	{
		name = "[86] Covenant Dance (The third iteration)";
		sound[] = {"UnitMusic\HaloMusic\CovenantDance.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "117";
		musicClass = "HaloSongs";
	};
	class HM6
	{
		name = "[86] Deference for Darkness";
		sound[] = {"UnitMusic\HaloMusic\Deference.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "187";
		musicClass = "HaloSongs";
	};
	class HM7
	{
		name = "[86] Devils and Monsters";
		sound[] = {"UnitMusic\HaloMusic\Devils.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "130";
		musicClass = "HaloSongs";
	};
	class HM8
	{
		name = "[86] Finest Hour";
		sound[] = {"UnitMusic\HaloMusic\Finest.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "163";
		musicClass = "HaloSongs";
	};
	class HM9
	{
		name = "[86] Follow our Brothers";
		sound[] = {"UnitMusic\HaloMusic\FollowBrothers.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "63";
		musicClass = "HaloSongs";
	};
	class HM10
	{
		name = "[86] Get Tactical Marines";
		sound[] = {"UnitMusic\HaloMusic\Tactical.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "165";
		musicClass = "HaloSongs";
	};
	class HM11
	{
		name = "[86] HellJumpers";
		sound[] = {"UnitMusic\HaloMusic\HelljuHMers.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "244";
		musicClass = "HaloSongs";
	};
	class HM12
	{
		name = "[86] Heretic Hero";
		sound[] = {"UnitMusic\HaloMusic\Heretic.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "154";
		musicClass = "HaloSongs";
	};
	class HM13
	{
		name = "[86] If they came to hear me beg";
		sound[] = {"UnitMusic\HaloMusic\Begging.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "216";
		musicClass = "HaloSongs";
	};
	class HM14
	{
		name = "[86] Impart (ARBITER EDITION)";
		sound[] = {"UnitMusic\HaloMusic\IHMart.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "281";
		musicClass = "HaloSongs";
	};
	class HM15
	{
		name = "[86] In Amber Clad";
		sound[] = {"UnitMusic\HaloMusic\Amberclad.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "99";
		musicClass = "HaloSongs";
	};
	class HM16
	{
		name = "[86] More than his Share";
		sound[] = {"UnitMusic\HaloMusic\MoreShare.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "309";
		musicClass = "HaloSongs";
	};
	class HM17
	{
		name = "[86] Neon Night";
		sound[] = {"UnitMusic\HaloMusic\Neon.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "87";
		musicClass = "HaloSongs";
	};
	class HM18
	{
		name = "[86] Night Runner";
		sound[] = {"UnitMusic\HaloMusic\NightRunner.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "125";
		musicClass = "HaloSongs";
	};
	class HM19
	{
		name = "[86] Not a Number";
		sound[] = {"UnitMusic\HaloMusic\NotNumber.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "94";
		musicClass = "HaloSongs";
	};
	class HM20
	{
		name = "[86] Only a Star";
		sound[] = {"UnitMusic\HaloMusic\StarSea.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "113";
		musicClass = "HaloSongs";
	};
	class HM21
	{
		name = "[86] Penance";
		sound[] = {"UnitMusic\HaloMusic\Penance.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "154";
		musicClass = "HaloSongs";
	};
	class HM22
	{
		name = "[86] Peril";
		sound[] = {"UnitMusic\HaloMusic\Peril.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "166";
		musicClass = "HaloSongs";
	};
	class HM23
	{
		name = "[86] The Perilous Journey";
		sound[] = {"UnitMusic\HaloMusic\PerilousJourney.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "146";
		musicClass = "HaloSongs";
	};
	class HM24
	{
		name = "[86] Roll Call";
		sound[] = {"UnitMusic\HaloMusic\Roll.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "156";
		musicClass = "HaloSongs";
	};
	class HM25
	{
		name = "[86] Sacred Icon";
		sound[] = {"UnitMusic\HaloMusic\Sacred.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "216";
		musicClass = "HaloSongs";
	};
	class HM26
	{
		name = "[86] Sword Base";
		sound[] = {"UnitMusic\HaloMusic\Sword.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "102";
		musicClass = "HaloSongs";
	};
	class HM27
	{
		name = "[86] Cavalry is here";
		sound[] = {"UnitMusic\HaloMusic\Cavalry.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "133";
		musicClass = "HaloSongs";
	};
	class HM28
	{
		name = "[86] Gun to the head of the universe";
		sound[] = {"UnitMusic\HaloMusic\GunUniverse.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "146";
		musicClass = "HaloSongs";
	};
	class HM29
	{
		name = "[86] This is not your grave";
		sound[] = {"UnitMusic\HaloMusic\NotGrave.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "222";
		musicClass = "HaloSongs";
	};
	class HM30
	{
		name = "[86] To turn a Tide";
		sound[] = {"UnitMusic\HaloMusic\TideTurn.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "195";
		musicClass = "HaloSongs";
	};
	class HM31
	{
		name = "[86] Under Cover of Night";
		sound[] = {"UnitMusic\HaloMusic\NightCover.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "221";
		musicClass = "HaloSongs";
	};
	class HM32
	{
		name = "[86] You can Run";
		sound[] = {"UnitMusic\HaloMusic\YouRun.ogg",1,1}; 
		theme = "HaloSongs";
		duration = "107";
		musicClass = "HaloSongs";
	};
}

class CfgSounds{
	sounds[] = {};
	class STB86BuryTheLight{
		name="bury_the_light";
		sound[] = {"UnitMusic\McAllister\Burythelight.ogg",1, 1};
		titles[] = {1,"Doc Mcallister is going gorbo mode"};
	};
}
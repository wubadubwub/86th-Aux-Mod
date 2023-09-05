class OPTRE_ANPRC_521_Black;
class OPTRE_UNSC_Rucksack;
class OPTRE_ILCS_Rucksack_Black;
class STB86_BH_CH_ANPRC521 : OPTRE_ANPRC_521_Black {
	author = AUTHOR;
	dlc = DLC;
	displayName = "ANPRC-521 [CH]";
	descriptionShort = "A Blackhand Modified ANPRC, it's communication range is massive";
	hiddenSelectionsTextures[] = {
		"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_Rucksack.paa",
		"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_LR.paa"
	};	
	mass=10;
	maximumLoad = 400;
	tf_encryptionCode = "tf_east_radio_code";
	tf_range = 105000;
};
class STB86_BH_CH_Rucksack : OPTRE_UNSC_Rucksack {
	author = AUTHOR;
	dlc = DLC;
	displayName = "Rucksack [CH]";
	hiddenSelectionsTextures[] = {"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_Rucksack.paa"};
};
class STB86_BH_CH_Medic_Rucksack : OPTRE_ILCS_Rucksack_Black {
	author = AUTHOR;
	dlc = DLC;
	displayName = "Medic Rucksack [CH]";
	hiddenSelectionsTextures[] = {"STB86_Factions\Black_hand\The_Chosen\textures\Blackhand_ILCS"};
};
class STB86_BH_CH_Rucksack_AA : STB86_BH_CH_Rucksack {
	scope=1;
	scopeArsenal=1;
	class TransportMagazines
	{
		MAG_XX(OPTRE_M41_Twin_HEAT_Thermal,2);
	};
};
class STB86_BH_CH_Rucksack_AT : STB86_BH_CH_Rucksack {
	scope=1;
	scopeArsenal=1;
	class TransportMagazines
	{
		MAG_XX(OPTRE_M41_Twin_HEAT,2);
	};
};
class STB86_BH_CH_Rucksack_Devastator : STB86_BH_CH_Rucksack {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		MAG_XX(OPTRE_200Rnd_127x99_M247H_Etilka_Ball,3);
	};
};

class MA_M56S_Rucksack;
class MA_M56S_Rucksack_Medic;
class MA_M56S_Rucksack_ODST_Radio;
class OPTRE_ILCS_Rucksack_Black;
class OPTRE_ANPRC_521_Green;

class STB86_M56S_Rucksack : MA_M56S_Rucksack {
	displayName = "[86th] Infantry Rucksack";
	dlc = DLC;
	author = AUTHOR;
	maximumLoad = 350;
	mass = 40;
};

class STB86_M56S_Rucksack_Heavy : STB86_M56S_Rucksack {
	displayName = "[86th] Heavy Rucksack";
	maximumLoad = 400;
	mass = 50;
};

class STB86_M56S_Rucksack_Medic : MA_M56S_Rucksack_Medic {
	displayName = "[86th] Medic Rucksack";
	dlc = DLC;
	author = AUTHOR;
	maximumLoad = 400;
	mass = 40;
};

class STB86_M56S_Rucksack_LR : MA_M56S_Rucksack_ODST_Radio {
	displayName = "[86th] LR Rucksack";
	dlc = DLC;
	author = AUTHOR;
	maximumLoad = 300;
	mass = 40;

	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";
	tf_subtype = "digital_lr";
	tf_range = 25000;
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio = 1;
};

class STB86_Crew_Rucksack : OPTRE_ILCS_Rucksack_Black{
	dlc = DLC;
	author = AUTHOR;
	displayName = "[86th] Crew Rucksack";
	model = "\OPTRE_unsc_units\army\rucksack.p3d";
	maximumLoad = 350;
	mass = 40;
	hiddenSelections[] =
	{
		"camo",
		"camo2",
		"B_Addons",
		"B_Medic",
		//"B_Radio"
	};
	hiddenSelectionsTextures[] =
	{
		"STB86_Auxiliary\Data\Backpacks\Crew_Rucksack.paa",
		""
	};
};

class STB86_LR_Pack : OPTRE_ANPRC_521_Green {
	dlc = DLC;
	author = AUTHOR;
	displayName = "[86th] AN/PRC-521";
	descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>25km Effective Range";
	picture = "\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
	maximumLoad = 300;
	mass = 50;
	hiddenSelections[] =
	{
		"camo",
		"camo2",
		"B_Medic",
		"B_Addons"
	};
	hiddenSelectionsTextures[] =
	{
		"optre_unsc_units\army\data\soft_backpack_co.paa",
		"STB86_Auxiliary\Data\Backpacks\Radio_Pack.paa"
	};
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";
	tf_subtype = "digital_lr";
	tf_range = 25000;
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio = 1;
};
class STB86_Virtual_LR : MA_M56S_Rucksack{
	displayName = "[86th] Concealed LR";
	dlc = DLC;
	author = AUTHOR;
	picture = "STB86_Auxiliary\Data\Empty.paa";
	model = "STB86_Auxiliary\Data\Empty.p3d";
	maximumLoad = 300;
	mass = 40;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";
	tf_subtype = "digital_lr";
	tf_range = 25000;
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio = 1;
}
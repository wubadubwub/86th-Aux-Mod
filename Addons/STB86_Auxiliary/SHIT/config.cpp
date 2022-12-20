class CfgPatches
{
	class Custom_Soc
	{
		author="AJ";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"OPTRE_Weapons"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class Single;
class CfgWeapons
{
	class OPTRE_M12_SOC;
	class OPTRE_M12_Suppressor;
	class ItemCore;
	class InventoryOpticsItem_Base_F;

	class 86_KitSoc: OPTRE_M12_SOC
    {
        author="AJ";
        displayName="[86th]AJ KIT-SOC";
        baseWeapon="86_KitSoc";
        hiddenSelectionsTextures[]=
        {
            "STB86_Auxiliary\shit\balls\M12_CO.paa",
			"STB86_Auxiliary\shit\balls\accessories_CO.paa",
			"STB86_Auxiliary\shit\balls\logos_CA.paa"

        };
    };
	
};

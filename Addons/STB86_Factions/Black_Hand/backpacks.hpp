class B_FieldPack_blk;
class B_TacticalPack_blk;
class STB86_BH_FieldPack_AA : B_FieldPack_blk {
	scope=1;
	scopeArsenal=1;
	class TransportMagazines {
		MAG_XX(OPTRE_M41_Twin_HEAT_Thermal,2);
	};
};
class STB86_BH_FieldPack_AT : B_FieldPack_blk {
	scope=1;
	scopeArsenal=1;
	class TransportMagazines {
		MAG_XX(OPTRE_M41_Twin_HEAT,2);
	};
};
class STB86_BH_TacticalPack_Medic : B_TacticalPack_blk {
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ITEM_XX(FirstAidKit, 3);
		ITEM_XX(Medikit, 1);
		ITEM_XX(OPTRE_Medkit, 1);
	};
};
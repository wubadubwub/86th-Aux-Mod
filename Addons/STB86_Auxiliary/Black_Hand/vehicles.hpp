
class O_LSV_02_unarmed_F;
class O_LSV_02_armed_F; // A3_Soft_F_Exp_LSV_02
class O_LSV_02_AT_F;

class O_truck_02_covered_F;
class O_truck_02_transport_F; // A3_Soft_F_Exp_Truck_02

class STB86_BH_Car_unarmed : O_LSV_02_unarmed_F {
	displayName = "Bastard Unarmed";
	editorSubcategory = "STB86_BH_Veh_SubCat";
	crew = "STB86_BH_Crewman";
    faction = "STB86_Black_Hand";
	class TextureSources
	{
		class STB86_BH_CH_Car_Tex
		{
			displayName="Black Hand";
			author="86th Dev team";
			textures[]=
			{
				"STB86_Auxiliary\Black_Hand\textures\veh\Car_01.paa",
				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
			};
			factions[]=
			{
				"STB86_Black_Hand"
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_Car_Tex",
		1
	};
	class Library
	{
		libTextDesc="The Black Hand's Transport Vehicle. Well known for how hard it is to drive, it has earned itself the nickname, 'Bastard'.";
	};
	hiddenSelectionsTextures[] = {"STB86_Auxiliary\Black_Hand\textures\veh\Car_01.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
};

class STB86_BH_Car_armed : O_LSV_02_armed_F {
	displayName = "Bastard Armed";
	editorSubcategory = "STB86_BH_Veh_SubCat";
	crew = "STB86_BH_Crewman";
    faction = "STB86_Black_Hand";
	class TextureSources
	{
		class STB86_BH_Car_Tex
		{
			displayName="Black Hand";
			author="86th Dev team";
			textures[]=
			{
				"STB86_Auxiliary\Black_Hand\textures\veh\Car_01.paa",
				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
			};
			factions[]=
			{
				"STB86_Black_Hand"
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_Car_Tex",
		1
	};
	class Library
	{
		libTextDesc="The Black Hand's Transport Vehicle. Well known for how hard it is to drive, it has earned itself the nickname, 'Bastard'.";
	};
	hiddenSelectionsTextures[] = {"STB86_Auxiliary\Black_Hand\textures\veh\Car_01.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
};

class STB86_BH_Car_AT : O_LSV_02_AT_F { 
	displayName = "Bastard AT";
	editorSubcategory = "STB86_BH_Veh_SubCat";
	crew = "STB86_BH_Crewman";
    faction = "STB86_Black_Hand";
	class TextureSources
	{
		class STB86_BH_Car_AT_Tex
		{
			displayName="Black Hand";
			author="86th Dev team";
			textures[]=
			{
				"STB86_Auxiliary\Black_Hand\textures\veh\Car_01.paa",
				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
				"STB86_Auxiliary\Black_Hand\textures\Square.paa",
				"STB86_Auxiliary\Black_Hand\textures\Square.paa"
			};
			factions[]=
			{
				"STB86_Black_Hand"
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_Car_AT_Tex",
		1
	};
	hiddenSelectionsTextures[] = {"STB86_Auxiliary\Black_Hand\textures\veh\Car_01.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa","STB86_Auxiliary\Black_Hand\textures\Square.paa","STB86_Auxiliary\Black_Hand\textures\Square.paa"};
	class Library
	{
		libTextDesc="The Black Hand's Transport Vehicle. Well known for how hard it is to drive, it has earned itself the nickname, 'Bastard'.";
	};
};

class STB86_BH_Truck : O_truck_02_transport_F {
	displayName = "Belly";
	editorSubcategory = "STB86_BH_Veh_SubCat";
	crew = "STB86_BH_Crewman";
    faction = "STB86_Black_Hand";
	class TextureSources
	{
		class STB86_BH_Truck_Tex
		{
			displayName="Black Hand";
			author="86th Dev team";
			textures[]=
			{
				"STB86_Auxiliary\Black_Hand\textures\veh\Truck_01.paa",
				"STB86_Auxiliary\Black_Hand\textures\veh\Truck_02.paa",
				"STB86_Auxiliary\Black_Hand\textures\Square.paa"
			};
			factions[]=
			{
				"STB86_Black_Hand"
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_Truck_Tex",
		1
	};
	hiddenSelectionsTextures[] = {"STB86_Auxiliary\Black_Hand\textures\veh\Truck_01.paa","STB86_Auxiliary\Black_Hand\textures\veh\Truck_02.paa","STB86_Auxiliary\Black_Hand\textures\Square.paa"};

};

class STB86_BH_Truck_Covered : O_truck_02_covered_F {
	displayName = "Belly Covered";
	editorSubcategory = "STB86_BH_Veh_SubCat";
	crew = "STB86_BH_Crewman";
    faction = "STB86_Black_Hand";
	class TextureSources
	{
		class STB86_BH_Truck_Tex
		{
			displayName="Black Hand";
			author="86th Dev team";
			textures[]=
			{
				"STB86_Auxiliary\Black_Hand\textures\veh\Truck_01.paa",
				"STB86_Auxiliary\Black_Hand\textures\veh\Truck_02.paa",
				"STB86_Auxiliary\Black_Hand\textures\Square.paa"
			};
			factions[]=
			{
				"STB86_Black_Hand"
			};
		};
	};
	textureList[]=
	{
		"STB86_BH_Truck_Tex",
		1
	};
	hiddenSelectionsTextures[] = {"STB86_Auxiliary\Black_Hand\textures\veh\Truck_01.paa","STB86_Auxiliary\Black_Hand\textures\veh\Truck_02.paa","STB86_Auxiliary\Black_Hand\textures\Square.paa"};

};
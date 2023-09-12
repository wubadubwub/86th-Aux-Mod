class CfgGroups {
	class East{
		class STB86_BH_Group{
			name = "Black Hand";
			scope = 2;
			scopeCurator = 2;

			class Infantry{
				name="Infantry";
				class STB86_BH_Sentry{
					name="Sentry";
					side = 0;
					faction = "STB86_Black_Hand";
					icon = "STB86_Factions\Black_hand\textures\icons\ico.paa";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_Grenadier";
						rank = "CORPORAL";
						position[] = {-1,-1,0};
					};
				};
				class STB86_BH_Fireteam : STB86_BH_Sentry {
					name="Fireteam";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_Team_Lead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_Medic";
						rank = "PRIVATE";
						position[] = {1,1,0};
					};
					class Unit2{
						side = 0;
						vehicle = "STB86_BH_Grenadier";
						rank = "PRIVATE";
						position[] = {-1,-1,0};
					};
					class Unit3{
						side = 0;
						vehicle = "STB86_BH_Rifleman";
						rank = "PRIVATE";
						position[] = {2,2,0};
					};
				};
				class STB86_BH_Inf_Squad : STB86_BH_Sentry {
					name="Squad";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_Team_Lead";
						rank = "CORPORAL";
						position[] = {1,1,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_Medic";
						rank = "PRIVATE";
						position[] = {-1,-1,0};
					};
					class Unit2{
						side = 0;
						vehicle = "STB86_BH_Grenadier";
						rank = "PRIVATE";
						position[] = {2,2,0};
					};
					class Unit3{
						side = 0;
						vehicle = "STB86_BH_Rifleman";
						rank = "PRIVATE";
						position[] = {-2,-2,0};
					};
					class Unit4{
						side = 0;
						vehicle = "STB86_BH_Team_Lead";
						rank = "CORPORAL";
						position[] = {3,3,0};
					};
					class Unit5{
						side = 0;
						vehicle = "STB86_BH_Autorifleman";
						rank = "PRIVATE";
						position[] = {-3,-3,0};
					};
					class Unit6{
						side = 0;
						vehicle = "STB86_BH_Grenadier";
						rank = "PRIVATE";
						position[] = {4,4,0};
					};
					class Unit7{
						side = 0;
						vehicle = "STB86_BH_Marksman";
						rank = "PRIVATE";
						position[] = {-4,-4,0};
					};
					class Unit8 {
						side = 0;
						vehicle = "STB86_BH_Squad_Lead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
				};
				class STB86_BH_Wpn_Squad : STB86_BH_Sentry { 
					name="Weapons Squad";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_Squad_Lead";
						rank = "SERGEANT";
						position[] = {1,1,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_SAW";
						rank = "PRIVATE";
						position[] = {-1,-1,0};
					};
					class Unit2{
						side = 0;
						vehicle = "STB86_BH_SAW";
						rank = "PRIVATE";
						position[] = {2,2,0};
					};
					class Unit3{
						side = 0;
						vehicle = "STB86_BH_Medic";
						rank = "PRIVATE";
						position[] = {-2,-2,0};
					};
					class Unit4{
						side = 0;
						vehicle = "STB86_BH_Rifleman";
						rank = "PRIVATE";
						position[] = {3,3,0};
					};
					class Unit5{
						side = 0;
						vehicle = "STB86_BH_Rifleman";
						rank = "PRIVATE";
						position[] = {-3,-3,0};
					};
					class Unit6{
						side = 0;
						vehicle = "STB86_BH_Rifleman";
						rank = "PRIVATE";
						position[] = {4,4,0};
					};
					class Unit7{
						side = 0;
						vehicle = "STB86_BH_Rifleman";
						rank = "PRIVATE";
						position[] = {-4,-4,0};
					};
				};
				class STB86_BH_Fireteam_AA : STB86_BH_Sentry {
					name="AA Fireteam";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_Team_Lead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_Autorifleman";
						rank = "PRIVATE";
						position[] = {1,1,0};
					};
					class Unit2{
						side = 0;
						vehicle = "STB86_BH_Grenadier";
						rank = "PRIVATE";
						position[] = {-1,-1,0};
					};
					class Unit3{
						side = 0;
						vehicle = "STB86_BH_AA";
						rank = "PRIVATE";
						position[] = {2,2,0};
					};
				};
				class STB86_BH_Fireteam_AT : STB86_BH_Sentry {
					name="AT Fireteam";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_Team_Lead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_Autorifleman";
						rank = "PRIVATE";
						position[] = {1,1,0};
					};
					class Unit2{
						side = 0;
						vehicle = "STB86_BH_Grenadier";
						rank = "PRIVATE";
						position[] = {-1,-1,0};
					};
					class Unit3{
						side = 0;
						vehicle = "STB86_BH_AT";
						rank = "PRIVATE";
						position[] = {2,2,0};
					};
				};
				class STB86_BH_Snr_Team : STB86_BH_Sentry {
					name="Sniper Team";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_Sniper";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_Sniper";
						rank = "PRIVATE";
						position[] = {1,1,0};
					};
				};
			};
			class Motorized{
				name="Motorized";
				class STB86_BH_Bastard_Team{
					name="Bastard Team";
					side = 0;
					faction = "STB86_Black_Hand";
					icon = "STB86_Factions\Black_hand\textures\icons\ico.paa";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_Team_Lead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_Medic";
						rank = "PRIVATE";
						position[] = {1,1,0};
					};
					class Unit2{
						side = 0;
						vehicle = "STB86_BH_Grenadier";
						rank = "PRIVATE";
						position[] = {2,2,0};
					};
					class Unit3{
						side = 0;
						vehicle = "STB86_BH_Rifleman";
						rank = "PRIVATE";
						position[] = {-2,-2,0};
					};
					class Unit4{
						side = 0;
						vehicle = "STB86_BH_Car_armed";
						rank = "PRIVATE";
						position[] = {-4,-4,0};
					};
				};
				class STB86_BH_Belly_Squad {
					name="Belly Squad";
					side = 0;
					faction = "STB86_Black_Hand";
					icon = "STB86_Factions\Black_hand\textures\icons\ico.paa";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_Team_Lead";
						rank = "CORPORAL";
						position[] = {1,1,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_Medic";
						rank = "PRIVATE";
						position[] = {-1,-1,0};
					};
					class Unit2{
						side = 0;
						vehicle = "STB86_BH_Grenadier";
						rank = "PRIVATE";
						position[] = {2,2,0};
					};
					class Unit3{
						side = 0;
						vehicle = "STB86_BH_Rifleman";
						rank = "PRIVATE";
						position[] = {-2,-2,0};
					};
					class Unit4{
						side = 0;
						vehicle = "STB86_BH_Team_Lead";
						rank = "CORPORAL";
						position[] = {3,3,0};
					};
					class Unit5{
						side = 0;
						vehicle = "STB86_BH_Autorifleman";
						rank = "PRIVATE";
						position[] = {-3,-3,0};
					};
					class Unit6{
						side = 0;
						vehicle = "STB86_BH_Grenadier";
						rank = "PRIVATE";
						position[] = {4,4,0};
					};
					class Unit7{
						side = 0;
						vehicle = "STB86_BH_Marksman";
						rank = "PRIVATE";
						position[] = {-4,-4,0};
					};
					class Unit8 {
						side = 0;
						vehicle = "STB86_BH_Squad_Lead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit9 {
						side = 0;
						vehicle = "STB86_BH_Truck_Covered";
						rank = "PRIVATE";
						position[] = {-6,-6,0};
					};
				};
			};
		};

		class STB86_BH_CH_Group{
			name = "BH Chosen";
			scope = 2;
			scopeCurator = 2;

			class Infantry{
				name="Infantry";
				class STB86_BH_CH_Sentry{
					name = "Sentry";
					side = 0;
					faction = "STB86_Black_Hand";
					icon = "STB86_Factions\Black_hand\textures\icons\ico.paa";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_CH_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_CH_Grenadier";
						rank = "CORPORAL";
						position[] = {-1,-1,0};
					};
				};
				class STB86_BH_CH_Inf_Squad{
					name = "Infantry Squad";
					side = 0;
					faction = "STB86_Black_Hand";
					icon = "STB86_Factions\Black_hand\textures\icons\ico.paa";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_CH_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_CH_Medic";
						rank = "CORPORAL";
						position[] = {-1,-1,0};
					};
					class Unit2{
						side = 0;
						vehicle = "STB86_BH_CH_Rifleman";
						rank = "PRIVATE";
						position[] = {-2,-2,0};
					};
					class Unit3{
						side = 0;
						vehicle = "STB86_BH_CH_Rifleman";
						rank = "PRIVATE";
						position[] = {-3,-3,0};
					};
					class Unit4{
						side = 0;
						vehicle = "STB86_BH_CH_TL";
						rank = "SERGEANT";
						position[] = {1,-1,0};
					};
					class Unit5{
						side = 0;
						vehicle = "STB86_BH_CH_Rifleman";
						rank = "PRIVATE";
						position[] = {2,-2,0};
					};
					class Unit6{
						side = 0;
						vehicle = "STB86_BH_CH_AT";
						rank = "PRIVATE";
						position[] = {3,-3,0};
					};
					class Unit7{
						side = 0;
						vehicle = "STB86_BH_CH_Grenadier";
						rank = "PRIVATE";
						position[] = {4,-4,0};
					};
				};
				class STB86_BH_CH_Wpn_Squad{
					name = "Weapons Squad";
					side = 0;
					faction = "STB86_Black_Hand";
					icon = "STB86_Factions\Black_hand\textures\icons\ico.paa";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_CH_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_CH_Medic";
						rank = "CORPORAL";
						position[] = {-1,-1,0};
					};
					class Unit2{
						side = 0;
						vehicle = "STB86_BH_CH_SAW_Gunner";
						rank = "PRIVATE";
						position[] = {-2,-2,0};
					};
					class Unit3{
						side = 0;
						vehicle = "STB86_BH_CH_Rifleman";
						rank = "PRIVATE";
						position[] = {-3,-3,0};
					};
					class Unit4{
						side = 0;
						vehicle = "STB86_BH_CH_TL";
						rank = "SERGEANT";
						position[] = {1,-1,0};
					};
					class Unit5{
						side = 0;
						vehicle = "STB86_BH_CH_Rifleman";
						rank = "PRIVATE";
						position[] = {2,-2,0};
					};
					class Unit6{
						side = 0;
						vehicle = "STB86_BH_CH_AT";
						rank = "PRIVATE";
						position[] = {3,-3,0};
					};
					class Unit7{
						side = 0;
						vehicle = "STB86_BH_CH_Grenadier";
						rank = "PRIVATE";
						position[] = {4,-4,0};
					};
				};
				class STB86_BH_CH_Snr_Team{
					name = "Sniper Team";
					side = 0;
					faction = "STB86_Black_Hand";
					icon = "STB86_Factions\Black_hand\textures\icons\ico.paa";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_CH_Marksman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_CH_Marksman";
						rank = "CORPORAL";
						position[] = {-1,-1,0};
					};
				};
				class STB86_BH_CH_FT{
					name = "Fireteam";
					side = 0;
					faction = "STB86_Black_Hand";
					icon = "STB86_Factions\Black_hand\textures\icons\ico.paa";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_CH_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_CH_Medic";
						rank = "CORPORAL";
						position[] = {-1,-1,0};
					};
					class Unit2{
						side = 0;
						vehicle = "STB86_BH_CH_Rifleman";
						rank = "PRIVATE";
						position[] = {-2,-2,0};
					};
					class Unit3{
						side = 0;
						vehicle = "STB86_BH_CH_Rifleman";
						rank = "PRIVATE";
						position[] = {-3,-3,0};
					};
				}
				class STB86_BH_CH_AA_Ft{
					name = "Fireteam (AA)";
					side = 0;
					faction = "STB86_Black_Hand";
					icon = "STB86_Factions\Black_hand\textures\icons\ico.paa";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_CH_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_CH_Rifleman";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2{
						side = 0;
						vehicle = "STB86_BH_CH_AA";
						rank = "PRIVATE";
						position[] = {2,-2,0};
					};
					class Unit3{
						side = 0;
						vehicle = "STB86_BH_CH_Grenadier";
						rank = "PRIVATE";
						position[] = {3,-3,0};
					};
				};
				class STB86_BH_CH_Devastator_Team{
					name = "Devastator Team";
					side = 0;
					faction = "STB86_Black_Hand";
					icon = "STB86_Factions\Black_hand\textures\icons\ico.paa";
					class Unit0{
						side = 0;
						vehicle = "STB86_BH_CH_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side = 0;
						vehicle = "STB86_BH_CH_Medic";
						rank = "CORPORAL";
						position[] = {-1,-1,0};
					};
					class Unit2{
						side = 0;
						vehicle = "STB86_BH_CH_Grenadier";
						rank = "PRIVATE";
						position[] = {-2,-2,0};
					};
					class Unit3{
						side = 0;
						vehicle = "STB86_BH_CH_Devastator";
						rank = "PRIVATE";
						position[] = {-3,-3,0};
					};
				}
			};
		};
	};
};
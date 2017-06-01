class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
	class civ_secondcar {
		side = "civ";
		conditions = "license_civ_driver";
		vehicles[] = {
			{ "CUP_C_Skoda_Blue_CIV", { 30000, 15000, -1 } },
			{ "CUP_C_Datsun_Covered", { 30000, 15000, -1 } },
			{ "CUP_C_UAZ_UNARMED_TK_CIV", { 30000, 15000, -1 } },
			{ "CUP_C_LR_Transport_CTK", { 30000, 15000, -1 } }		
		};
	};

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { 30000, 15000, -1 } },
            { "C_Truck_02_transport_F", { 60000, 30000, -1 } },
            { "C_Truck_02_covered_F", { 65000, 32500, -1 } },
            { "B_Truck_01_transport_F", { "", "", 120000 } },
            { "O_Truck_03_transport_F", { "", "", 120000 } },
            { "O_Truck_03_covered_F", { "", "", 125000 } },
            { "B_Truck_01_box_F", { "", "", 250000 } },
            { "O_Truck_03_device_F", { "", "", 300000 } },
            { "C_Van_01_fuel_F", { "", "", 45000 } },
            { "I_Truck_02_fuel_F", { "", "", 160000 } },
            { "B_Truck_01_fuel_F", { "", "", 200000 } }
        };
    };

	class civ_highcarshop {
		side = "civ";
		vehicles[] = {
			{ "ivory_c",{ 75000, 100000, -1 } },
			{ "ivory_gt500",{ 112000, 75000, -1 } },
			{ "ivory_lfa",{ 135000, 150000, -1 } },
			{ "ivory_elise",{ 125000, 62500, -1 } },
			{ "ivory_supra_topsecret",{ 90000, 45000, -1 } }
		};
	};

	class civ_medcarshop {
		side = "civ";
		vehicles[] = {
			{ "ivory_isf",{ 0, 0, -1 } },
			{ "ivory_190e",{ 0, 0, -1 } },
			{ "ivory_rs4",{ 0, 0, -1 } },
			{ "ivory_supra",{ 0, 0, -1 } },
			{ "ivory_wrx",{ 0, 0, -1 } },
			{ "ivory_m3",{ 0, 0, -1 } },
			{ "ivory_e36",{ 0, 0, -1 } },
			{ "ivory_r34",{ 0, 0, -1 } },
			{ "ivory_gti",{ 0, 0, -1 } },
			{ "ivory_suburban",{ 0, 0, -1 } },
			{ "cup_c_octavia_civ",{ 0, 0, -1 } },
			{ "cup_c_golf4_black_civ",{ 0, 0, -1 } }
		};
	};

	class civ_lowtruck {
		side = "civ";
		vehicles[] = {
			{ "CUP_C_V3S_Covered_TKC",{ 40000, 20000, -1 } },
			{ "CUP_C_Ural_Civ_01",{ 60000, 30000, -1 } },
			{ "CUP_B_T810_Unarmed_CZ_DES",{ 90000, 45000, -1 } },
			{ "C_Truck_02_covered_F",{ 100000, 50000, -1 } }
		};
	};

	class civ_hightruck {
		side = "civ";
		vehicles[] = {
			{ "CUP_B_MTVR_USA",{ 180000, 90000, -1 } },
			{ "O_Truck_03_covered_F",{ 220000, 110000, -1 } },
			{ "B_T_Truck_01_transport_F",{ 250000, 125000, -1 } }
		};
	};

	class pmc_carlvl1 {
		side = "civ";
		vehicles[] = {
			{ "Zorak_bmw_x6m",{ 6000, 3000, -1 } },
			{ "Faisal_Youkun2015_PD",{ 9000, 4500, -1 } }
		};
	};

	class pmc_car {
		side = "civ";
		vehicles[] = {
			{ "Zorak_bmw_x6m",{ 6000, 3000, -1 } },
			{ "CUP_B_T810_Unarmed_CZ_DES",{ 10000, 5000, -1 } },
			{ "UK3CB_BAF_LandRover_Snatch_Sand_A",{ 10000, 5000, -1 } },
			{ "UK3CB_BAF_LandRover_WMIK_HMG_Sand_A",{ 15000, 7500, -1 } },
			{ "Faisal_Youkun2015_PD",{ 9000, 4500, -1 } }
		};
	};

	class pmc_heli {
		side = "civ";
		vehicles[] = {
			{ "NH90",{ 25000, 12500, -1 } },
			{ "CUP_B_MH60S_USMC",{ 30000, 15000, -1 } },
			{ "NH90Armed",{ 35000, 17500, -1 } }
		};
	};

	class pmc_plane {
		side = "civ";
		vehicles[] = {
			{ "CUP_B_C130J_Cargo_USMC",{ 80000, 40000, -1 } }
		};
	};

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "CUP_C_MI6T_RU", { 1800000, 1700000, -1 } },
			{ "CUP_C_Mi17_Civilian_RU",{ 800000, 700000, -1 } },
			{ "CUP_O_AN2_TK",{ 150000, 75000, -1 } },
			{ "CUP_O_C47_SLA",{ 200000, 100000, -1 } },
			{ "CUP_C_Cessna_172_CIV",{ 75000, 35000, -1 } },
        };
    };


    class reb_car {
        side = "civ";
        vehicles[] = {
            { "CUP_I_Datsun_PK_TK_Random", { 105000, 75000, -1 } },
            { "CUP_O_UAZ_Unarmed_TKA", { 3000, 1500, -1 } },
            { "CUP_O_UAZ_MG_TKA", { 150000, 75000, -1 } },
            { "CUP_O_Ural_TKA", { 60000, 30000, -1 } },
            { "CUP_O_LR_Transport_TKM", { 5000, 2500, -1 } }
        };
    };

	class reb_air {
		side = "civ";
		vehicles[] = {
			{ "CUP_O_Su25_TKA",{ 11000000, 9000000, -1 } },
			{ "CUP_O_Mi17_TK",{ 1800000, 1600000, -1 } },
			{ "CUP_O_SU34_AGM_CSAT",{ 36000000, 32000000, -1 } }
		};
	};
	
	class reb_tank {
		side = "civ";
		vehicles[] = {
			{ "CUP_I_T34_TK_GUE",{ 6000000, 3000000, -1 } },
			{ "CUP_I_T55_TK_GUE",{ 8000000, 4000000, -1 } },
			{ "CUP_O_T72_CSAT",{ 12000000, 6000000, -1 } },
			{ "CUP_O_T90_RU",{ 15000000, 7500000, -1 } }
		};
	};

    class med_air_hs {
        side = "med";
        vehicles[] = {
			{ "CUP_I_UH60L_Unarmed_FFV_MEV_Racs",{ 5000, 2500, 3 } }
        };
    };

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "Jonzie_Ambulance",{ "life_mediclevel", "SCALAR", 1 } },
			{ "ivory_suburban_ems",{ "life_mediclevel", "SCALAR", 3 } }
		};
	};

    class un_shop {
        side = "med";
        vehicles[] = {
			{ "CUP_I_UAZ_Unarmed_UN",{ "life_mediclevel", "SCALAR", 1 } },
			{ "UK3CB_BAF_LandRover_Soft_UN_A",{ "life_mediclevel", "SCALAR", 2 } },
			{ "UK3CB_BAF_LandRover_Amb_UN_A",{ "life_mediclevel", "SCALAR", 3 } },
			{ "UK3CB_BAF_LandRover_Hard_UN_A",{ "life_mediclevel", "SCALAR", 3 } },
			{ "CUP_I_Ural_UN",{ "life_mediclevel", "SCALAR", 3 } },
			{ "CUP_I_M113_UN",{ "life_mediclevel", "SCALAR", 4 } },
			{ "CUP_O_BMP2_ZU_TKA",{ "life_mediclevel", "SCALAR", 5 } },
			{ "CUP_I_BMP2_UN",{ "life_mediclevel", "SCALAR", 5 } }
		};
    };

	class un_shopheli {
		side = "med";
		vehicles[] = {
			{ "CUP_B_UH1Y_GUNSHIP_USMC",{ "life_mediclevel", "SCALAR", 4 } },
			{ "CUP_I_Mi17_UN",{ "life_mediclevel", "SCALAR", 3 } }
		};
	};


	// Our car shop used for the entity at TPD HQ. For more info about this syntax ASK 13TH!
	class tpd_car {
		side = "cop";
		vehicles[] = {
			{ "ivory_isf_marked",{ "life_coplevel", "SCALAR", 1 } },
			{ "ivory_suburban_marked",{ "life_coplevel", "SCALAR", 1 } },
			{ "ivory_evox_marked",{ "life_coplevel", "SCALAR", 4 } },
			{ "ivory_m3_marked",{ "life_coplevel", "SCALAR", 5 } },
			{ "ivory_rs4_marked",{ "life_coplevel", "SCALAR", 4 } },
			{ "ivory_wrx_marked",{ "life_coplevel", "SCALAR", 4 } },
			{ "class ivory_isf_slicktop",{ "life_coplevel", "SCALAR", 4 } },
			{ "ivory_suburban_slicktop",{ "life_coplevel", "SCALAR", 5 } },
			{ "ivory_evox_slicktop",{ "life_coplevel", "SCALAR", 6 } },
			{ "ivory_m3_slicktop",{ "life_coplevel", "SCALAR", 7 } },
			{ "ivory_rs4_slicktop",{ "life_coplevel", "SCALAR", 8 } },
			{ "ivory_wrx_slicktop",{ "life_coplevel", "SCALAR", 8 } },
			{ "ivory_isf_unmarked",{ "life_coplevel", "SCALAR", 9 } },
			{ "ivory_suburban_unmarked",{ "life_coplevel", "SCALAR", 9 } },
			{ "ivory_evox_unmarked",{ "life_coplevel", "SCALAR", 10 } },
			{ "ivory_m3_unmarked",{ "life_coplevel", "SCALAR", 11 } },
			{ "ivory_rs4_unmarked",{ "life_coplevel", "SCALAR", 12 } },
			{ "ivory_wrx_unmarked",{ "life_coplevel", "SCALAR", 12 } }
		};
	};


	//Standard altis life vehicles... You can Delete but not advised!
	class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 1 } },
            { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "B_MRAP_01_hmg_F", { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "life_coplevel", "SCALAR", -2 } },
            { "B_Heli_Transport_01_F", { "life_coplevel", "SCALAR", 3 } },
			{ "B_Plane_CAS_01_F", { "life_coplevel", "SCALAR", 8 } }
        };
    };

	class tmp_helicopter {
		side = "cop";
		vehicles[] = {
			{ "CUP_B_UH1Y_UNA_USMC",{ "life_coplevel", "SCALAR", 7 } },
			{ "CUP_B_UH60M_US",{ "life_coplevel", "SCALAR", 8 } }
		};
	};

	class tmp_planes {
		side = "cop";
		vehicles[] = {
			{ "CUP_O_C130J_TKA",{ "life_coplevel", "SCALAR", 10 } },
			{ "CUP_O_SU34_TAK",{ "life_coplevel", "SCALAR", 10 } },
			{ "CUP_O_SU34_LGB_CSAT",{ "life_coplevel", "SCALAR", 10 } }
		};
	};
	
	class tmp_ground {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F",{ "", "", -1 } },
			{ "B_Heli_Transport_01_F",{ "life_coplevel", "SCALAR", 3 } }
		};
	};


	class nato_air {
		side = "cop";
		vehicles[] = {
			{ "CUP_B_F35B_AA_BAF",{ 30000, 30000, -1 } },
			{ "B_Plane_Fighter_01_Stealth_F",{ "", "", -1 } },
			{ "B_Plane_Fighter_01_F",{ "", "", -1 } },
			{ "CUP_B_AV8B_MK82_USMC",{ "", "", -1 } }
		};
	};

	class nato_ground {
		side = "cop";
		vehicles[] = {
			{ "CUP_B_HMMWV_Unarmed_USA",{ "", "", 12000 } },
			{ "CUP_B_HMMWV_Crows_M2_USA",{ "", "", 12000 } },
			{ "CUP_B_HMMWV_M2_GPK_USA",{ "", "", 12000 } },
			{ "CUP_B_T72_CZ",{ "", "", 14000 } },
			{ "CUP_B_Challenger2_2CS_BAF",{ "", "", 18000 } },
			{ "CUP_B_Challenger2_Sand_CTRG",{ "", "", 21000 } },
			{ "CUP_B_Challenger2_2CD_BAF",{ "", "", 30000 } }
		};
	};

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", 5000 } },
            { "C_Boat_Civil_01_police_F", { "", "", 7000 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", { "", "", 12000 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

	//civ air

	class CUP_C_Mi17_Civilian_RU {
		vItemSpace = 375;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 800000;
		textures[] = {};
	};

	class CUP_C_MI6T_RU {
		vItemSpace = 425;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 1800000;
		textures[] = {};
	};


	//

	//medic

	class ivory_suburban_ems {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 0;
		textures[] = {};
	};

	class Jonzie_Ambulance {
		vItemSpace = 100;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 0;
		textures[] = {};
	};

	class CUP_I_UH60L_Unarmed_FFV_MEV_Racs {
		vItemSpace = 100;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 0;
		textures[] = {};
	};

	//end of medic

	//rebel cars

	class CUP_O_LR_Transport_TKM {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 5000;
		textures[] = {};
	};

	class CUP_O_Ural_TKA {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 60000;
		textures[] = {};
	};

	class CUP_B_UAZ_MG_TKA {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 155000;
		textures[] = {};
	};

	class CUP_B_UAZ_Unarmed_TKA {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 4500;
		textures[] = {};
	};

	class CUP_I_Datsun_PK_TK_Random {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 105000;
		textures[] = {};
	};

	class CUP_O_Mi17_TK {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 1000000;
		textures[] = {};
	};
	 
	 class CUP_O_UAZ_Unarmed_TKA {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 3000;
		textures[] = {};
	};

	 class CUP_O_UAZ_MG_TKA {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 150000;
		textures[] = {};
	};

	//end of rebel cars


	// PMC

	class UK3CB_BAF_LandRover_Snatch_Sand_A {
		vItemSpace = 10;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 10000;
		textures[] = {};
	};

	class UK3CB_BAF_LandRover_WMIK_HMG_Sand_A {
		vItemSpace = 10;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 15000;
		textures[] = {};
	};

	class NH90 {
		vItemSpace = 10;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 25000;
		textures[] = {};
	};

	class CUP_B_MH60S_USMC {
		vItemSpace = 10;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 30000;
		textures[] = {};
	};

	class NH90Armed {
		vItemSpace = 50;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 35000;
		textures[] = {};
	};

	class CUP_B_C130J_Cargo_USMC {
		vItemSpace = 400;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 80000;
		textures[] = {};
	};

	class Zorak_bmw_x6m {
		vItemSpace = 10;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 6000;
		textures[] = {};
	};

	class Faisal_Youkun2015_PD {
		vItemSpace = 10;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 9000;
		textures[] = {};
	};

	class CUP_B_T810_Unarmed_CZ_DES {
		vItemSpace = 10;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 10000;
		textures[] = {};
	};


	//end of pmc

	//un

	class CUP_I_BMP2_UN {
		vItemSpace = 15;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 3750000;
		textures[] = {};
	};

	class CUP_O_BMP2_ZU_TKA {
		vItemSpace = 15;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 3500000;
		textures[] = {};
	};

	class CUP_B_UH1Y_GUNSHIP_USMC {
		vItemSpace = 15;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 6000000;
		textures[] = {};
	};

	class CUP_I_M113_UN {
		vItemSpace = 15;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 155000;
		textures[] = {};
	};

	class CUP_I_Mi17_UN {
		vItemSpace = 15;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 45000;
		textures[] = {};
	};

	class CUP_I_Ural_UN {
		vItemSpace = 15;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 22500;
		textures[] = {};
	};

	class UK3CB_BAF_LandRover_Hard_UN_A {
		vItemSpace = 15;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 16200;
		textures[] = {};
	};

	class UK3CB_BAF_LandRover_Amb_UN_A {
		vItemSpace = 15;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 15000;
		textures[] = {};
	};

	class UK3CB_BAF_LandRover_Soft_UN_A {
		vItemSpace = 15;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 12500;
		textures[] = {};
	};

	class CUP_I_UAZ_Unarmed_UN {
		vItemSpace = 15;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 11000;
		textures[] = {};
	};

	//end of un


	//tmp air

	class CUP_B_UH1Y_UNA_USMC {
		vItemSpace = 140;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 240000;
		textures[] = {};
	};

	class CUP_B_UH60M_US {
		vItemSpace = 140;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 225000;
		textures[] = {};
	};

	class CUP_B_MV22_USMC_RAMPGUN {
		vItemSpace = 400;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 15000000;
		textures[] = {};
	};

	//end of air

	//nato ground

	class CUP_B_HMMWV_M2_GPK_USA {
		vItemSpace = 45;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class CUP_B_HMMWV_Crows_M2_USA {
		vItemSpace = 45;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class CUP_B_HMMWV_Unarmed_USA {
		vItemSpace = 45;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class CUP_B_Challenger2_2CS_BAF {
		vItemSpace = 0;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class CUP_B_Challenger2_Sand_CTRG {
		vItemSpace = 0;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class CUP_B_Challenger2_2CD_BAF {
		vItemSpace = 0;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class CUP_B_T72_CZ {
		vItemSpace = 0;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};


	//

	//nato air
	class B_Plane_Fighter_01_Stealth_F {
		vItemSpace = 0;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class CUP_B_F35B_AA_BAF {
		vItemSpace = 0;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class B_Plane_Fighter_01_F {
		vItemSpace = 0;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class CUP_B_AV8B_MK82_USMC {
		vItemSpace = 0;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};



	//end air

	//un ground

	class CUP_O_GAZ_Vodnik_MedEvac_RU {
		vItemSpace = 25;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class CUP_I_BMP2_AMB_UN {
		vItemSpace = 25;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class CUP_I_M113_Med_UN {
		vItemSpace = 25;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class CUP_B_HMMWV_Ambulance_USA {
		vItemSpace = 25;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	//end un ground


	//un air
	class CUP_B_UH1Y_MEV_USMC {
		vItemSpace = 100;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	class CUP_I_Mi17_VIV_UN {
		vItemSpace = 100;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = -1;
		textures[] = {};
	};

	//end of un air
	
	//rebel air

	class CUP_O_Su25_TKA {
		vItemSpace = 0;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 11000000;
		textures[] = {};
	};

	class CUP_O_Mi17_TK {
		vItemSpace = 0;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 1800000;
		textures[] = {};
	};

	class CUP_O_SU34_AGM_CSAT {
		vItemSpace = 0;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 36000000;
		textures[] = {};
	};

	// end of rebel air

	// rebel ground

	class CUP_I_T34_TK_GUE {
		vItemSpace = 25;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 6000000;
		textures[] = {};
	};

	class CUP_I_T55_TK_GUE {
		vItemSpace = 25;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 8000000;
		textures[] = {};
	};

	class CUP_O_T72_CSAT {
		vItemSpace = 25;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 12000000;
		textures[] = {};
	};

	class CUP_O_T90_RU {
		vItemSpace = 25;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 15000000;
		textures[] = {};
	};

	//end of rebel ground

	//civ air

	class CUP_C_Cessna_172_CIV {
		vItemSpace = 125;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 75000;
		textures[] = {};
	};

	class CUP_O_C47_SLA {
		vItemSpace = 250;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 200000;
		textures[] = {};
	};

	class CUP_O_AN2_TK {
		vItemSpace = 225;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 150000;
		textures[] = {};
	};

	//end of civ air

	//Medium End Car Dealer

	class ivory_isf {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 40000;
		textures[] = {};
	};

	class ivory_190e {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 15000;
		textures[] = {};
	};

	class ivory_rs4 {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 50000;
		textures[] = {};
	};

	class ivory_supra {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 90000;
		textures[] = {};
	};

	class ivory_wrx {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 30000;
		textures[] = {};
	};

	class ivory_m3 {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 60000;
		textures[] = {};
	};

	class ivory_e36 {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 25000;
		textures[] = {};
	};

	class ivory_r34 {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 50000;
		textures[] = {};
	};


	class ivory_gti {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 20000;
		textures[] = {};
	};


	class ivory_suburban {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 40000;
		textures[] = {};
	};

	class cup_c_octavia_civ {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 20000;
		textures[] = {};
	};

	class cup_c_golf4_black_civ {
		vItemSpace = -1;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 7000;
		textures[] = {};
	};

	//End of car dealer

	//High End Car dealer

	class ivory_c {
		vItemSpace = 18;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 75000;
		textures[] = {};
	};

	class ivory_gt500 {
		vItemSpace = 22;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 112000;
		textures[] = {};
	};

	class ivory_supra_topsecret {
		vItemSpace = 38;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 120000;
		textures[] = {};
	};

	class ivory_lfa {
		vItemSpace = 23;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 135000;
		textures[] = {};
	};

	class ivory_elise {
		vItemSpace = 15;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 125000;
		textures[] = {};
	};

	//End of car dealer



	//Expensive Truck Dealer


	class B_T_Truck_01_transport_F {
		vItemSpace = 345;
		licenses[] = { { "trucking" },{ "" },{ "" },{ "" } };
		price = 250000;
		textures[] = {};
	};

	class O_Truck_03_covered_F {
		vItemSpace = 265;
		licenses[] = { { "trucking" },{ "" },{ "" },{ "" } };
		price = 220000;
		textures[] = {};
	};

	class CUP_B_MTVR_USA {
		vItemSpace = 225;
		licenses[] = { { "trucking" },{ "" },{ "" },{ "" } };
		price = 180000;
		textures[] = {};
	};

	// End of Expensive Truck Dealer

	//Cheap Truck Dealer

	class C_Truck_02_covered_F {
		vItemSpace = 185;
		licenses[] = { { "trucking" },{ "" },{ "" },{ "" } };
		price = 100000;
		textures[] = {};
	};

	class CUP_C_Ural_Civ_01 {
		vItemSpace = 140;
		licenses[] = { { "trucking" },{ "" },{ "" },{ "" } };
		price = 60000;
		textures[] = {};
	};

	class CUP_C_V3S_Covered_TKC {
		vItemSpace = 125;	
		licenses[] = { { "trucking" },{ "" },{ "" },{ "" } };
		price = 40000;
		textures[] = {};
	};

	//End of Cheap Truck Dealer


	class CUP_C_Skoda_Blue_CIV {
		vItemSpace = 22;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 1500;
		textures[] = {};
	};


	class CUP_C_Datsun_Covered {
		vItemSpace = 24;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};


	class CUP_C_UAZ_UNARMED_TK_CIV {
		vItemSpace = 22;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 3000;
		textures[] = {};
	};


	class CUP_C_LR_Transport_CTK {
		vItemSpace = 32;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 5000;
		textures[] = {};
	};


	class ivory_isf_marked {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_suburban_marked {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_evox_marked {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_m3_marked {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_rs4_marked {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_wrx_marked {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_suburban_slicktop {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_isf_slicktop {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_evox_slicktop {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_m3_slicktop {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_rs4_slicktop {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_wrx_slicktop {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_isf_unmarked {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_suburban_unmarked {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_m3_unmarked {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_rs4_unmarked {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};

	class ivory_wrx_unmarked {
		vItemSpace = 75;
		licenses[] = { { "" },{ "" },{ "" },{ "" } };
		price = 2000;
		textures[] = {};
	};


    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };



    class C_Hatchback_01_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };
};

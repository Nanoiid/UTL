/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Firearms Store";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "CUP_hgun_Compact", "", 12000, -1 },
            { "CUP_hgun_Glock17", "", 17500, -1 },
            { "CUP_hgun_Colt1911", "", 18000, -1 },
            { "CUP_hgun_M9", "", 15000, -1 },
            { "CUP_hgun_MicroUzi", "", 18500, -1 },
            { "CUP_hgun_SA61", "", 19000, -1 },
            { "CUP_hgun_TaurusTracker455", "", 17500, -1 },
            { "CUP_hgun_TaurusTracker455_gold", "", 38500, -1 }
        };
        mags[] = {
            { "CUP_20Rnd_B_765x17_Ball_M", "", 25 },
            { "CUP_30Rnd_9x19_UZI", "", 50 },
            { "CUP_15Rnd_9x19_M9", "", 45 },
            { "CUP_7Rnd_45ACP_1911", "", 45 },
            { "CUP_17Rnd_9x19_glock17", "", 45 },
            { "CUP_10Rnd_9x19_Compact", "", 45 },
            { "CUP_6Rnd_45ACP_M", "", 45 },
            { "CUP_7Rnd_45ACP_1911", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Rebel Gun's";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "CUP_arifle_AK107", "", 90000, -1 },
            { "CUP_arifle_AK47", "", 120000, -1 },
            { "CUP_arifle_AKS_Gold", "", 150000, -1 },
            { "CUP_srifle_CZ550", "", 150000, -1 },
            { "CUP_srifle_L129A1_HG", "", 100000, -1 },
            { "CUP_arifle_RPK74_45", "", 160000, -1 },
			{ "CUP_srifle_SVD", "", 200000, -1 },
			{ "CUP_lmg_PKM", "", 160000, -1 },
			{ "CUP_srifle_CZ750", "", 160000, -1 },
			{ "CUP_lmg_UK59", "", 160000, -1 },
			{ "CUP_launch_RPG7V", "", 360000, -1 },
			{ "CUP_hgun_SA61", "", 160000, -1 },
			{ "CUP_hgun_Colt1911", "", 16000, -1 },
			{ "CUP_hgun_Glock17", "", 16000, -1 }
        };
        mags[] = {
            { "CUP_6Rnd_HE_GP25_M", "", 300 },
            { "CUP_30Rnd_545x39_AK_M", "", 275 },
            { "CUP_30Rnd_762x39_AK47_M", "", 500 },
            { "CUP_5x_22_LR_17_HMR_M", "", 500 },
            { "CUP_5Rnd_127x108_KSVK_M", "", 500 },
            { "CUP_20Rnd_762x51_L129_M", "", 500 },
            { "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "", 500 },
            { "30Rnd_556x45_Stanag", "", 500 },
			{ "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "", 500 },
			{ "CUP_10Rnd_762x54_SVD_M", "", 500 },
			{ "CUP_5x_22_LR_17_HMR_M", "", 125 },
			{ "CUP_50Rnd_UK59_762x54R_Tracer", "", 125 },
			{ "CUP_10Rnd_762x51_CZ750_Tracer", "", 125 },
			{ "CUP_PG7V_M", "", 125 },
			{ "CUP_20Rnd_B_765x17_Ball_M", "", 125 },
			{ "CUP_7Rnd_45ACP_1911", "", 125 },
			{ "CUP_17Rnd_9x19_glock17", "", 125 }
        };
        accs[] = {
        };
    };

    class mormont {
        name = "Al Qaeda";
        side = "civ";
        license = "mormont";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "CUP_srifle_M110", "", 1500, 500 },
            { "CUP_arifle_MG36", "", 2500, -1 },
            { "CUP_arifle_RPK74", "", 4500, -1 },
            { "CUP_arifle_M4A1_desert", "", 9500, -1 }
        };
        mags[] = {
            { "100Rnd_580x42_Mag_F", "", 25 },
			{ "CUP_20Rnd_762x51_B_M110", "", 25 },
            { "CUP_100Rnd_556x45_BetaCMag", "", 50 },
            { "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "", 45 },
            { "CUP_30Rnd_556x45_Stanag", "", 75 }
        };
        accs[] = {
        };
    };


	class blackwater {
		name = "Black Water";
		side = "civ";
		license = "blackwater";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "CUP_srifle_M110", "", 1500, 500 },
			{ "CUP_arifle_MG36", "", 2500, -1 },
			{ "CUP_arifle_RPK74", "", 4500, -1 },
			{ "CUP_arifle_M4A1_desert", "", 9500, -1 }
		};
		mags[] = {
			{ "100Rnd_580x42_Mag_F", "", 25 },
			{ "CUP_20Rnd_762x51_B_M110", "", 25 },
			{ "CUP_100Rnd_556x45_BetaCMag", "", 50 },
			{ "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "", 45 },
			{ "CUP_30Rnd_556x45_Stanag", "", 75 }
		};
		accs[] = {
		};
	};

	class pmclvl44 {
		name = "PMC High Rank Weapon Shop";
		side = "civ";
		license = "mormont";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "CUP_arifle_XM8_Railed", "", 15000, 500 },
			{ "CUP_hgun_Phantom", "", 25000, -1 },
			{ "UK3CB_BAF_L119A1_FG", "", 45000, -1 },
			{ "UK3CB_BAF_L128A1", "", 95000, -1 },
			{ "UK3CB_BAF_L115A3", "", 15000, 500 },
			{ "UK3CB_BAF_L110A3", "", 25000, -1 },
			{ "UK3CB_BAF_L115A3", "", 45000, -1 },
			{ "CUP_M72A6_M", "", 95000, -1 },
			{ "CUP_launch_M72A6_Special", "", 95000, -1 }
		};
		mags[] = {
			{ "CUP_30Rnd_556x45_G36", "", 25 },
			{ "CUP_18Rnd_9x19_Phantom", "", 25 },
			{ "UK3CB_BAF_338_5Rnd", "", 50 },
			{ "UK3CB_BAF_556_30Rnd", "", 45 },
			{ "UK3CB_BAF_12G_Slugs", "", 75 },
			{ "UK3CB_BAF_12G_Pellets", "", 50 }
		};
		accs[] = {
		};
	};

	class pmclvl11 {
		name = "PMC Weapon Shop";
		side = "civ";
		license = "mormont";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "CUP_arifle_XM8_Railed", "", 10500, 500 },
			{ "CUP_hgun_Phantom", "", 12500, -1 }
		};
		mags[] = {
			{ "CUP_30Rnd_556x45_G36", "", 25 },
			{ "CUP_18Rnd_9x19_Phantom", "", 25 }
		};
		accs[] = {
		};
	};

	class mormontatt {
		name = "Mormont Attachment";
		side = "civ";
		license = "mormont";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 100 },
			{ "optic_Arco", "", 100 },
			{ "CUP_SOFLAM", "", 100 },
			{ "CUP_LRTV", "", 100 },
			{ "CUP_Mxx_camo", "", 100 },
			{ "CUP_Mxx_camo_half", "", 100 },
			{ "CUP_optic_MAAWS_Scope", "", 100 },
			{ "CUP_optic_SMAW_Scope", "", 100 },
			{ "CUP_optic_PSO_1", "", 100 },
			{ "CUP_optic_PSO_3", "", 100 },
			{ "CUP_optic_Kobra", "", 100 },
			{ "CUP_optic_GOSHAWK", "", 100 },
			{ "CUP_optic_NSPU", "", 100 },
			{ "CUP_optic_PechenegScope", "", 100 },
			{ "CUP_muzzle_PBS4", "", 100 },
			{ "CUP_muzzle_PB6P9", "", 100 },
			{ "CUP_muzzle_Bizon", "", 100 },
			{ "CUP_acc_Glock17_Flashlight", "", 100 },
			{ "CUP_muzzle_snds_M9", "", 100 },
			{ "CUP_muzzle_snds_MicroUzi", "", 100 },
			{ "CUP_SVD_camo_g", "", 100 },
			{ "CUP_SVD_camo_g_half", "", 100 },
			{ "CUP_SVD_camo_d", "", 100 },
			{ "CUP_SVD_camo_d_half", "", 100 },
			{ "optic_ACO_grn", "", 3500 },
			{ "optic_Holosight", "", 3600 },
			{ "optic_Hamr", "", 7500 },
			{ "acc_flashlight", "", 1000 }
		};
		mags[] = {

		};
		accs[] = {

		};
	};

	class pmcatt {
		name = "PMC Attachment";
		side = "civ";
		license = "lvl1";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "RKSL_optic_LDS", "", 750 }
		};
		mags[] = {

		};
		accs[] = {

		};
	};

	class pmcatt2 {
		name = "PMC Attachment";
		side = "civ";
		license = "lvl4";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "RKSL_optic_LDS", "", 750 },
			{ "RKSL_optic_RMR_MS19", "", 750 },
			{ "CUP_optic_ZDDot", "", 750 },
			{ "RKSL_optic_PMII_312_sunshade", "", 750 }
		};
		mags[] = {

		};
		accs[] = {

		};
	};

	class gang {
		name = "Hideout Armament";
		side = "civ";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "hgun_Rook40_F", "", 15000, 500 },
			{ "hgun_Pistol_heavy_02_F", "", 12500, -1 },
			{ "hgun_ACPC2_F", "", 14000, -1 },
			{ "hgun_PDW2000_F", "", 19500, -1 }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "6Rnd_45ACP_Cylinder", "", 50 },
			{ "9Rnd_45ACP_Mag", "", 45 },
			{ "30Rnd_9x21_Mag", "", 75 }
		};
		accs[] = {
			{ "optic_ACO_grn_smg", "", 950 }
		};
	};

    //Basic Shops
    class genstore {
        name = "Takistan General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 },
			{ "VSM_Goggles", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

	class genstore_pmc {
		name = "Takistan General Store";
		side = "civ";
		license = "lvl1";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "Binocular", "", 150, -1 },
			{ "ItemGPS", "", 100, 45 },
			{ "ItemMap", "", 50, 35 },
			{ "ItemCompass", "", 50, 25 },
			{ "ItemWatch", "", 50, -1 },
			{ "FirstAidKit", "", 150, 65 },
			{ "NVGoggles", "", 2000, 980 },
			{ "Chemlight_red", "", 300, -1 },
			{ "Chemlight_yellow", "", 300, 50 },
			{ "Chemlight_green", "", 300, 50 },
			{ "Chemlight_blue", "", 300, 50 },
			{ "VSM_Goggles", "", 300, 50 },
			{ "Laserdesignator", "", 300, 50 }
		};
		mags[] = {};
		accs[] = {};
	};

	class genstore_pmclvl4 {
		name = "Takistan General Store";
		side = "civ";
		license = "lvl4";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "Binocular", "", 150, -1 },
			{ "ItemGPS", "", 100, 45 },
			{ "ItemMap", "", 50, 35 },
			{ "ItemCompass", "", 50, 25 },
			{ "ItemWatch", "", 50, -1 },
			{ "FirstAidKit", "", 150, 65 },
			{ "NVGoggles", "", 2000, 980 },
			{ "Chemlight_red", "", 300, -1 },
			{ "Chemlight_yellow", "", 300, 50 },
			{ "Chemlight_green", "", 300, 50 },
			{ "Chemlight_blue", "", 300, 50 },
			{ "VSM_Goggles", "", 300, 50 },
			{ "Laserdesignator", "", 300, 50 }
		};
		mags[] = {};
		accs[] = {};
	};

    class f_station_store {
        name = "Takistan Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Recruit Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "HandGrenade_Stone", "Flashbang", 100, -1 },
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, "call life_coplevel >= 1" },
            { "NVGoggles", "", 500, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 }
        };
    };



    class cop_patrol {
        name = "Private Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a Recruit" };
        items[] = {
          { "HandGrenade_Stone", "Flashbang", 100, -1 },
          { "Binocular", "", 750, -1 },
          { "ItemGPS", "", 500, 45 },
          { "ItemMap", "", 250, 35 },
          { "ItemCompass", "", 250, 25 },
          { "ItemWatch", "", 250, -1 },
          { "FirstAidKit", "", 750, 65 },
          { "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, },
          { "CUP_arifle_M4A1_black", "", 1000, 200, },
          { "NVGoggles", "", 500, 980 }
        };
        mags[] = {
          { "16Rnd_9x21_Mag", "", 25 },
          { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
          { "CUP_30Rnd_556x45_Stanag", "", 65 }
        };
        accs[] = {
          { "UK3CB_BAF_TA31F", "", 650 }
        };
    };

	class pvfc_patrol {
		name = "Private First Class Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 2, "You must be a Constable" };
		items[] = {
      { "HandGrenade_Stone", "Flashbang", 100, -1 },
      { "Binocular", "", 750, -1 },
      { "ItemGPS", "", 500, 45 },
      { "ItemMap", "", 250, 35 },
      { "ItemCompass", "", 250, 25 },
      { "ItemWatch", "", 250, -1 },
      { "FirstAidKit", "", 750, 65 },
      { "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, },
      { "CUP_arifle_M4A1_black", "", 1000, 200, },
      { "CUP_arifle_M16A4_Base", "", 1200, 200, },
      { "NVGoggles", "", 500, 980 }
		};
		mags[] = {
      { "16Rnd_9x21_Mag", "", 25 },
      { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
      { "CUP_30Rnd_556x45_Stanag", "", 65 }
		};
		accs[] = {
      { "UK3CB_BAF_TA31F", "", 650 },
      { "CUP_optic_CompM2_Black", "", 650 }
		};
	};

	class corp_patrol {
		name = "Corporal Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant" };
		items[] = {
			{ "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "Binocular", "", 750, -1 },
			{ "ItemGPS", "", 500, 45 },
			{ "ItemMap", "", 250, 35 },
			{ "ItemCompass", "", 250, 25 },
			{ "ItemWatch", "", 250, -1 },
			{ "FirstAidKit", "", 750, 65 },
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, },
			{ "CUP_arifle_M4A1_black", "", 1000, 200, },
			{ "CUP_arifle_M16A4_Base", "", 1200, 200, },
			{ "UK3CB_BAF_L91A1", "", 1400, 200, },
			{ "NVGoggles", "", 500, 980 }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
			{ "CUP_30Rnd_556x45_Stanag", "", 45 },
			{ "UK3CB_BAF_9_30Rnd", "", 65 }
		};
		accs[] = {
			{ "UK3CB_BAF_TA31F", "", 650 },
			{ "CUP_optic_TrijiconRx01_black", "", 650 },
			{ "CUP_optic_CompM2_Black", "", 650 }
		};
	};

	class cop_att {
		name = "Attachment shop!";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 1, "You must be a cop" };
		items[] = {
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 100 },
			{ "optic_Arco", "", 100 },
			{ "CUP_SOFLAM", "", 100 },
			{ "CUP_LRTV", "", 100 },
			{ "CUP_optic_MAAWS_Scope", "", 100 },
			{ "CUP_optic_SMAW_Scope", "", 100 },
			{ "CUP_optic_PSO_1", "", 100 },
			{ "CUP_optic_PSO_3", "", 100 },
			{ "CUP_optic_Kobra", "", 100 },
			{ "CUP_optic_GOSHAWK", "", 100 },
			{ "CUP_optic_NSPU", "", 100 },
			{ "CUP_optic_PechenegScope", "", 100 },
			{ "CUP_muzzle_PBS4", "", 100 },
			{ "CUP_muzzle_PB6P9", "", 100 },
			{ "CUP_muzzle_Bizon", "", 100 },
			{ "CUP_acc_Glock17_Flashlight", "", 100 },
			{ "CUP_muzzle_snds_M9", "", 100 },
			{ "CUP_muzzle_snds_MicroUzi", "", 100 }
		};
		mags[] = {
		};
		accs[] = {
		};
	};


	class cop_ss {
		name = "Sergeant Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 4, "You must be a Sergant" };
		items[] = {
			{ "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "Binocular", "", 750, -1 },
			{ "ItemGPS", "", 500, 45 },
			{ "ItemMap", "", 250, 35 },
			{ "ItemCompass", "", 250, 25 },
			{ "ItemWatch", "", 250, -1 },
			{ "FirstAidKit", "", 750, 65 },
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, },
			{ "CUP_arifle_M4A1_black", "", 1000, 200, },
			{ "CUP_arifle_M16A4_Base", "", 1200, 200, },
			{ "UK3CB_BAF_L91A1", "", 1400, 200, },
			{ "UK3CB_BAF_L129A1_FGrip", "", 1400, 200, },
			{ "NVGoggles", "", 500, 980 }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
			{ "CUP_30Rnd_556x45_Stanag", "", 45 },
			{ "UK3CB_BAF_762_L42A1_20Rnd", "", 45 },
			{ "UK3CB_BAF_9_30Rnd", "", 65 }
		};
		accs[] = {
			{ "UK3CB_BAF_TA31F", "", 650 },
			{ "CUP_optic_TrijiconRx01_black", "", 650 },
			{ "UK3CB_BAF_LLM_IR_Black", "", 650 },
			{ "RKSL_optic_PMII_312_sunshade", "", 650 },
			{ "CUP_optic_CompM2_Black", "", 650 }
		};
	};

	class cop_sfc {
		name = "Staff Sergeant Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 5, "You must be a Staff Sergeant" };
		items[] = {
			{ "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "Binocular", "", 750, -1 },
			{ "ItemGPS", "", 500, 45 },
			{ "ItemMap", "", 250, 35 },
			{ "ItemCompass", "", 250, 25 },
			{ "ItemWatch", "", 250, -1 },
			{ "FirstAidKit", "", 750, 65 },
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, },
			{ "CUP_arifle_M4A1_black", "", 1000, 200, },
			{ "CUP_arifle_M16A4_Base", "", 1200, 200, },
			{ "UK3CB_BAF_L91A1", "", 1400, 200, },
			{ "UK3CB_BAF_L129A1_FGrip", "", 1400, 200, },
			{ "NVGoggles", "", 500, 980 }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
			{ "CUP_30Rnd_556x45_Stanag", "", 45 },
			{ "UK3CB_BAF_762_L42A1_20Rnd", "", 45 },
			{ "UK3CB_BAF_9_30Rnd", "", 65 }
		};
		accs[] = {
			{ "UK3CB_BAF_TA31F", "", 650 },
			{ "CUP_optic_TrijiconRx01_black", "", 650 },
			{ "UK3CB_BAF_LLM_IR_Black", "", 650 },
			{ "RKSL_optic_PMII_312_sunshade", "", 650 },
			{ "CUP_optic_CompM2_Black", "", 650 }
		};
	};

	class cop_ms {
		name = "Master Sergeant Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 6, "You must be Superintendent" };
		items[] = {
			{ "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "Binocular", "", 750, -1 },
			{ "ItemGPS", "", 500, 45 },
			{ "ItemMap", "", 250, 35 },
			{ "ItemCompass", "", 250, 25 },
			{ "ItemWatch", "", 250, -1 },
			{ "FirstAidKit", "", 750, 65 },
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, },
			{ "CUP_arifle_M4A1_black", "", 1000, 200, },
			{ "CUP_arifle_M16A4_Base", "", 1200, 200, },
			{ "UK3CB_BAF_L91A1", "", 1400, 200, },
			{ "UK3CB_BAF_L129A1_FGrip", "", 1400, 200, },
			{ "NVGoggles", "", 500, 980 }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
			{ "CUP_30Rnd_556x45_Stanag", "", 45 },
			{ "UK3CB_BAF_762_L42A1_20Rnd", "", 45 },
			{ "UK3CB_BAF_9_30Rnd", "", 65 }
		};
		accs[] = {
			{ "UK3CB_BAF_TA31F", "", 650 },
			{ "CUP_optic_TrijiconRx01_black", "", 650 },
			{ "UK3CB_BAF_LLM_IR_Black", "", 650 },
			{ "RKSL_optic_PMII_312_sunshade", "", 650 },
			{ "CUP_optic_CompM2_Black", "", 650 }
		};	
	};

	class cop_l {
		name = "lieutenant Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 7, "You must be Chief Superintendent" };
		items[] = {
			{ "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "Binocular", "", 750, -1 },
			{ "ItemGPS", "", 500, 45 },
			{ "ItemMap", "", 250, 35 },
			{ "ItemCompass", "", 250, 25 },
			{ "ItemWatch", "", 250, -1 },
			{ "FirstAidKit", "", 750, 65 },
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, },
			{ "CUP_arifle_M4A1_black", "", 1000, 200, },
			{ "CUP_arifle_M16A4_Base", "", 1200, 200, },
			{ "UK3CB_BAF_L91A1", "", 1400, 200, },
			{ "UK3CB_BAF_L129A1_FGrip", "", 1400, 200, },
			{ "NVGoggles", "", 500, 980 }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
			{ "CUP_30Rnd_556x45_Stanag", "", 45 },
			{ "UK3CB_BAF_762_L42A1_20Rnd", "", 45 },
			{ "UK3CB_BAF_9_30Rnd", "", 65 }
		};
		accs[] = {
			{ "UK3CB_BAF_TA31F", "", 650 },
			{ "CUP_optic_TrijiconRx01_black", "", 650 },
			{ "UK3CB_BAF_LLM_IR_Black", "", 650 },
			{ "RKSL_optic_PMII_312_sunshade", "", 650 },
			{ "CUP_optic_CompM2_Black", "", 650 }
		};
	};

	class cop_c {
		name = "captain Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 8, "You must be Commander" };
		items[] = {
			{ "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "Binocular", "", 750, -1 },
			{ "ItemGPS", "", 500, 45 },
			{ "ItemMap", "", 250, 35 },
			{ "ItemCompass", "", 250, 25 },
			{ "ItemWatch", "", 250, -1 },
			{ "FirstAidKit", "", 750, 65 },
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, },
			{ "CUP_arifle_M4A1_black", "", 1000, 200, },
			{ "CUP_arifle_M16A4_Base", "", 1200, 200, },
			{ "UK3CB_BAF_L91A1", "", 1400, 200, },
			{ "UK3CB_BAF_L129A1_FGrip", "", 1400, 200, },
			{ "NVGoggles", "", 500, 980 }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
			{ "CUP_30Rnd_556x45_Stanag", "", 45 },
			{ "UK3CB_BAF_762_L42A1_20Rnd", "", 45 },
			{ "UK3CB_BAF_9_30Rnd", "", 65 }
		};
		accs[] = {
			{ "UK3CB_BAF_TA31F", "", 650 },
			{ "CUP_optic_TrijiconRx01_black", "", 650 },
			{ "UK3CB_BAF_LLM_IR_Black", "", 650 },
			{ "RKSL_optic_PMII_312_sunshade", "", 650 },
			{ "CUP_optic_CompM2_Black", "", 650 }
		};
	};

	class cop_m {
		name = "Major Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 9, "You must be Dep.Assist Commissioner" };
		items[] = {
			{ "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "Binocular", "", 750, -1 },
			{ "ItemGPS", "", 500, 45 },
			{ "ItemMap", "", 250, 35 },
			{ "ItemCompass", "", 250, 25 },
			{ "ItemWatch", "", 250, -1 },
			{ "FirstAidKit", "", 750, 65 },
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, },
			{ "CUP_arifle_M4A1_black", "", 1000, 200, },
			{ "CUP_arifle_M16A4_Base", "", 1200, 200, },
			{ "UK3CB_BAF_L91A1", "", 1400, 200, },
			{ "UK3CB_BAF_L129A1_FGrip", "", 1400, 200, },
			{ "NVGoggles", "", 500, 980 }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
			{ "CUP_30Rnd_556x45_Stanag", "", 45 },
			{ "UK3CB_BAF_762_L42A1_20Rnd", "", 45 },
			{ "UK3CB_BAF_9_30Rnd", "", 65 }
		};
		accs[] = {
			{ "UK3CB_BAF_TA31F", "", 650 },
			{ "CUP_optic_TrijiconRx01_black", "", 650 },
			{ "UK3CB_BAF_LLM_IR_Black", "", 650 },
			{ "RKSL_optic_PMII_312_sunshade", "", 650 },
			{ "CUP_optic_CompM2_Black", "", 650 }
		};
	};

	class cop_lc {
		name = "LC Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 10, "You must be Assistant Commissioner" };
		items[] = {
			{ "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "Binocular", "", 750, -1 },
			{ "ItemGPS", "", 500, 45 },
			{ "ItemMap", "", 250, 35 },
			{ "ItemCompass", "", 250, 25 },
			{ "ItemWatch", "", 250, -1 },
			{ "FirstAidKit", "", 750, 65 },
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, },
			{ "CUP_arifle_M4A1_black", "", 1000, 200, },
			{ "CUP_arifle_M16A4_Base", "", 1200, 200, },
			{ "UK3CB_BAF_L91A1", "", 1400, 200, },
			{ "UK3CB_BAF_L129A1_FGrip", "", 1400, 200, },
			{ "NVGoggles", "", 500, 980 }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
			{ "CUP_30Rnd_556x45_Stanag", "", 45 },
			{ "UK3CB_BAF_762_L42A1_20Rnd", "", 45 },
			{ "UK3CB_BAF_9_30Rnd", "", 65 }
		};
		accs[] = {
			{ "UK3CB_BAF_TA31F", "", 650 },
			{ "CUP_optic_TrijiconRx01_black", "", 650 },
			{ "UK3CB_BAF_LLM_IR_Black", "", 650 },
			{ "RKSL_optic_PMII_312_sunshade", "", 650 },
			{ "CUP_optic_CompM2_Black", "", 650 }
		};
	};

	class cop_colonel {
		name = "Colonel Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 11, "You must be Deputy Commissioner" };
		items[] = {
			{ "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "Binocular", "", 750, -1 },
			{ "ItemGPS", "", 500, 45 },
			{ "ItemMap", "", 250, 35 },
			{ "ItemCompass", "", 250, 25 },
			{ "ItemWatch", "", 250, -1 },
			{ "FirstAidKit", "", 750, 65 },
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, },
			{ "CUP_arifle_M4A1_black", "", 1000, 200, },
			{ "CUP_arifle_M16A4_Base", "", 1200, 200, },
			{ "UK3CB_BAF_L91A1", "", 1400, 200, },
			{ "UK3CB_BAF_L129A1_FGrip", "", 1400, 200, },
			{ "NVGoggles", "", 500, 980 }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
			{ "CUP_30Rnd_556x45_Stanag", "", 45 },
			{ "UK3CB_BAF_762_L42A1_20Rnd", "", 45 },
			{ "UK3CB_BAF_9_30Rnd", "", 65 }
		};
		accs[] = {
			{ "UK3CB_BAF_TA31F", "", 650 },
			{ "CUP_optic_TrijiconRx01_black", "", 650 },
			{ "UK3CB_BAF_LLM_IR_Black", "", 650 },
			{ "RKSL_optic_PMII_312_sunshade", "", 650 },
			{ "CUP_optic_CompM2_Black", "", 650 }
		};
	};

	class cop_lg {
		name = "LG";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 12, "You must be Commissioner" };
		items[] = {
			{ "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "Binocular", "", 750, -1 },
			{ "ItemGPS", "", 500, 45 },
			{ "ItemMap", "", 250, 35 },
			{ "ItemCompass", "", 250, 25 },
			{ "ItemWatch", "", 250, -1 },
			{ "FirstAidKit", "", 750, 65 },
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 1000, 200, },
			{ "CUP_arifle_M4A1_black", "", 1000, 200, },
			{ "CUP_arifle_M16A4_Base", "", 1200, 200, },
			{ "UK3CB_BAF_L91A1", "", 1400, 200, },
			{ "UK3CB_BAF_L129A1_FGrip", "", 1400, 200, },
			{ "NVGoggles", "", 500, 980 }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
			{ "CUP_30Rnd_556x45_Stanag", "", 45 },
			{ "UK3CB_BAF_762_L42A1_20Rnd", "", 45 },
			{ "UK3CB_BAF_9_30Rnd", "", 65 }
		};
		accs[] = {
			{ "UK3CB_BAF_TA31F", "", 650 },
			{ "CUP_optic_TrijiconRx01_black", "", 650 },
			{ "UK3CB_BAF_LLM_IR_Black", "", 650 },
			{ "RKSL_optic_PMII_312_sunshade", "", 650 },
			{ "CUP_optic_CompM2_Black", "", 650 }
		};
	};



	//un store
	class med_1 {
		name = "U.N Private Shop!";
		side = "med";
		license = "UN";
		level[] = { "life_mediclevel", "SCALAR", 1, "You must be the appropriate level!" };
		items[] = {
			{ "CUP_hgun_Glock17", "", 1, -1 },
			{ "CUP_17Rnd_9x19_glock17", "", 1 },
			{ "CUP_HandGrenade_L109A2_HE", "", 1, -1 },
			{ "UK3CB_BAF_L85A2", "", 1, -1 },
			{ "UK3CB_BAF_556_30Rnd", "", 1 },
			{ "CUP_optic_CompM2_Black", "", 1, -1 },
			{ "UK3CB_BAF_Silencer_L85", "", 1, -1 },
			{ "CUP_optic_HoloBlack", "", 1, -1 }
		};
		mags[] = {
		};
		accs[] = {
		};
	};

	class med_2 {
		name = "U.N Corporal Shop!";
		side = "med";
		license = "UN";
		level[] = { "life_mediclevel", "SCALAR", 2, "You must be the appropriate level!" };
		items[] = {
			{ "UK3CB_BAF_L1A1", "", 1000, -1 },
			{ "UK3CB_BAF_762_20Rnd", "", 130 }
		};
		mags[] = {
		};
		accs[] = {
		};
	};


	class med_3 {
		name = "U.N Sergeant Shop!";
		side = "med";
		license = "UN";
		level[] = { "life_mediclevel", "SCALAR", 3, "You must be the appropriate level!" };
		items[] = {
			{ "UK3CB_BAF_L110A1", "", 1000, -1 },
			{ "UK3CB_BAF_556_100Rnd", "", 130 },
			{ "UK3CB_BAF_L110A1", "", 1000, -1 }
		};
		mags[] = {
		};
		accs[] = {
		};
	};

	class med_4 {
		name = "U.N Lieutenant Shop!";
		side = "med";
		license = "UN";
		level[] = { "life_mediclevel", "SCALAR", 4, "You must be the appropriate level!" };
		items[] = {
			{ "UK3CB_BAF_L115A3", "", 1000, -1 },
			{ "UK3CB_BAF_762_20Rnd", "", 130 },
			{ "optic_KHS_old", "", 130 },
			{ "RKSL_optic_PMII_312_sunshade", "", 130 }
		};
		mags[] = {
		};
		accs[] = {
		};
	};

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};

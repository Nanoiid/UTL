/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_5_F", "", 300, { "", "", -1 } },
            { "CUP_U_O_CHDKZ_Lopotev", "", 300, { "", "", -1 } },
            { "CUP_U_C_Rocker_01", "", 300, { "", "", -1 } },
            { "TRYK_U_denim_jersey_blu", "", 300, { "", "", -1 } },
            { "TRYK_U_denim_jersey_blk", "", 300, { "", "", -1 } },
            { "CUP_U_C_Suit_01", "", 300, { "", "", -1 } },
            { "U_I_G_Story_Protagonist_F", "", 300, { "", "", -1 } },
            { "TRYK_U_denim_hood_nc", "", 300, { "", "", -1 } },
            { "TRYK_U_denim_hood_blk", "", 300, { "", "", -1 } },
            { "TRYK_U_denim_hood_mc", "", 300, { "", "", -1 } },
            { "TRYK_U_denim_hood_blk", "", 300, { "", "", -1 } },
            { "TRYK_U_denim_hood_3c", "", 300, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_gry", "", 50, { "", "", -1 } },
            { "H_Bandanna_blu", "", 50, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 50, { "", "", -1 } },
            { "CUP_H_FR_BandanaGreen", "", 50, { "", "", -1 } },
            { "H_Bandanna_mcamo", "", 50, { "", "", -1 } },
            { "H_Bandanna_khk", "", 50, { "", "", -1 } },
            { "H_Bandanna_sgg", "", 50, { "", "", -1 } },
            { "H_Bandanna_sand", "", 50, { "", "", -1 } }

        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 20, { "", "", -1 } },
            { "G_Sport_Red", "", 20, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "UK3CB_BAF_V_HiVis", "", 10,{ "", "", -1 } },
			{ "UK3CB_BAF_V_Osprey_HiVis", "", 10,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_04", "", 10,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_06", "", 10,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_01", "", 10,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_05", "", 10,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_02", "", 10,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_03", "", 10,{ "", "", -1 } },
			{ "TRYK_V_Bulletproof_BL", "", 10,{ "", "", -1 } },
			{ "TRYK_V_Bulletproof_BLK", "", 10,{ "", "", -1 } },
			{ "TRYK_V_Bulletproof", "", 10,{ "", "", -1 } },
			{ "V_Press_F", "", 10,{ "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "VSM_OGA_carryall", "", 1000, { "", "", -1 } },
            { "VSM_OGA_OD_carryall", "", 1000, { "", "", -1 } },
            { "VSM_OGA_Backpack_Compact", "", 1000, { "", "", -1 } },
            { "VSM_OGA_OD_Backpack_Compact", "", 1500, { "", "", -1 } },
            { "VSM_OGA_Backpack_Kitbag", "", 1500, { "", "", -1 } },
            { "OGA_Backpack_Kitbag", "", 1500, { "", "", -1 } },
            { "VSM_OGA_OD_Backpack_Kitbag", "", 1500, { "", "", -1 } },
            { "UK3CB_BAF_B_Bergen_TAN_Rifleman_A", "", 1500, { "", "", -1 } },
            { "CUP_B_Bergen_BAF", "", 2500, { "", "", -1 } },
            { "UK3CB_BAF_B_Carryall_Arctic", "", 2500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 2500, { "", "", -1 } },
            { "UK3CB_BAF_B_Kitbag_Arctic", "", 3000, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack_BLK", "", 3000, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack_WH", "", 3000, { "", "", -1 } },
            { "TRYK_B_Carryall_blk", "", 4500, { "", "", -1 } },
            { "TRYK_B_Kitbag_blk", "", 4500, { "", "", -1 } },
            { "CUP_B_AssaultPack_Black", "", 6500, { "", "", -1 } }
        };
    };
	
	class tpd_cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0,{ "", "", -1 } },
			{ "CUP_U_C_Policeman_01", "Cop Uniform", 25,{ "life_coplevel", "SCALAR", 1 } },
			{ "CUP_U_B_CDF_DST_2", "Cop Uniform", 25,{ "life_coplevel", "SCALAR", 1 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0,{ "", "", -1 } },
			{ "UK3CB_BAF_H_Beret_PR", "", 25,{ "life_coplevel", "SCALAR", 3 } },
			{ "CUP_H_C_Policecap_01", "", 25,{ "life_coplevel", "SCALAR", 3 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0,{ "", "", -1 } },
			{ "G_Squares", "", 10,{ "", "", -1 } },
			{ "G_Shades_Blue", "", 20,{ "", "", -1 } },
			{ "G_Sport_Blackred", "", 20,{ "", "", -1 } },
			{ "G_Sport_Checkered", "", 20,{ "", "", -1 } },
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0,{ "", "", -1 } },
			{ "V_PlateCarrier2_blk", "", 200,{ "life_coplevel", "SCALAR", 3 } },
			{ "CUP_V_CDF_OfficerBelt", "", 200,{ "life_coplevel", "SCALAR", 3 } }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0,{ "", "", -1 } },
			{ "B_Carryall_cbr", "", 200,{ "", "", -1 } },
		};
	};
	class pmclvl4 {
		title = "STR_Shops_PMC_C";
		license = "lvl4";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0,{ "", "", -1 } },
			{ "VSM_OGA_Crye_SS_grey_tan_pants_Camo", "PMC Outfit", 1000,{ "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0,{ "", "", -1 } },
			{ "VSM_Shemagh_Glasses_OD", "PMC Helmet", 0,{ "", "", -1 } },
			{ "H_Cap_blk_ION", "PMC Helmet", 0,{ "", "", -1 } },
			{ "VSM_BackwardsHat_Peltor_ION", "PMC Helmet", 0,{ "", "", -1 } },
			{ "VSM_Bowman_cap_Tan", "PMC Helmet", 0,{ "", "", -1 } },
			{ "VSM_Bowman_cap_Tan", "PMC Helmet", 0,{ "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0,{ "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0,{ "", "", -1 } },
			{ "VSM_FAPC_Operator_OGA", "PMC Vest", 5000,{ "", "", -1 } },
			{ "VSM_OGA_tan_casual_Camo", "PMC Vest", 5000,{ "", "", -1 } },
			{ "VSM_CarrierRig_Operator_OGA", "PMC Vest", 5000,{ "", "", -1 } },
			{ "VSM_Mich2000_OGA", "PMC Vest", 5000,{ "", "", -1 } }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0,{ "", "", -1 } },
			{ "B_ViperHarness_hex_F", "Invisible Backpack", 0,{ "", "", -1 } }
		};
	};

	class pmclvl1 {
		title = "STR_Shops_PMC_C";
		license = "lvl1";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0,{ "", "", -1 } },
			{ "VSM_OGA_Crye_SS_grey_tan_pants_Camo", "PMC Outfit", 2000,{ "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0,{ "", "", -1 } },
			{ "VSM_Shemagh_Glasses_OD", "PMC Helmet", 0,{ "", "", -1 } },
			{ "H_Cap_blk_ION", "PMC Helmet", 0,{ "", "", -1 } },
			{ "VSM_BackwardsHat_Peltor_ION", "PMC Helmet", 0,{ "", "", -1 } },
			{ "VSM_Bowman_cap_Tan", "PMC Helmet", 0,{ "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0,{ "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0,{ "", "", -1 } },
			{ "VSM_OGA_tan_casual_Camo", "PMC Vest", 5000,{ "", "", -1 } },
			{ "VSM_CarrierRig_Operator_OGA", "PMC Vest", 5000,{ "", "", -1 } },
			{ "VSM_Mich2000_OGA", "PMC Vest", 5000,{ "", "", -1 } }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0,{ "", "", -1 } },
			{ "B_ViperHarness_hex_F", "Invisible Backpack", 0,{ "", "", -1 } }
		};
	};

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "CUP_U_C_Rescuer_01", "EMS Uniform", 0, { "life_mediclevel", "SCALAR", 9 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 0, { "life_mediclevel", "SCALAR", 9 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "life_mediclevel", "SCALAR", 9 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 0, { "life_mediclevel", "SCALAR", 9 } }
        };
    };


	class un_clothing {
		title = "UN_Clothing_Shop";
		license = "UN";
		side = "med";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0,{ "", "", -1 } },
			{ "UK3CB_BAF_U_CombatUniform_DDPM", "U.N Uniform", 0,{ "life_mediclevel", "SCALAR", 1 } },
			{ "UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve_RM", "Officer Uniform", 0,{ "life_mediclevel", "SCALAR", 4 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0,{ "", "", -1 } },
			{ "UK3CB_BAF_H_Beret_UN_Officer", "U.N Officer Beret", 0,{ "life_mediclevel", "SCALAR", 4 } },
			{ "UK3CB_BAF_H_Beret_UN_Officer_PRR", "U.N Beret", 0,{ "life_mediclevel", "SCALAR", 5 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0,{ "", "", -1 } },
			{ "G_Aviator", "Glasses", 0,{ "life_mediclevel", "SCALAR", 1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0,{ "", "", -1 } },
			{ "VSM_FAPC_Operator_AOR1", "U.N Vest", 0,{ "life_mediclevel", "SCALAR", 1 } }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0,{ "", "", -1 } },
			{ "B_Carryall_cbr", "Backpack", 0,{ "life_mediclevel", "SCALAR", 1 } }
		};
	};

	class mormont_clothing {
		title = "STR_Shops_C_Gang";
		license = "";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0,{ "", "", -1 } },
			{ "AOR1_TS_Camo", "", 750,{ "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0,{ "", "", -1 } },
			{ "H_HelmetB_light_sand", "", 1500,{ "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0,{ "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0,{ "", "", -1 } },
			{ "CUP_V_CDF_6B3_1_DST", "", 2500,{ "", "", -1 } }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0,{ "", "", -1 } },
			{ "CUP_B_GER_Pack_Tropentarn", "", 3000,{ "", "", -1 } }
		};
	};

	class blackwater_clothing {
		title = "STR_Shops_C_Gang";
		license = "blackwater";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0,{ "", "", -1 } },
			{ "CUP_U_C_Suit_02", "", 100,{ "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0,{ "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0,{ "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0,{ "", "", -1 } }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0,{ "", "", -1 } },
			{ "B_ViperHarness_hex_F", "", 2500,{ "", "", -1 } }
		};
	};

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "TRYK_ZARATAKI3", "", 5000, {"", "", -1} },
            { "TRYK_ZARATAKI2", "", 7500, { "", "", -1 } },
            { "TRYK_ZARATAKI", "", 11500, { "", "", -1 } },
            { "TRYK_U_B_AOR1_Rollup_CombatUniform", "", 15340, { "", "", -1 } },
            { "CUP_U_O_TK_MixedCamo", "", 15610, { "", "", -1 } },
            { "CUP_U_O_TK_Green", "", 17500, { "", "", -1 } },
			{ "CUP_U_O_TK_Officer", "", 11500,{ "", "", -1 } },
			{ "U_I_C_Soldier_Camo_F", "", 15340,{ "", "", -1 } },
			{ "UK3CB_BAF_U_Smock_DDPM", "", 15610,{ "", "", -1 } },
			{ "CUP_U_O_SLA_Desert", "", 17500,{ "", "", -1 } },
			{ "CUP_U_O_Partisan_TTsKO", "", 15610,{ "", "", -1 } },
			{ "CUP_U_O_TK_Ghillie_Top", "", 17500,{ "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_3_F", "", 15610,{ "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_5_F", "", 17500,{ "", "", -1 } },
			{ "Tiger_Camo_TShirt", "", 15610,{ "", "", -1 } },
			{ "Tiger_Camo_SS", "", 17500,{ "", "", -1 } },
			{ "OGA_Camo_SS", "", 15610,{ "", "", -1 } },
			{ "VSM_AOR1_Camo_TShirt", "", 17500,{ "", "", -1 } },
			{ "VSM_AOR1_od_shirt_Camo_SS", "", 15610,{ "", "", -1 } },
			{ "AOR1_Camo_TShirt", "", 17500,{ "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "VSM_FullShemagh_OD_pattern", "", 650, { "", "", -1 } },
            { "VSM_FullShemagh_Tan_pattern", "", 800, { "", "", -1 } },
            { "VSM_FullShemagh_OD", "", 850, { "", "", -1 } },
            { "VSM_FullShemagh_Tan", "", 850, { "", "", -1 } },
            { "CUP_H_RUS_6B27", "", 1200, { "", "", -1 } },
			{ "CUP_H_RUS_6B27_olive", "", 800,{ "", "", -1 } },
			{ "H_Shemag_olive", "", 850,{ "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850,{ "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 1200,{ "", "", -1 } },
			{ "CUP_H_SLA_Helmet", "", 800,{ "", "", -1 } },
			{ "CUP_H_TK_Helmet", "", 850,{ "", "", -1 } },
			{ "CUP_H_TK_Lungee", "", 850,{ "", "", -1 } },
			{ "CUP_H_TKI_Lungee_01", "", 1200,{ "", "", -1 } },
			{ "CUP_H_TKI_Lungee_03", "", 800,{ "", "", -1 } },
			{ "CUP_H_TKI_Lungee_04", "", 850,{ "", "", -1 } },
			{ "CUP_H_TKI_Lungee_06", "", 850,{ "", "", -1 } },
			{ "CUP_H_TKI_Pakol_1_02", "", 1200,{ "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "VSM_Shemagh_OD", "", 20, { "", "", -1 } },
            { "VSM_Shemagh_tan", "", 20, { "", "", -1 } },
            { "G_Bandanna_oli", "", 25, { "", "", -1 } },
            { "CUP_TK_NeckScarf", "", 25, { "", "", -1 } },
            { "CUP_FR_NeckScarf", "", 25, { "", "", -1 } },
            { "CUP_FR_NeckScarf2", "", 25, { "", "", -1 } },
            { "TRYK_bandana_g", "", 30, { "", "", -1 } },
            { "TRYK_kio_balaclava_ESS", "", 50, { "", "", -1 } },
            { "TRYK_Beard_Gr4", "", 125, { "", "", -1 } },
            { "TRYK_Beard_BW4", "", 150, { "", "", -1 } },
            { "TRYK_Beard4", "", 150, { "", "", -1 } },
            { "TRYK_Beard_BK4", "", 150, { "", "", -1 } },
            { "G_Aviator", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "CUP_V_CDF_6B3_1_DST", "", 4500, { "", "", -1 } },
            { "CUP_V_CDF_6B3_4_DST", "", 7500, { "", "", -1 } },
			{ "CUP_V_O_SLA_Flak_Vest02", "", 4500,{ "", "", -1 } },
			{ "CUP_V_CDF_6B3_1_Green", "", 7500,{ "", "", -1 } },
			{ "CUP_V_CDF_6B3_2_DST", "", 4500,{ "", "", -1 } },
			{ "CUP_V_CDF_6B3_2_Green", "", 7500,{ "", "", -1 } },
			{ "CUP_V_I_Guerilla_Jacket", "", 4500,{ "", "", -1 } },
			{ "CUP_V_B_Interceptor_Rifleman", "", 7500,{ "", "", -1 } },
			{ "V_HarnessOGL_brn", "", 4500,{ "", "", -1 } },
			{ "V_HarnessO_brn", "", 7500,{ "", "", -1 } },
			{ "TRYK_LOC_AK_chestrig_OD", "", 4500,{ "", "", -1 } },
			{ "TRYK_LOC_AK_chestrig_TAN", "", 7500,{ "", "", -1 } },
			{ "CUP_V_I_RACS_Carrier_Rig_2", "", 4500,{ "", "", -1 } },
			{ "UK3CB_BAF_V_PLCE_Webbing_Plate_DDPM", "", 7500,{ "", "", -1 } },
			{ "V_BandollierB_blk", "", 4500,{ "", "", -1 } },
			{ "V_BandollierB_cbr", "", 7500,{ "", "", -1 } },
			{ "V_BandollierB_rgr", "", 4500,{ "", "", -1 } },
			{ "V_BandollierB_khk", "", 7500,{ "", "", -1 } },
			{ "CUP_V_RUS_Smersh_1", "", 4500,{ "", "", -1 } },
			{ "CUP_V_O_Ins_Carrier_Rig_Light", "", 7500,{ "", "", -1 } },
			{ "CUP_V_O_Ins_Carrier_Rig_MG", "", 4500,{ "", "", -1 } },
			{ "V_TacChestrig_cbr_F", "", 7500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_04", "", 4500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_05", "", 7500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_02", "", 4500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_06", "", 7500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_03", "", 4500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_01", "", 7500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_04", "", 4500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_02", "", 7500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_03", "", 4500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_01", "", 7500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_04", "", 4500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_03", "", 7500,{ "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_01", "", 4500,{ "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "VSM_OGA_Backpack_Kitbag", "", 500, { "", "", -1 } },
            { "VSM_OGA_OD_Backpack_Kitbag", "", 2000, { "", "", -1 } },
            { "VSM_ProjectHonor_Backpack_Kitbag", "", 2000, { "", "", -1 } },
            { "CUP_B_GER_Pack_Tropentarn", "", 2000, { "", "", -1 } },
            { "UK3CB_BAF_B_Bergen_DDPM_JTAC_A", "", 2000, { "", "", -1 } },
            { "UK3CB_BAF_B_Bergen_DDPM_JTAC_H_A", "", 2000, { "", "", -1 } },
            { "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "", 2000, { "", "", -1 } },
            { "UK3CB_BAF_B_Bergen_DDPM_Rifleman_B", "", 2000, { "", "", -1 } },
            { "UK3CB_BAF_B_Bergen_DDPM_SL_A", "", 2500, { "", "", -1 } },
            { "UK3CB_BAF_B_Bergen_TAN_JTAC_A", "", 3500, { "", "", -1 } },
            { "UK3CB_BAF_B_Bergen_TAN_JTAC_H_A", "", 3500, { "", "", -1 } },
            { "UK3CB_BAF_B_Bergen_TAN_Rifleman_A", "", 3500, { "", "", -1 } },
            { "UK3CB_BAF_B_Bergen_TAN_Rifleman_B", "", 5000, { "", "", -1 } },
            { "UK3CB_BAF_B_Bergen_TAN_SL_A", "", 5000, { "", "", -1 } },
            { "UK3CB_BAF_B_Carryall_DDPM", "", 5000, { "", "", -1 } },
            { "UK3CB_BAF_B_Carryall_TAN", "", 6500, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack", "", 6500, { "", "", -1 } },
            { "CUP_B_USPack_Coyote", "", 6500, { "", "", -1 } }
        };
    };
};

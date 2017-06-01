/*
*    Format:
*        licenses: ARRAY (This is for limiting spawn to certain things)
*           0: License Name
*           1: License Check Type
*                false: If license isn't set
*                true: If license is set
*           Example:
*                licenses[] = { { "pilot", true }, { "rebel", false } }; //Shows up for players with pilot and without rebel license.
*
*        level: ARRAY (This is for limiting spawn to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL / INVERSE)
*                SCALAR: VALUE => VALUE
*                BOOL: VALUE EXISTS
*                EQUAL: VALUE == VALUE
*                INVERSE: VALUE <= VALUE
*            2: What to compare to (-1 = Check Disabled)
*
*/
class CfgSpawnPoints {
    class Civilian {
        class Kavala {
            displayName = "Rasman";
            spawnMarker = "civ_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "rebel", false } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Shukurkalay";
            spawnMarker = "civ_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Nagara";
            spawnMarker = "civ_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Sofia {
            displayName = "Ravanay";
            spawnMarker = "civ_spawn_4";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class RebelS {
            displayName = "Rebel Base";
			spawnMarker = "rebel_spawn";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };

		class PMC {
			displayName = "PMC Base";
			spawnMarker = "pmc_spawn";
			icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
			licenses[] = { { "lvl1", true } };
			level[] = { "", "", -1 };
		};

		class PMC2 {
			displayName = "PMC Base";
			spawnMarker = "pmc_spawn";
			icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
			licenses[] = { { "lvl4", true } };
			level[] = { "", "", -1 };
		};
		
		class MormontBase {
			displayName = "Al Qaeda Base";
			spawnMarker = "mormont_spawn";
			icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
			licenses[] = { { "mormont", true } };
			level[] = { "", "", -1 };
		};

		class blackblackbase {
			displayName = "Black Water Base";
			spawnMarker = "blackwater_spawn";
			icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
			licenses[] = { { "blackwater", true } };
			level[] = { "", "", -1 };
		};
    };


    class Cop {
        class Kavala {
            displayName = "Takistan Police HQ";
            spawnMarker = "cop_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };

    class Medic {
        class Kavala {
            displayName = "EMS Hospital";
            spawnMarker = "medic_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "life_mediclevel", "SCALAR", 9 };
        };

		class UN {
			displayName = "U.N HQ";
			spawnMarker = "medic_spawn_212";
			icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
			licenses[] = { { "UN", true } };
			level[] = { "life_mediclevel", "SCALAR", 1 };
		};
    };
};

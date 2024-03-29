##############################
# Country definition for SWE #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SWE
  name               = "Kingdom of Sweden"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 2159 # Stockholm
  manpower           = 10
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1320
  metal          = 660
  rare_materials = 330
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 150 }
    relation = { tag = FRA value = 80 }
    relation = { tag = GER value = -50 }
    relation = { tag = HOL value = 100 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
    relation = { tag = U05 value = 100 }
  }
  SpyInfo                = { country = "SWE" NumberOfSpies = 6 }

  nationalprovinces      = { 526 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167 }
  ownedprovinces         = { 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167 }
  controlledprovinces    = { 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4700 4710 4300 4310 4320 4330 4800 4810 4820 1910 1920 1930 1940 1950 1960 1970 1980 1830 1840 1850 1860 2860 2870 2880 2020 7600 7610 2620 2010 2630 2290 2300 2310 3210 3220 3230 2800 2450 21180 21190 21200 2810 2820 2510 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 5700 5710 5010 5020 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5060 5800 5080 5090 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3610 3620 3630 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 5470 3720 3730 3736 3740 3750 3900 3810 5600 5610 5620 5630 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 8010 8020 8040 8050 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 1070 1080 1090 1100 1250 1560 1570 1396 1360 1350 199130 1990 199100 1870 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 6
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 40001 } # Gustav V
  headofgovernment       = { type = 9 id = 40012 } # Per Albin Hansson
  foreignminister        = { type = 9 id = 40017 } # Richard J. Sandler
  armamentminister       = { type = 9 id = 40026 } # Ernst Wigforss
  ministerofsecurity     = { type = 9 id = 40037 } # Karl Schlyter
  ministerofintelligence = { type = 9 id = 40006 } # Carlos Adlercreutz
  chiefofstaff           = { type = 9 id = 40007 } # Oscar Nygren
  chiefofarmy            = { type = 9 id = 40008 } # Oscar Nygren
  chiefofnavy            = { type = 9 id = 40009 } # Charles de Champs
  chiefofair             = { type = 9 id = 40010 } # Torsten Friis

  landunit = {
    id       = { type = 29600 id = 1 }
    name     = "I. Milit? Omr?e"
    location = 2152
    division = {
      id             = { type = 29600 id = 2 }
      name           = "I. Milit? Omr?e"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 29600 id = 3 }
    name     = "III. Milit? Omr?e"
    location = 2153
    division = {
      id             = { type = 29600 id = 4 }
      name           = "III. Milit? Omr?e"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 7
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 29600 id = 5 }
    name     = "IV. Milit? Omr?e"
    location = 2159
    division = {
      id             = { type = 29600 id = 6 }
      name           = "IV. Milit? Omr?e"
      type           = infantry
      model          = 10
      extra          = engineer
      brigade_model  = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 29600 id = 7 }
    name     = "II. Milit? Omr?e"
    location = 2164
    division = {
      id             = { type = 29600 id = 8 }
      name           = "II. Milit? Omr?e"
      type           = infantry
      model          = 10
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 29600 id = 11 }
    name     = "VI. Milit? Omr?e"
    location = 2166
    division = {
      id             = { type = 29600 id = 12 }
      name           = "VI. Milit? Omr?e"
      type           = infantry
      model          = 10
      strength       = 45
    }
  }
  landunit = {
    id       = { type = 29600 id = 13 }
    name     = "VII. Milit? Omr?e"
    location = 2156
    division = {
      id             = { type = 29600 id = 14 }
      name           = "VII. Milit? Omr?e"
      type           = infantry
      model          = 10
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 29600 id = 39 }
    name     = "V. Milit? Omr?e"
    location = 2161
    division = {
      id             = { type = 29600 id = 40 }
      name           = "V. Milit? Omr?e"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }

  navalunit = {
    id       = { type = 29600 id = 15 }
    name     = "Kustflottan"
    location = 2159
    base     = 2159
    division = {
      id             = { type = 29600 id = 16 }
      name           = "HMS Sverige"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 29600 id = 17 }
      name           = "HMS Drottning Victoria"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 29600 id = 18 }
      name           = "HMS Gustav V"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 29600 id = 19 }
      name           = "HMS Clas Fleming"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 20 }
      name           = "HMS Gotland"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 29600 id = 21 }
      name           = "HMS Äran"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 22 }
      name           = "HMS Tapperheten"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 23 }
      name           = "HMS Wasa"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 24 }
      name           = "HMS Dristigheten"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 25 }
      name           = "1. Jagarflottiljen"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 29600 id = 26 }
      name           = "3. Jagarflottiljen"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 29600 id = 27 }
      name           = "4. Jagarflottiljen"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 29600 id = 28 }
    name     = "Ålandshavseskader"
    location = 2159
    base     = 2159
    division = {
      id             = { type = 29600 id = 29 }
      name           = "1. Tr?gflottiljen"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 30 }
      name           = "2. Jagarflottiljen"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 29600 id = 31 }
    name     = "G?eborgseskadern"
    location = 2153
    base     = 2153
    division = {
      id             = { type = 29600 id = 32 }
      name           = "HMS Manligheten"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 33 }
      name           = "5. Jagarflottiljen"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 29600 id = 34 }
    name     = "2nd Squadron"
    location = 2153
    base     = 2153
    division = {
      id             = { type = 29600 id = 35 }
      name           = "2. Ub?sflottiljen"
      type           = submarine
      model          = 3
    }
  }

  airunit = { 
    id       = { type = 29600 id = 36 }
    name     = "1a Flygk?en"
    location = 2159
    base     = 2159
    division = {
      id             = { type = 29600 id = 37 }
      name           = "1. Taktiska Bombflyggruppen"
      type           = tactical_bomber
      model          = 4
    }
    division = {
      id             = { type = 29600 id = 38 }
      name           = "1. Marinbombflyggruppen"
      type           = naval_bomber
      model          = 1
    }
  }
}

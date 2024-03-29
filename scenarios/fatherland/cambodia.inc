##############################
# Country definition for CMB #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CMB
  puppet             = U03
  control            = U03
  name               = "Kingdom of Cambodia"
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 MOB3 = 1 MOB4 = 1 } }
  capital            = 1400 # Phnom Penh
  manpower           = 55
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 5000
  oil            = 3000
  supplies       = 5000
  money          = 0
  transports     = 115
  escorts        = 36

  diplomacy = {
    relation = { tag = U01 value = 50 }
    relation = { tag = U03 value = 50 }
  }

  nationalprovinces      = { 1398 1400 1401 1402 }
  ownedprovinces         = { 1398 1400 1401 1402 }
  controlledprovinces    = { 1398 1400 1401 1402 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1560 1570 1580 1590 1670 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2290 2300 2310 2450 2510 2620 2630 2640 2646 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3490 3510 3520 3530 3540 3610 3620 3630 3640 3650 3660 3720 3730 3736 3740 3750 3760 3810 3820 3830 3900 3910 4010 4020 4120 4130 4220 4250 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4900 4910 4920 5010 5020 5030 5050 5060 5070 5080 5090 5190 5200 5310 5316 5320 5326 5327 5350 5360 5410 5416 5417 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5940 5960 5980 6390 6400 6410 6420 6430 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6900 6910 7550 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8500 8510 8520 8550 8560 8570 8600 8610 8900 8910 8920 8930 8940 8950 8960 8970 9010 9020 9030 12100 12110 12120 12130 13060 13070 13080 14000 14010 14020 14030 21180 21190 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81300 81310 81320 81330 81340 81350 81360 81370 81650 81700 81710 81720 81850 81860 81870 81880 82300 82310 82320 82500 82510 199130 }
  inventions             = { 3000027 3000028 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    freedom           = 5
    free_market       = 7
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 590013 } # Sisowath Monipong
  headofgovernment       = { type = 9 id = 590021 } # Sisowath Sirik Matak
  foreignminister        = { type = 9 id = 590025 } # Phan Sina
  armamentminister       = { type = 9 id = 590032 } # Norodom Phanouvong
  ministerofsecurity     = { type = 9 id = 590035 } # Lon Nol
  ministerofintelligence = { type = 9 id = 590042 } # Sisowath Youtevong
  chiefofstaff           = { type = 9 id = 590046 } # Sisowath Monireth
  chiefofarmy            = { type = 9 id = 590050 } # Lon Nol
  chiefofnavy            = { type = 9 id = 590053 } # Andr?Patou
  chiefofair             = { type = 9 id = 590057 } # Jacques Soufflet

  landunit = {
    id       = { type = 9031 id = 1 }
    name     = "Arm? du Cambodge"
    location = 1400
    division = {
      id             = { type = 9031 id = 2 }
      name           = "1. Division d'Infanterie"
      type           = infantry
      model          = 11
      strength       = 100
    }
    division = {
      id             = { type = 9031 id = 3 }
      name           = "2. Division d'Infanterie"
      type           = infantry
      model          = 11
      strength       = 100
    }
  }
}

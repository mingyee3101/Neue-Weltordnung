##############################
# Country definition for SWE #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SWE
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 } }
  capital            = 2159 # Stockholm
  manpower           = 10
  # Resource Reserves
  energy         = 3500
  metal          = 3500
  rare_materials = 2500
  oil            = 3500
  supplies       = 3500
  money          = 250
  transports     = 55
  escorts        = 30

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 80 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 100 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 1 }

  nationalprovinces      = { 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167 }
  ownedprovinces         = { 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167 }
  controlledprovinces    = { 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167 }

  techapps               = { 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 27000 27010 27070 27140 27210 27410 27460 27470 9010 9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 15000 15010 4300 4310 4320 4330 4340 4040 4070 4100 4350 15030 4050 4080 4110 4116 15060 4890 4600 4400 4170 4280 4450 4180 15120 4610 4620 4630 4120 4130 4140 4150 4160 15100 4800 4810 4820 4220 4230 4240 4246 4700 4710 4190 4200 4210 15140 4290 4250 4260 4270 15180 4740 4750 4760 4770 4780 4790 4850 4860 4440 4460 4900 4910 4920 4930 4940 4950 4960 2620 2010 2630 2640 2646 2650 2030 2040 2050 2060 2070 2080 2090 2140 11000 2170 2180 2850 2190 2100 2110 2120 2126 2130 2860 2870 2880 2020 2150 2160 2890 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360 2220 2230 2240 2250 2400 2410 2420 2430 2970 2370 2380 2390 2800 2450 21180 21190 21200 2460 2470 2480 2490 2500 2810 2820 2510 2520 2530 2540 22910 22920 22930 22940 2980 2260 2270 2280 21070 5700 5710 5010 5020 5030 5040 5810 5820 5050 5830 5060 5070 5130 5110 5140 5150 5160 5170 5180 5800 5080 5090 5100 53040 5560 5310 54010 54020 54030 5320 5330 5340 5316 5326 5327 5350 5360 5370 5380 5390 5400 53060 5760 5410 5416 5417 5420 5426 5430 5440 5466 5450 5190 5200 5210 5220 5230 5240 53020 53190 5470 5480 5490 5500 5510 5520 5530 5540 5600 5610 5620 5630 5640 5650 5660 14000 14010 14020 14030 14040 5920 5930 5940 5950 5960 5970 5980 5990 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1290 13390 13400 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530 1540 1396 1400 1410 1420 1430 1470 1480 1490 1560 1570 1580 1590 1600 1610 1620 1670 1680 1690 1700 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199110 199120 199130 199140 199150 6500 6510 6530 6580 6610 6680 6620 6630 6640 6710 6650 6660 6670 6540 6910 6900 6010 6020 6040 6050 6060 6070 6080 6100 6090 14050 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8250 8260 8500 8510 8520 8550 8560 8570 8600 8610 8620 8630 8640 8650 8660 8900 8910 8920 8930 8940 8950 8960 8970 8980 81050 81060 81650 81850 81860 81870 81880 81890 81900 81910 81700 81710 81720 81730 81740 81750 81760 82100 82110 82300 82310 82320 82330 7990 82500 82510 82520 3010 3020 3030 3040 3050 3060 3070 12000 3080 3110 3120 3130 3140 3150 3160 12010 3170 12190 12200 3210 3220 3230 3240 3250 3260 12020 3270 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 12040 3490 12050 3510 3520 3530 3540 3550 12060 3560 12100 12110 12120 12130 12140 12150 12160 3610 3620 3630 3640 3650 3660 3670 3680 3710 3810 3820 3830 3840 3900 3910 3920 3930 3890 3960 3720 3730 3736 3740 3750 3760 3770 3780 7010 7020 15500 7600 7610 7550 7560 7570 7580 7590 7140 7150 16000 7810 7620 7630 9000 30000 30020 30030 30040 30070 }
  inventions             = { 3000011 3000012 3000015 3000018 3000019 3000020 3000024 3000026 3000027 3000028 3000031 3000041 3000045 3000046 3000047 3000049 3000052 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 9
    free_market       = 9
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 40087 } # Gustav VI Adolf
  headofgovernment       = { type = 9 id = 40013 } # Tage Erlander
  foreignminister        = { type = 9 id = 40019 } # �sten Und�n
  armamentminister       = { type = 9 id = 40088 } # Per Edvin Sk�ld
  ministerofsecurity     = { type = 9 id = 40044 } # Arvid G. Richert
  ministerofintelligence = { type = 9 id = 40047 } # �ke Hammerski�ld
  chiefofstaff           = { type = 9 id = 40052 } # Carl August Ehrensv�rd
  chiefofarmy            = { type = 9 id = 40056 } # Helge Jung
  chiefofnavy            = { type = 9 id = 40064 } # Helge Str�mb�ck
  chiefofair             = { type = 9 id = 40066 } # Axel Ljungdahl
  dormant_ministers      = { 40002 40003 40004 40005 40007 40008 40009 40017 40021 40026 40027 40028 40038 }

  landunit = {
    id       = { type = 30351 id = 1 }
    name     = "I. Arm�f�rdelningen"
    location = 2159
    division = {
      id             = { type = 30354 id = 1 }
      name           = "I. Arm�f�rdelningen"
      type           = motorized
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30351 id = 2 }
    name     = "II. Arm�f�rdelningen"
    location = 2158
    division = {
      id             = { type = 30354 id = 2 }
      name           = "II. Arm�f�rdelningen"
      type           = motorized
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30351 id = 3 }
    name     = "III. Arm�f�rdelningen"
    location = 2153
    division = {
      id             = { type = 30354 id = 3 }
      name           = "III. Arm�f�rdelningen"
      type           = motorized
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 30351 id = 4 }
    name     = "IV. Arm�f�rdelningen"
    location = 2155
    division = {
      id             = { type = 30354 id = 4 }
      name           = "IV. Arm�f�rdelningen"
      type           = motorized
      model          = 4
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 30352 id = 1 }
    name     = "Kungliga Svenska Flottan"
    location = 2159
    base     = 2159
    division = {
      id             = { type = 30355 id = 1 }
      name           = "HMS Sverige"
      type           = battlecruiser
      model          = 4
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      extra4         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 4
      brigade_model4 = 0
    }
    division = {
      id             = { type = 30355 id = 2 }
      name           = "HMS Drottning Victoria"
      type           = battlecruiser
      model          = 4
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      extra4         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 4
      brigade_model4 = 0
    }
    division = {
      id             = { type = 30355 id = 3 }
      name           = "HMS Gustav V"
      type           = battlecruiser
      model          = 4
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      extra4         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 4
      brigade_model4 = 0
    }
    division = {
      id             = { type = 30355 id = 4 }
      name           = "HMS Manligheten"
      type           = heavy_cruiser
      model          = 7
    }
    division = {
      id             = { type = 30355 id = 5 }
      name           = "HMS Tapperheten"
      type           = heavy_cruiser
      model          = 7
    }
    division = {
      id             = { type = 30355 id = 6 }
      name           = "HMS Oscar II"
      type           = heavy_cruiser
      model          = 7
    }
    division = {
      id             = { type = 30355 id = 7 }
      name           = "HMS Fylgia"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 4
    }
    division = {
      id             = { type = 30355 id = 8 }
      name           = "HMS Clas Fleming"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 4
    }
    division = {
      id             = { type = 30355 id = 9 }
      name           = "HMS Tre Kronor"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 4
    }
    division = {
      id             = { type = 30355 id = 10 }
      name           = "HMS Gotland"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 4
    }
    division = {
      id             = { type = 30355 id = 11 }
      name           = "1. Jagarflottiljen"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 4
    }
    division = {
      id             = { type = 30355 id = 12 }
      name           = "2. Jagarflottiljen"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 4
    }
    division = {
      id             = { type = 30355 id = 13 }
      name           = "3. Jagarflottiljen"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 4
    }
    division = {
      id             = { type = 30355 id = 14 }
      name           = "4. Jagarflottiljen"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 4
    }
    division = {
      id             = { type = 30355 id = 15 }
      name           = "5. Jagarflottiljen"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 4
    }
    division = {
      id             = { type = 30355 id = 16 }
      name           = "6. Jagarflottiljen"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 4
    }
    division = {
      id             = { type = 30355 id = 17 }
      name           = "7. Jagarflottiljen"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 4
    }
  }
  navalunit = {
    id       = { type = 30352 id = 2 }
    name     = "1. Ub�tsflottan"
    location = 2159
    base     = 2159
    division = {
      id             = { type = 30355 id = 18 }
      name           = "1. Ub�tsflottiljen"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30355 id = 19 }
      name           = "2. Ub�tsflottiljen"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30355 id = 20 }
      name           = "3. Ub�tsflottiljen"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30355 id = 21 }
      name           = "4. Ub�tsflottiljen"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30355 id = 22 }
      name           = "5. Ub�tsflottiljen"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30355 id = 23 }
      name           = "6. Ub�tsflottiljen"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30355 id = 24 }
      name           = "7. Ub�tsflottiljen"
      type           = submarine
      model          = 7
    }
  }

  airunit = { 
    id       = { type = 30353 id = 1 }
    name     = "1. Flygflottiljen"
    location = 2159
    base     = 2159
    division = {
      id             = { type = 30356 id = 1 }
      name           = "11./12./13. Bombskvadron"
      type           = tactical_bomber
      model          = 9
      strength       = 36
    }
  }
  airunit = { 
    id       = { type = 30353 id = 2 }
    name     = "4. Flygflottiljen"
    location = 2159
    base     = 2159
    division = {
      id             = { type = 30356 id = 2 }
      name           = "41./42./43. Bombskvadron"
      type           = cas
      model          = 5
      strength       = 36
    }
  }
  airunit = { 
    id       = { type = 30353 id = 3 }
    name     = "8. Flygflottiljen"
    location = 2159
    base     = 2159
    division = {
      id             = { type = 30356 id = 3 }
      name           = "81./82./83. Jaktskvadron"
      type           = interceptor
      model          = 12
      strength       = 36
    }
  }
  airunit = { 
    id       = { type = 30353 id = 4 }
    name     = "6. Flygflottiljen"
    location = 2159
    base     = 2159
    division = {
      id             = { type = 30356 id = 4 }
      name           = "61./62./63. Bombskvadron"
      type           = cas
      model          = 5
      strength       = 36
    }
  }
  airunit = { 
    id       = { type = 30353 id = 5 }
    name     = "7. Flygflottiljen"
    location = 2153
    base     = 2153
    division = {
      id             = { type = 30356 id = 5 }
      name           = "71./72. Bombskvadron"
      type           = cas
      model          = 5
      strength       = 12
    }
  }
  airunit = { 
    id       = { type = 30353 id = 6 }
    name     = "9. Flygflottiljen"
    location = 2153
    base     = 2153
    division = {
      id             = { type = 30356 id = 6 }
      name           = "91./92./93. Jaktskvadron"
      type           = interceptor
      model          = 12
      strength       = 33
    }
  }
  airunit = { 
    id       = { type = 30353 id = 7 }
    name     = "10. Flygflottiljen"
    location = 2153
    base     = 2153
    division = {
      id             = { type = 30356 id = 7 }
      name           = "101./102./103. Jaktskvadron"
      type           = interceptor
      model          = 12
      strength       = 36
    }
  }
  airunit = { 
    id       = { type = 30353 id = 8 }
    name     = "11. Flygflottiljen"
    location = 2153
    base     = 2153
    division = {
      id             = { type = 30356 id = 8 }
      name           = "111./112./113. Bombskvadron"
      type           = tactical_bomber
      model          = 9
      strength       = 18
    }
  }
}
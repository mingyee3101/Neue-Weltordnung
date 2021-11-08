##############################
# Country definition for POR #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = POR
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 MOB3 = 1 MOB4 = 1 } }
  capital            = 476 # Lisbon
  manpower           = 50
  # Resource Reserves
  energy         = 500
  metal          = 500
  rare_materials = 200
  oil            = 200
  supplies       = 200
  money          = 0
  transports     = 50
  escorts        = 7

  diplomacy = {
    relation = { tag = BEL value = -20 }
    relation = { tag = BRA value = 75 }
    relation = { tag = ENG value = 100 }
    relation = { tag = SAF value = 50 access = yes }
    relation = { tag = USA value = -25 access = yes }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPA" NumberOfSpies = 3 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }

  nationalprovinces      = { 476 477 478 479 480 481 482 994 995 }
  ownedprovinces         = { 476 477 478 479 480 481 482 853 854 855 856 857 858 887 888 890 891 892 893 895 912 963 992 994 995 1372 1617 1513 }
  controlledprovinces    = { 476 477 478 479 480 481 482 853 854 855 856 857 858 887 888 890 891 892 893 895 912 963 992 994 995 1372 1617 1513 }

  techapps               = { 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 27000 27010 27070 27140 27210 27410 27460 27470 9010 9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 15000 15010 4300 4310 4320 4330 4340 4040 4070 4100 4350 15030 4050 4080 4110 4116 15060 4890 4600 4400 4170 4280 4450 4180 15120 4610 4620 4630 4120 4130 4140 4150 4160 15100 4800 4810 4820 4220 4230 4240 4246 4700 4710 4190 4200 4210 15140 4290 4250 4260 4270 15180 4740 4750 4760 4770 4780 4790 4850 4860 4440 4460 4900 4910 4920 4930 4940 4950 4960 2620 2010 2630 2640 2646 2650 2030 2040 2050 2060 2070 2080 2090 2140 11000 2170 2180 2850 2190 2100 2110 2120 2126 2130 2860 2870 2880 2020 2150 2160 2890 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360 2220 2230 2240 2250 2400 2410 2420 2430 2970 2370 2380 2390 2800 2450 21180 21190 21200 2460 2470 2480 2490 2500 2810 2820 2510 2520 2530 2540 22910 22920 22930 22940 2980 2260 2270 2280 21070 5700 5710 5010 5020 5030 5040 5810 5820 5050 5830 5060 5070 5130 5110 5140 5150 5160 5170 5180 5800 5080 5090 5100 53040 5560 5310 54010 54020 54030 5320 5330 5340 5316 5326 5327 5350 5360 5370 5380 5390 5400 53060 5760 5410 5416 5417 5420 5426 5430 5440 5466 5450 5190 5200 5210 5220 5230 5240 53020 53190 5470 5480 5490 5500 5510 5520 5530 5540 5600 5610 5620 5630 5640 5650 5660 14000 14010 14020 14030 14040 5920 5930 5940 5950 5960 5970 5980 5990 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1290 13390 13400 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530 1540 1396 1400 1410 1420 1430 1470 1480 1490 1560 1570 1580 1590 1600 1610 1620 1670 1680 1690 1700 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199110 199120 199130 199140 199150 6500 6510 6530 6580 6610 6680 6620 6630 6640 6710 6650 6660 6670 6540 6910 6900 6010 6020 6040 6050 6060 6070 6080 6100 6090 14050 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8250 8260 8500 8510 8520 8550 8560 8570 8600 8610 8620 8630 8640 8650 8660 8900 8910 8920 8930 8940 8950 8960 8970 8980 81050 81060 81650 81850 81860 81870 81880 81890 81900 81910 81700 81710 81720 81730 81740 81750 81760 82100 82110 82300 82310 82320 82330 7990 82500 82510 82520 3010 3020 3030 3040 3050 3060 3070 12000 3080 3110 3120 3130 3140 3150 3160 12010 3170 12190 12200 3210 3220 3230 3240 3250 3260 12020 3270 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 12040 3490 12050 3510 3520 3530 3540 3550 12060 3560 12100 12110 12120 12130 12140 12150 12160 3610 3620 3630 3640 3650 3660 3670 3680 3710 3810 3820 3830 3840 3900 3910 3920 3930 3890 3960 3720 3730 3736 3740 3750 3760 3770 3780 7010 7020 15500 7600 7610 7550 7560 7570 7580 7590 7140 7150 16000 7810 7620 7630 9000 30000 30020 30030 30040 30070 }
  inventions             = { 3000011 3000012 3000015 3000018 3000019 3000020 3000024 3000026 3000027 3000028 3000031 3000041 3000045 3000046 3000047 3000049 3000052 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 6
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 20001 } # Ant�nio de Fragosa Carmona
  headofgovernment       = { type = 9 id = 20002 } # A. Oliveira Salazar
  foreignminister        = { type = 9 id = 20017 } # Alfredo Pimenta
  armamentminister       = { type = 9 id = 20028 } # Armindo Monteiro
  ministerofsecurity     = { type = 9 id = 20036 } # Henrique Galvao
  ministerofintelligence = { type = 9 id = 20039 } # Augusto Vasconcellos
  chiefofstaff           = { type = 9 id = 20041 } # Eduardo A. Marques
  chiefofarmy            = { type = 9 id = 20044 } # J.Barros Rodrigues
  chiefofnavy            = { type = 9 id = 20046 } # Americo Deus Tomas
  chiefofair             = { type = 9 id = 20047 } # Ortins Bettencourt
  dormant_ministers      = { 20004 20019 20020 20021 20022 20023 20024 20025 20030 20031 20032 20011 20012 20005 20006 20037 20007 20008 20042 20009 20010 }

  landunit = {
    id       = { type = 10975 id = 1000 }
    name     = "Portuguese Army"
    location = 476
    division = {
      id             = { type = 10975 id = 1001 }
      name           = "1a Divis�o de Infantaria"
      type           = infantry
      model          = 13
      strength       = 100
    }
    division = {
      id             = { type = 10975 id = 1002 }
      name           = "2a Divis�o de Infantaria"
      type           = infantry
      model          = 13
      strength       = 100
    }
    division = {
      id             = { type = 10975 id = 1003 }
      name           = "3a Divis�o de Infantaria"
      type           = infantry
      model          = 13
      strength       = 100
    }
    division = {
      id             = { type = 10975 id = 1011 }
      name           = "4a Divis�o de Infantaria"
      type           = infantry
      model          = 13
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 10975 id = 1004 }
    name     = "Marinha do Portugal"
    location = 476
    base     = 476
    division = {
      id             = { type = 10975 id = 1005 }
      name           = "Douro Flotilha"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 4
    }
    division = {
      id             = { type = 10975 id = 1006 }
      name           = "Viana do Castello Flotilha"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 4
    }
    division = {
      id             = { type = 10975 id = 1007 }
      name           = "1o Flotilha de Submarino"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 10975 id = 1008 }
      name           = "1o Flotilha de Navio de Transporte"
      type           = transport
      model          = 3
    }
    division = {
      id             = { type = 10975 id = 1009 }
      name           = "2o Flotilha de Navio de Transporte"
      type           = transport
      model          = 3
    }
    division = {
      id             = { type = 10975 id = 1010 }
      name           = "3o Flotilha de Navio de Transporte"
      type           = transport
      model          = 3
    }
  }

  airunit = { 
    id       = { type = 14000 id = 9300 }
    name     = "Portuguese Airforce"
    location = 476
    base     = 476
    division = {
      id             = { type = 14000 id = 9301 }
      name           = "Tactical Air Wing 1"
      type           = tactical_bomber
      model          = 9
      strength       = 100
    }
  }
}
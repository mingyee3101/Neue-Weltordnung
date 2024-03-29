##############################
# Country definition for VIE #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = VIE
  puppet             = U03
  control            = U03
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 MOB3 = 1 MOB4 = 1 MOB5 = 1 } }
  capital            = 1395 # Hanoi
  manpower           = 80
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 5000
  oil            = 3000
  supplies       = 5000
  money          = 0
  transports     = 15
  escorts        = 2

  nationalprovinces      = { 1392 1393 1395 1396 1397 1399 1403 }
  ownedprovinces         = { 1392 1393 1395 1396 1397 }
  controlledprovinces    = { 1392 1393 1395 1396 1397 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1310 1320 1330 1340 1350 1360 1370 1396 1560 1570 1580 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2290 2300 2310 2450 2510 2620 2630 2640 2646 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3490 3510 3520 3530 3540 3610 3620 3630 3640 3650 3660 3720 3730 3736 3740 3750 3760 3810 3820 3830 3900 3910 4010 4020 4120 4130 4220 4250 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4900 4910 4920 5010 5020 5030 5050 5060 5070 5080 5090 5190 5200 5310 5316 5320 5326 5327 5350 5360 5410 5416 5417 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5940 5960 5980 6390 6400 6410 6420 6430 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6900 6910 7550 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8500 8510 8520 8550 8560 8570 8600 8610 8900 8910 8920 8930 8940 8950 8960 8970 9010 9020 9030 12100 12110 12120 12130 13060 13070 13080 14000 14010 14020 14030 21180 21190 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81300 81310 81320 81330 81340 81350 81360 81370 81650 81700 81710 81720 81850 81860 81870 81880 82300 82310 82320 82500 82510 199130 }
  inventions             = { 3000027 3000028 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 790231 }
  headofgovernment       = { type = 9 id = 790232 }
  foreignminister        = { type = 9 id = 790102 } # Nguyen Phan Long
  armamentminister       = { type = 9 id = 790126 } # Tran Van Huu
  ministerofsecurity     = { type = 9 id = 790151 } # Tran Van Don
  ministerofintelligence = { type = 9 id = 790165 } # Ngo Dinh Nhu
  chiefofstaff           = { type = 9 id = 790181 } # Tran Van Don
  chiefofarmy            = { type = 9 id = 790197 } # Nguyen Van Vy
  chiefofnavy            = { type = 9 id = 790208 } # Nguyen Van Vy
  chiefofair             = { type = 9 id = 790216 } # Nguyen Khanh
  dormant_leaders        = { 790001 790002 790003 790004 790005 790039 790006 790007 790008 790009 790010 790012 790013 790014 790015 790016 790018 790019 790020 790021 790024 790025 790026 790027 790028 790031 790032 790033 790034 790037 790041 790043 790045 790047 790048 790049 790050 790051 790052 790054 790055 790090 790091 790096 }
  dormant_ministers      = { 790006 790014 790044 790016 790035 790036 790048 790008 790013 790007 790020 790040 790009 790015 790049 790010 790012 790052 790053 }

  landunit = {
    id       = { type = 9180 id = 1 }
    name     = "Army of the Empire of Viet Nam"
    location = 1395
    division = {
      id             = { type = 9180 id = 2 }
      name           = "1. Infantry Division"
      type           = infantry
      model          = 11
      strength       = 100
    }
    division = {
      id             = { type = 9180 id = 3 }
      name           = "2. Infantry Division"
      type           = infantry
      model          = 11
      strength       = 100
    }
    division = {
      id             = { type = 9180 id = 4 }
      name           = "3. Infantry Division"
      type           = infantry
      model          = 11
      strength       = 100
    }
    division = {
      id             = { type = 9180 id = 5 }
      name           = "4. Infantry Division"
      type           = infantry
      model          = 11
      strength       = 100
    }
  }
}

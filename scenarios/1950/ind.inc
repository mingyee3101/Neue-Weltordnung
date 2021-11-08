##############################
# Country definition for IND #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = IND
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 MOB3 = 1 MOB4 = 1 MOB5 = 1 MOB6 = 1 MOB7 = 1 } }
  capital            = 1459 # Delhi
  manpower           = 435
  # Resource Reserves
  energy         = 4000
  metal          = 2000
  rare_materials = 1000
  oil            = 500
  supplies       = 1000
  money          = 100
  transports     = 50

  diplomacy = {
    relation = { tag = ENG value = 50 }
  }

  nationalprovinces      = { 1278 1442 1443 1421 1458 1455 1440 1441 1519 1520 1468 1528 1481 1469 1478 1451 1454 1486 1490 1508 1479 1480 1516 1488 1453 1489 1491 1505 1506 1507 1492 1485 1470 1446 1447 1471 1476 1483 1477 1482 1484 1521 1522 1518 1523 1524 1460 1461 1462 1531 1463 1527 1525 1517 1512 1487 1493 1494 1501 1502 1503 1495 1504 1448 1500 1496 1514 1472 1535 1526 1497 1452 1473 1464 1465 1498 1499 1474 1466 1515 1475 1467 1459 1540 1513 1612 }
  ownedprovinces         = { 1278 1442 1443 1421 1458 1455 1440 1441 1519 1520 1468 1528 1481 1469 1478 1451 1454 1486 1490 1508 1479 1480 1516 1488 1453 1489 1491 1505 1506 1507 1492 1485 1470 1446 1447 1471 1476 1483 1477 1482 1484 1521 1522 1518 1523 1524 1460 1461 1462 1531 1463 1527 1525 1517 1512 1487 1493 1494 1501 1502 1503 1495 1504 1448 1500 1496 1514 1472 1535 1526 1497 1452 1473 1464 1465 1498 1499 1474 1466 1515 1475 1467 1459 1540 1612 }
  controlledprovinces    = { 1278 1442 1443 1421 1458 1455 1440 1441 1519 1520 1468 1528 1481 1469 1478 1451 1454 1486 1490 1508 1479 1480 1516 1488 1453 1489 1491 1505 1506 1507 1492 1485 1470 1446 1447 1471 1476 1483 1477 1482 1484 1521 1522 1518 1523 1524 1460 1461 1462 1531 1463 1527 1525 1517 1512 1487 1493 1494 1501 1502 1503 1495 1504 1448 1500 1496 1514 1472 1535 1526 1497 1452 1473 1464 1465 1498 1499 1474 1466 1515 1475 1467 1459 1540 1612 }

  techapps               = { 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 27000 27010 27070 27460 27470 9010 9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 15000 15010 4300 4310 4320 4330 4340 4040 4070 4100 4350 4050 4080 4110 4116 15060 4600 4400 4170 4280 4450 4180 4610 4620 4630 4120 4130 4140 4150 4160 15100 4800 4810 4820 4220 4230 4240 4246 4700 4710 4190 4200 4210 15140 4290 4250 4260 4270 15180 4740 4750 4760 4770 4780 4790 4850 4860 4440 4460 4900 4910 4920 4930 4940 4950 4960 2620 2010 2630 2640 2646 2650 2030 2040 2050 2060 2070 2080 2090 2140 2170 2180 2850 2190 2100 2110 2120 2126 2130 2860 2870 2880 2020 2150 2160 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360 2220 2230 2240 2250 2400 2410 2420 2430 2970 2370 2380 2800 2450 21180 21190 21200 2460 2470 2480 2490 2810 2820 2510 2520 2530 22910 22920 22930 2980 2260 2270 21070 5700 5710 5010 5020 5030 5040 5810 5820 5050 5830 5060 5070 5130 5110 5140 5150 5160 5170 5180 5800 5080 5090 5100 53040 5560 5310 54010 54020 54030 5320 5330 5340 5316 5326 5327 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5440 5466 5450 5190 5200 5210 5220 5230 5240 53020 5470 5480 5490 5500 5510 5520 5530 5540 5600 5610 5620 5630 5640 5650 14000 14010 14020 14030 14040 5920 5930 5940 5950 5960 5970 5980 5990 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 13390 13400 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530 1540 1396 1400 1410 1420 1470 1480 1560 1570 1580 1590 1600 1610 1620 1670 1680 1690 1700 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199110 199130 199140 199150 6500 6510 6530 6580 6610 6680 6620 6630 6640 6710 6650 6660 6670 6540 6910 6900 6570 6300 6310 6320 6330 6340 6350 6370 6360 14060 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8250 8500 8510 8520 8550 8560 8570 8600 8610 8620 8630 8640 8650 8900 8910 8920 8930 8940 8950 8960 8970 8980 81050 81650 81850 81860 81870 81880 81890 81900 81910 81700 81710 81720 81730 81740 81750 81760 82100 82300 82310 82320 82330 7990 82500 82510 82520 3010 3020 3030 3040 3050 3060 3070 12000 3080 3110 3120 3130 3140 3150 3160 12010 3170 12190 12200 3210 3220 3230 3240 3250 3260 12020 3270 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 12040 3490 12050 3510 3520 3530 3540 3550 12060 3560 12100 12110 12120 12130 12140 12150 3610 3620 3630 3640 3650 3660 3670 3680 3710 3810 3820 3830 3840 3900 3910 3920 3930 3890 3960 3720 3730 3736 3740 3750 3760 3770 7010 7020 15500 7600 7610 7550 7560 7570 7580 7590 7140 7150 7810 7620 7630 9000 30000 30020 30030 30040 30070 }
  inventions             = { 3000011 3000012 3000015 3000018 3000019 3000020 3000024 3000026 3000027 3000028 3000031 3000041 3000046 3000047 3000049 3000052 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 5
    free_market       = 8
    professional_army = 7
    defense_lobby     = 3
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 250001 } # Rajendra Prasad
  headofgovernment       = { type = 9 id = 250013 } # Jawaharlal Nehru
  foreignminister        = { type = 9 id = 250023 } # Khawaja Nazimuddin
  armamentminister       = { type = 9 id = 250029 } # Muhammed Ali Bogra
  ministerofsecurity     = { type = 9 id = 250033 } # Sir Henry Gidney
  ministerofintelligence = { type = 9 id = 250039 } # Abdul Majeed Khwaja
  chiefofstaff           = { type = 9 id = 250043 } # Kodandera Cariappa
  chiefofarmy            = { type = 9 id = 250047 } # Mohan Singh
  chiefofnavy            = { type = 9 id = 250050 } # Ram Dass Katari
  chiefofair             = { type = 9 id = 250052 } # Subroto Mukherjee

  landunit = {
    id       = { type = 12700 id = 1001 }
    name     = "Bombay District"
    location = 1517
    division = {
      id             = { type = 12700 id = 1002 }
      name           = "Mhow Area"
      type           = garrison
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1101 }
    name     = "Mangalore District"
    location = 1503
    division = {
      id             = { type = 12700 id = 1102 }
      name           = "Mangalore Area"
      type           = garrison
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1103 }
    name     = "Madras District"
    location = 1500
    division = {
      id             = { type = 12700 id = 1104 }
      name           = "Madras Area"
      type           = garrison
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1003 }
    name     = "Deccan District"
    location = 1503
    division = {
      id             = { type = 12700 id = 1004 }
      name           = "4th Indian Division"
      type           = infantry
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1005 }
      name           = "4th Indian Division"
      type           = motorized
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 12700 id = 1006 }
      name           = "Poona Area"
      type           = garrison
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1007 }
    name     = "Kohat District"
    location = 1525
    division = {
      id             = { type = 12700 id = 1008 }
      name           = "Thal Division"
      type           = infantry
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1009 }
      name           = "Kohat Division"
      type           = infantry
      model          = 12
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 12700 id = 1010 }
    name     = "Lahore District"
    location = 1535
    division = {
      id             = { type = 12700 id = 1011 }
      name           = "Sialkot Division"
      type           = motorized
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1012 }
      name           = "Ferozepore Division"
      type           = motorized
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1013 }
      name           = "Jullundur Division"
      type           = infantry
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1014 }
      name           = "Lahore Division"
      type           = infantry
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1015 }
      name           = "Ambala Division"
      type           = motorized
      model          = 3
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 12700 id = 1016 }
    name     = "Lucknow District"
    location = 1459
    division = {
      id             = { type = 12700 id = 1017 }
      name           = "Allahabad Division"
      type           = infantry
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1018 }
      name           = "Delhi Area"
      type           = garrison
      model          = 6
    }
  }
  landunit = {
    id       = { type = 12700 id = 1019 }
    name     = "Madras District"
    location = 1500
    division = {
      id             = { type = 12700 id = 1020 }
      name           = "Madras Division"
      type           = motorized
      model          = 3
      extra          = engineer
      brigade_model  = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1021 }
    name     = "Meerut District"
    location = 1460
    division = {
      id             = { type = 12700 id = 1022 }
      name           = "3rd Armored Division"
      type           = armor
      model          = 3
      extra          = armored_car
      brigade_model  = 5
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1023 }
      name           = "3rd Indian Division"
      type           = motorized
      model          = 3
      extra          = armored_car
      brigade_model  = 5
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12700 id = 1024 }
    name     = "Peshawar District"
    location = 1525
    division = {
      id             = { type = 12700 id = 1025 }
      name           = "Landikotal Division"
      type           = motorized
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 1026 }
      name           = "Peshawar Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 1027 }
      name           = "Nowshera Division"
      type           = motorized
      model          = 3
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 1028 }
      name           = "1st Armored Division"
      type           = armor
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12700 id = 1029 }
    name     = "Presidency & Assam District"
    location = 1447
    division = {
      id             = { type = 12700 id = 1030 }
      name           = "Eastern Bengal Division"
      type           = infantry
      model          = 12
      extra          = engineer
      brigade_model  = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1031 }
    name     = "Rawalpindi District"
    location = 1527
    division = {
      id             = { type = 12700 id = 1032 }
      name           = "1st Indian Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1033 }
    name     = "Waziristan District"
    location = 1527
    division = {
      id             = { type = 12700 id = 1034 }
      name           = "Razmak Division"
      type           = infantry
      model          = 12
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 1035 }
      name           = "Bannu Division"
      type           = infantry
      model          = 12
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 1036 }
      name           = "Wana Division"
      type           = infantry
      model          = 12
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 12700 id = 1037 }
    name     = "Western District"
    location = 1519
    division = {
      id             = { type = 12700 id = 1038 }
      name           = "2nd Indian Division"
      type           = infantry
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1039 }
      name           = "Quetta Division"
      type           = infantry
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1040 }
      name           = "Khojak Division"
      type           = infantry
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1041 }
      name           = "Zhob Division"
      type           = infantry
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1042 }
      name           = "Sind Division"
      type           = infantry
      model          = 12
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 12700 id = 1043 }
    name     = "Jammu & Kashmir State Forces"
    location = 1540
    division = {
      id             = { type = 12700 id = 1044 }
      name           = "Jammu Division"
      type           = infantry
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1045 }
      name           = "Kashmir Division"
      type           = infantry
      model          = 12
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1046 }
    name     = "Gwalior State Forces"
    location = 1523
    division = {
      id             = { type = 12700 id = 1047 }
      name           = "Gwalior Motorized Division"
      type           = motorized
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 12700 id = 1048 }
      name           = "Gwalior Infantry Division"
      type           = infantry
      model          = 12
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1049 }
    name     = "Hyderabad State Forces"
    location = 1487
    division = {
      id             = { type = 12700 id = 1050 }
      name           = "Hyderabad State Forces"
      type           = infantry
      model          = 12
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1051 }
    name     = "Bikaner State Forces"
    location = 1527
    division = {
      id             = { type = 12700 id = 1052 }
      name           = "Bikaner State Forces"
      type           = infantry
      model          = 12
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 12700 id = 1053 }
    name     = "Patiala State Forces"
    location = 1531
    division = {
      id             = { type = 12700 id = 1054 }
      name           = "Patiala State Forces"
      type           = infantry
      model          = 12
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 12700 id = 1055 }
    name     = "Mysore State Forces"
    location = 1507
    division = {
      id             = { type = 12700 id = 1056 }
      name           = "Mysore State Forces"
      type           = infantry
      model          = 12
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 12700 id = 1057 }
    name     = "Bangladesh Command"
    location = 1447
    division = {
      id             = { type = 12700 id = 1058 }
      name           = "Rangoon Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1059 }
      name           = "Mandalay Division"
      type           = infantry
      model          = 12
    }
  }
  landunit = {
    id       = { type = 12700 id = 1105 }
    name     = "Mountain Command"
    location = 1454
    division = {
      id             = { type = 12700 id = 1106 }
      name           = "1. Mountain Division"
      type           = bergsjaeger
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1107 }
      name           = "2. Mountain Division"
      type           = bergsjaeger
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1108 }
      name           = "3. Mountain Division"
      type           = bergsjaeger
      model          = 12
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1109 }
    name     = "West Command"
    location = 1459
    division = {
      id             = { type = 12700 id = 1110 }
      name           = "Western Headquarters"
      type           = hq
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1111 }
    name     = "East Command"
    location = 1447
    division = {
      id             = { type = 12700 id = 1112 }
      name           = "Eastern Headquarters"
      type           = hq
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1113 }
    name     = "North Command"
    location = 1453
    division = {
      id             = { type = 12700 id = 1114 }
      name           = "Northern Headquarters"
      type           = hq
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1115 }
    name     = "10th Corps"
    location = 1454
    division = {
      id             = { type = 12700 id = 1116 }
      name           = "31. Division"
      type           = motorized
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1117 }
      name           = "32. Division"
      type           = motorized
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1118 }
      name           = "33. Division"
      type           = motorized
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1119 }
    name     = "11th Corps"
    location = 1454
    division = {
      id             = { type = 12700 id = 1120 }
      name           = "34. Division"
      type           = motorized
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1121 }
      name           = "35. Division"
      type           = motorized
      model          = 3
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 12700 id = 288 }
    name     = "Royal Indian Navy"
    location = 1517
    base     = 1517
    division = {
      id             = { type = 12700 id = 284 }
      name           = "HMIS 2nd Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 12700 id = 286 }
      name           = "HMIS 4th Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 12700 id = 2318 }
      name           = "2nd DD. Division"
      type           = destroyer
    }
    division = {
      id             = { type = 12700 id = 2319 }
      name           = "3rd DD. Division"
      type           = destroyer
    }
  }
  navalunit = {
    id       = { type = 12700 id = 2332 }
    name     = "1st Squadron"
    location = 1517
    base     = 1517
    division = {
      id             = { type = 12700 id = 289 }
      name           = "HMIS 1st Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 12700 id = 285 }
      name           = "HMIS 3rd Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 12700 id = 287 }
      name           = "HMIS Destroyer Flotilla"
      type           = destroyer
      model          = 8
    }
    division = {
      id             = { type = 12700 id = 2317 }
      name           = "1st DD. Division"
      type           = destroyer
    }
  }

  airunit = { 
    id       = { type = 12700 id = 80 }
    name     = "Royal Indian Air Force"
    location = 1517
    base     = 1517
    division = {
      id             = { type = 12700 id = 81 }
      name           = "Indian Group"
      type           = tactical_bomber
      model          = 9
      strength       = 100
    }
  }
}
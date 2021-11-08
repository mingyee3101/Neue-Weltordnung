 
 ############################## 
 # Country definition for BUL # 
 ############################## 
  

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = BUL
	ai_settings = { flags = { MOB1 = yes MOB2 = yes } } 
	# Resource Reserves 
	energy                 = 1000
	metal                  = 1000
	rare_materials         = 500
	oil                    = 500 
	supplies               = 500 
	money                  = 100 
	manpower               = 0 
	capital                = 321 
	transports             = 100 
	escorts                = 4 
   diplomacy = 
   {  relation = {  tag = ENG value = 20  } 
     relation = {  tag = FIN value = 35  } 
     relation = {  tag = FRA value = 20  } 
     relation = {  tag = GER value = 125  } 
     relation = {  tag = GRE value = -75  } 
     relation = {  tag = ITA value = 150  } 
     relation = {  tag = ROM value = 25  } 
     relation = {  tag = SOV value = 15  } 
     relation = {  tag = TUR value = 75  } 
     relation = {  tag = YUG value = 25  } 
    } 
   SpyInfo                = {  country = "BUL" NumberOfSpies = 6  } 
   nationalprovinces      = {  318 323 325 324 321 320 319 326 364 317 331 307 370 322 
             #Macedonia and Greece 
             328 333 363 365 366 
              } 
   ownedprovinces         = {  317 318 319 320 321 322 323 324 325 326  } 
   controlledprovinces    = {  317 318 319 320 321 322 323 324 325 326  }
   claimedprovinces = { 331 334 } 
   
	# Eastern Minor Tech '36 
	# Group D 1936 techs 
	# ###################### 
	techapps               = {  

	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090 
	# Agriculture  
	5700 5710 5010 5020
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326 5327
	# Medicine
	5600 5610 5620

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980

	# Tanks
	7600 7610 2620 2010 2630 2640 2646 2650
	# Armoured Car  
	2860 2870 2880 2020
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200
	# Anti-Air Artillery Brigade 
	2810 2820 2510

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# Grand Battle Plan Doctrine
	6560 6030 6120

	# Destroyers
	3010 3020
	# Torpedo & ASW 18
	3720 3730 3736 3740 3900
	# Troopships
	3810 3820

	# Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8500 8900 8100 8110 8120 82500

	# Interceptor Fighter
	4500 4510 4520 4530 4540 4550 4010 4020
	# Multirole Fighter
	4300 4310 4320 4330 4340
	# Tactical Bomber
	4600 4610 4620 4630 4120 4130
	# Strategic Bomber
	4800 4810 4820
	# Naval Bomber
	4700 4710

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	9040
	
	}
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     free_market       = 7 
     freedom           = 6 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 9 
    } 
   headofstate            = {  type = 9 id = 95001  } 
   headofgovernment       = {  type = 9 id = 95021  } 
   foreignminister        = {  type = 9 id = 95030  } 
   armamentminister       = {  type = 9 id = 95046  } # Dobri Bojilov
   ministerofsecurity     = {  type = 9 id = 95062  } 
   ministerofintelligence = {  type = 9 id = 95074  } 
   chiefofstaff           = {  type = 9 id = 95084  } 
   chiefofarmy            = {  type = 9 id = 95095  } 
   chiefofnavy            = {  type = 9 id = 95107  } 
   chiefofair             = {  type = 9 id = 95010  }
   dormant_ministers      = {  95004 95005 95006 95007 95009  } 
   # Firepower 

   # 1ST ARMY
   landunit = 
   {  id       = {  type = 19000 id = 1  } 
     location = 321 
     name     = "1-va Armija" 
     Division = 
     {  id       = {  type = 19000 id = 2  } 
       name     = "1-va Sofiiska pekhotna divizija" 
       strength = 80 
       type     = infantry 
       model    = 8
      } 
     Division = 
     {  id       = {  type = 19000 id = 3  } 
       name     = "7-ma Rilska pekhotna divizija" 
       strength = 80 
       type     = infantry 
       model    = 8
      }
     Division = 
     {  id       = {  type = 19000 id = 4  } 
       name     = "1-va Konna divizija" 
       strength = 80 
       type     = cavalry 
       model    = 8
      } 
    } 
   # 2ND ARMY
   landunit = 
   {  id       = {  type = 19000 id = 5  } 
     location = 325 
     name     = "2-ra Armija" 
     Division = 
     {  id       = {  type = 19000 id = 6  } 
       name     = "2-ra Trakiiska pekhotna divizija" 
       strength = 80 
       type     = infantry 
       model    = 8
      } 
     Division = 
     {  id       = {  type = 19000 id = 7  } 
       name     = "8-a Tundjanska pekhotna divizija" 
       strength = 80 
       type     = infantry 
       model    = 8
      }
     Division = 
     {  id       = {  type = 19000 id = 8  } 
       name     = "10-ta Rhodopska pekhotna divizija" 
       strength = 80 
       type     = infantry 
       model    = 8
      }
     Division = 
     {  id       = {  type = 19000 id = 19  } 
       name     = "2-ra Konna divizija" 
       strength = 80 
       type     = cavalry 
       model    = 8 
      }
     Division = 
     {  id       = {  type = 19000 id = 20 } 
       name     = "11-ta Zapasna pekhotna divizija" 
       strength = 80 
       type     = infantry 
       model    = 8
      } 
    } 
   # 3RD ARMY
   landunit = 
   {  id       = {  type = 19000 id = 9  } 
     location = 324 
     name     = "3-ta Armija" 
     Division = 
     {  id       = {  type = 19000 id = 10  } 
       name     = "3-ta Balkanska pekhotna divizija" 
       strength = 80 
       type     = infantry 
       model    = 8 
      }
     Division = 
     {  id       = {  type = 19000 id = 11  } 
       name     = "4-ta Preslavska pekhotna divizija" 
       strength = 80 
       type     = infantry 
       model    = 8 
      } 
    } 
   # 4TH ARMY
   landunit = 
   {  id       = {  type = 19000 id = 12  } 
     location = 323 
     name     = "4-ta Armija" 
     Division = 
     {  id       = {  type = 19000 id = 13  } 
       name     = "5-ta Dunavska pekhotna divizija" 
       strength = 80 
       type     = infantry 
       model    = 9 
       extra    = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 19000 id = 14  } 
       name     = "6-ta Bdinska pekhotna divizija" 
       strength = 80 
       type     = infantry 
       model    = 8
      }
     Division = 
     {  id       = {  type = 19000 id = 17  } 
       name     = "9-ta Plevenska pekhotna divizija" 
       strength = 80 
       type     = infantry 
       model    = 8 
      } 
    } 
   # navalunit = {  
   # id = {  type = 19000 id = 15  } 
   # name = "Bulgarska Flota" 
   # location = 325 
   # base = 325 
   # Division = {  
   # id = {  type = 19000 id = 16  } 
   # name = "1-va Podvodnikova flotilija" 
   # type = destroyer 
   # model = 0 
   #  } 
   #  }

   # BULGARIAN AIR FORCE
   airunit = 
   {  id       = {  type = 19000 id = 30  } 
     location = 325 
     base     = 325
     name     = "Vyzdushni voiski" 
     Division = 
     {  id       = {  type = 19000 id = 31  } 
       name     = "5-ti Bombardirovatchen polk" 
       strength = 40 
       type     = tactical_bomber 
       model    = 5
      } 
     Division = 
     {  id       = {  type = 19000 id = 32  } 
       name     = "2-ri Lineen polk" 
       strength = 30 
       type     = tactical_bomber
       model    = 4
      }
     Division = 
     {  id       = {  type = 19000 id = 33  } 
       name     = "6-ti Iztrebitelen polk" 
       strength = 60 
       type     = interceptor
       model    = 6 
      } 
    } 
  } 
 
##############################
# Country definition for FRA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = FRA
  name               = "FRA_1"
  ai                 = "FRA_1948.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 55 # Paris
  manpower           = 50
  peacetime_ic_mod       = 0.6
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 200
  oil            = 200
  supplies       = 200
  money          = 50
  transports     = 130
  escorts        = 30

  diplomacy = {
    relation = { tag = GER value = 75 }
    relation = { tag = ITA value = 50 }
    relation = { tag = JAP value = 50 }
    relation = { tag = U03 value = 50 }
  }
  SpyInfo                = { country = "FRA" NumberOfSpies = 9 }

  nationalprovinces      = { 85 90 86 94 89 81 82 80 84 79 77 71 78 74 75 72 73 93 92 91 87 83 88 76 70 62 61 65 63 64 66 58 60 59 47 48 55 54 56 95 100 99 101 102 103 106 96 97 98 104 107 105 49 50 51 52 69 68 67 57 40 41 37 38 39 45 42 43 44 46 53 }
  ownedprovinces         = { 85 89 81 82 80 84 79 77 71 78 74 75 72 73 83 88 76 70 62 61 65 63 64 66 58 60 59 47 48 55 54 56 95 100 99 67 57 38 40 41 42 90 86 93 92 97 98 }
  controlledprovinces    = { 85 89 81 82 80 84 79 77 71 78 74 75 72 73 83 88 76 70 62 61 65 63 64 66 58 60 59 47 48 55 54 56 95 100 99 67 57 38 40 41 42 90 86 93 92 97 98 }
  claimedprovinces       = { 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 743 740 741 742 744 745 746 747 748 749 907 908 909 910 911 914 915 917 918 919 920 921 922 923 924 925 926 927 928 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 833 1001 1002 1003 996 999 1000 2000 1752 1767 1768 1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 2135 }

  techapps               = { 2860 2870 2880 2020 2150 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2100 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360 2400 2410 2420 2430 2460 2800 2450 21180 21190 21200 2470 2480 2810 2820 2510 2520 2530 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1396 1560 1570 1580 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 199130 199140 199100 5700 5710 5010 5020 5030 5040 5810 5820 5050 5830 5060 5070 5130 5140 5150 5160 5180 5110 5800 5080 5090 5100 6710 5190 5200 5210 5220 5230 5240 53020 53040 5310 54010 54020 54030 5320 5330 5370 5380 5340 5390 5400 7140 7150 5316 5326 5327 5350 5360 5410 5416 5470 5480 5600 5610 5620 5630 5640 5650 5560 7550 7560 7570 3010 3020 3030 3040 3050 3060 3070 12000 3080 3110 3120 3130 3140 3150 3160 12010 12150 3170 3210 3220 3230 3240 3250 3260 12020 3270 3410 3420 3430 3440 3450 3456 3460 3470 3480 12040 3510 3520 3530 3540 3550 12060 12100 12110 12120 12140 12130 3610 3620 3630 3640 3650 3660 3670 3680 3710 3310 3320 3330 3340 3350 3720 3730 3736 3740 3750 3900 3810 3820 3830 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 4300 4310 4320 4330 4340 4040 4070 4100 4350 4400 4170 4280 4450 4050 4080 4110 4600 4610 4620 4630 4120 4130 4140 4150 4160 15100 4290 4250 4260 4270 4800 4810 4820 4220 4230 4240 4700 4710 4190 4200 4210 4740 4750 4760 4770 4780 4790 4850 4900 4910 4920 4930 4940 4950 14000 14010 14020 14030 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 6110 6120 6900 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8520 8550 8560 8600 8610 8900 8910 8920 8930 8940 8950 8960 8100 8110 8120 8150 8160 8200 8210 81650 81850 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 9090 9100 9110 9120 9140 9150 1590 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 5188 } # Phillipe P?ain
  headofgovernment       = { type = 9 id = 5197 } # Pierre Laval
  foreignminister        = { type = 9 id = 5198 } # Fran?is Darlan
  armamentminister       = { type = 9 id = 5205 } # Tulio Franco Franco
  ministerofsecurity     = { type = 9 id = 5212 } # Eduard Herriot
  ministerofintelligence = { type = 9 id = 5193 } # Ren?Bousquet
  chiefofstaff           = { type = 9 id = 5219 } # Fran?is Darlan
  chiefofarmy            = { type = 9 id = 5221 } # Eugene Bridoux
  chiefofnavy            = { type = 9 id = 5009 } # Fran?is Darlan
  chiefofair             = { type = 9 id = 5196 } # Jean Marie Bergeret
  dormant_leaders        = { 5001 5004 5005 5007 5011 5013 5014 5016 5017 5020 5024 5027 5030 5031 5033 5034 5035 5039 5041 5042 5043 5044 5045 5047 5048 5051 5052 5057 5058 5061 5064 5065 5072 5071 5077 5079 5083 5086 5088 5090 5092 5097 5100 5101 5103 5106 5107 5108 5109 5111 5115 5118 5128 5133 5135 5136 5138 5143 5146 5149 5151 5153 5165 5167 5170 5172 5174 5176 5177 5178 5179 5180 5185 5187 5191 5192 5193 5194 5196 5199 5200 5205 5208 5209 5210 5211 5214 5216 5219 5220 5221 5223 5225 5226 5227 5228 5094 }
  dormant_ministers      = { 5001 5002 5003 5004 5005 5006 5007 5008 5010 5011 5012 5014 5015 5016 5017 5018 5019 5020 5021 5022 5024 5027 5028 5029 5031 5032 5033 5034 5036 5037 5038 5041 5042 5043 5044 5045 5046 5047 5048 5049 5050 5051 5052 5054 5055 5056 5057 5058 5060 5062 5065 5067 5068 5069 5070 5071 5073 5074 5075 5076 5077 5078 5080 5081 5083 5084 5086 5087 5089 5091 5094 5095 5096 5099 5100 5102 5104 5105 5106 5110 5113 5114 5115 5116 5117 5118 5120 5121 5122 5123 5125 5126 5127 5128 5129 5130 5131 5132 5133 5134 5135 5136 5137 5139 5141 5142 5143 5146 5147 5151 5152 5153 5154 5155 5156 5157 5158 5159 5160 5161 5162 5163 5165 5166 5167 5168 5172 5173 5174 5176 5178 5180 5181 5182 5185 5187 5194 }
  dormant_teams          = { 5006 5016 5017 5019 5021 }

  landunit = {
    id       = { type = 13500 id = 1 }
    name     = "Armée Métropolitaine"
    location = 55
    division = {
      id             = { type = 13500 id = 2 }
      name           = "Armée Métropolitaine"
      type           = hq
      model          = 4
      strength       = 75
    }
    division = {
      id             = { type = 13500 id = 3 }
      name           = "1ème Division d'Infanterie"
      type           = infantry
      model          = 12
      strength       = 75
    }
    division = {
      id             = { type = 13500 id = 4 }
      name           = "3ème Division d'Infanterie"
      type           = infantry
      model          = 12
      strength       = 75
    }
    division = {
      id             = { type = 13500 id = 5 }
      name           = "8ème Division d'Infanterie"
      type           = infantry
      model          = 12
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 13500 id = 6 }
    name     = "Troupes de France Metropolitan"
    location = 85
    division = {
      id             = { type = 13500 id = 6001 }
      name           = "2ème Division d'Infanterie"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 7
      strength       = 75
    }
    division = {
      id             = { type = 13500 id = 6002 }
      name           = "4ème Division d'Infanterie"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 7
      strength       = 75
    }
    division = {
      id             = { type = 13500 id = 6003 }
      name           = "5ème Division d'Infanterie"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 7
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 13500 id = 8 }
    name     = "Cavalerie de France Metropolitan"
    location = 89
    division = {
      id             = { type = 13500 id = 6004 }
      name           = "2e Div. Légère de Cavalerie"
      type           = cavalry
      model          = 11
      strength       = 50
    }
    division = {
      id             = { type = 13500 id = 6005 }
      name           = "3e Div. Légère de Cavalerie"
      type           = cavalry
      model          = 11
      strength       = 50
    }
    division = {
      id             = { type = 13500 id = 6006 }
      name           = "4e Div. Légère de Cavalerie"
      type           = cavalry
      model          = 11
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 13500 id = 10 }
    name     = "Gendarmerie France"
    location = 75
    division = {
      id             = { type = 13500 id = 6007 }
      name           = "9e Division de Gendarmerie"
      type           = militia
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 6008 }
      name           = "11e Division de Gendarmerie"
      type           = militia
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 6009 }
      name           = "4e Division de Gendarmerie"
      type           = militia
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 6010 }
      name           = "13e Division de Gendarmerie"
      type           = militia
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 6011 }
      name           = "14e Division de Gendarmerie"
      type           = militia
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 6012 }
      name           = "15e Division de Gendarmerie"
      type           = militia
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13500 id = 6018 }
    name     = "Franc-Garde"
    location = 75
    division = {
      id             = { type = 13500 id = 6019 }
      name           = "3e Division de Milice"
      type           = militia
      model          = 6
      extra          = police
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 6020 }
      name           = "3e Division de Milice"
      type           = militia
      model          = 6
      extra          = police
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 6021 }
      name           = "3e Division de Milice"
      type           = militia
      model          = 6
      extra          = police
      brigade_model  = 2
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 13500 id = 6022 }
    name     = "Flotte de France"
    location = 86
    base     = 86
    division = {
      id             = { type = 13500 id = 6023 }
      name           = "Strasbourg"
      type           = battleship
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 6024 }
      name           = "Dunkerque"
      type           = battleship
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 3033 }
      name           = "Algerie"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 3034 }
      name           = "Gloire"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 3043 }
      name           = "2e Flottille de Contre-torpilleurs"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 13500 id = 3044 }
      name           = "3e Flottille de Contre-torpilleurs"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 13500 id = 3045 }
      name           = "4e Flottille de Contre-torpilleurs"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 13500 id = 3053 }
      name           = "2e Flottille de Convois"
      type           = transport
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13500 id = 341 }
    name     = "Flotte de Sous-Marins"
    location = 86
    base     = 86
    division = {
      id             = { type = 13500 id = 3460 }
      name           = "6me Flottille de Sous-Marins"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 3056 }
      name           = "7me Flottille de Sous-Marins"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 3057 }
      name           = "8me Flottille de Sous-Marins"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 3058 }
      name           = "9me Flottille de Sous-Marins"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 3059 }
      name           = "10me Flottille de Sous-Marins"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 3060 }
      name           = "11me Flottille de Sous-Marins"
      type           = submarine
      model          = 7
    }
  }

  airunit = { 
    id       = { type = 13500 id = 504 }
    name     = "Zone de Chasse"
    location = 55
    base     = 55
    division = {
      id             = { type = 13500 id = 505 }
      name           = "Groupe de Chasse 24"
      type           = interceptor
      model          = 10
      strength       = 60
    }
    division = {
      id             = { type = 13500 id = 502 }
      name           = "Groupe de Chasse 23"
      type           = interceptor
      model          = 10
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 13500 id = 6013 }
    name     = "Zone de Bombardement"
    location = 55
    base     = 55
    division = {
      id             = { type = 13500 id = 6015 }
      name           = "Groupe de Bombardement Tactique 5"
      type           = tactical_bomber
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 13500 id = 6017 }
      name           = "Groupe de Bombardement d'Assaut 18"
      type           = cas
      model          = 4
      strength       = 30
    }
  }
}

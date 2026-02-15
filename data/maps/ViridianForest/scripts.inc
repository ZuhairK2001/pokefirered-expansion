# 1 "data/maps/ViridianForest/scripts.pory"

# 2 "data/maps/ViridianForest/scripts.pory"
ViridianForest_MapScripts::
# 3 "data/maps/ViridianForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianForest_OnTransition
# 4 "data/maps/ViridianForest/scripts.pory"
	.byte 0
# 5 "data/maps/ViridianForest/scripts.pory"

# 6 "data/maps/ViridianForest/scripts.pory"
ViridianForest_OnTransition::
# 7 "data/maps/ViridianForest/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
# 8 "data/maps/ViridianForest/scripts.pory"
	end
# 9 "data/maps/ViridianForest/scripts.pory"

# 10 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Youngster::
# 11 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_FriendsItchingToBattle, MSGBOX_NPC
# 12 "data/maps/ViridianForest/scripts.pory"
	end
# 13 "data/maps/ViridianForest/scripts.pory"

# 14 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Boy::
# 15 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_RanOutOfPokeBalls, MSGBOX_NPC
# 16 "data/maps/ViridianForest/scripts.pory"
	end
# 17 "data/maps/ViridianForest/scripts.pory"

# 18 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips1::
# 19 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_AvoidGrassyAreasWhenWeak, MSGBOX_SIGN
# 20 "data/maps/ViridianForest/scripts.pory"
	end
# 21 "data/maps/ViridianForest/scripts.pory"

# 22 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips2::
# 23 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_UseAntidoteForPoison, MSGBOX_SIGN
# 24 "data/maps/ViridianForest/scripts.pory"
	end
# 25 "data/maps/ViridianForest/scripts.pory"

# 26 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips3::
# 27 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_ContactOakViaPCToRatePokedex, MSGBOX_SIGN
# 28 "data/maps/ViridianForest/scripts.pory"
	end
# 29 "data/maps/ViridianForest/scripts.pory"

# 30 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips4::
# 31 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_CantCatchOwnedMons, MSGBOX_SIGN
# 32 "data/maps/ViridianForest/scripts.pory"
	end
# 33 "data/maps/ViridianForest/scripts.pory"

# 34 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips5::
# 35 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_WeakenMonsBeforeCapture, MSGBOX_SIGN
# 36 "data/maps/ViridianForest/scripts.pory"
	end
# 37 "data/maps/ViridianForest/scripts.pory"

# 38 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_ExitSign::
# 39 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_LeavingViridianForest, MSGBOX_SIGN
# 40 "data/maps/ViridianForest/scripts.pory"
	end
# 41 "data/maps/ViridianForest/scripts.pory"

# 42 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Rick::
# 43 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_RICK, ViridianForest_Text_RickIntro, ViridianForest_Text_RickDefeat
# 44 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/ViridianForest/scripts.pory"
	end
# 46 "data/maps/ViridianForest/scripts.pory"

# 47 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Doug::
# 48 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG, ViridianForest_Text_DougIntro, ViridianForest_Text_DougDefeat
# 49 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/ViridianForest/scripts.pory"
	end
# 51 "data/maps/ViridianForest/scripts.pory"

# 52 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Sammy::
# 53 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY, ViridianForest_Text_SammyIntro, ViridianForest_Text_SammyDefeat
# 54 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_SammyPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/ViridianForest/scripts.pory"
	end
# 56 "data/maps/ViridianForest/scripts.pory"

# 57 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Anthony::
# 58 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ANTHONY, ViridianForest_Text_AnthonyIntro, ViridianForest_Text_AnthonyDefeat
# 59 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/ViridianForest/scripts.pory"
	end
# 61 "data/maps/ViridianForest/scripts.pory"

# 62 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Charlie::
# 63 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_CHARLIE, ViridianForest_Text_CharlieIntro, ViridianForest_Text_CharlieDefeat
# 64 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/ViridianForest/scripts.pory"
	end

Viridian_ForestScripts::
	.byte 0


ViridianForest_ProtectiveRanger::
# 71 "data/maps/ViridianForest/scripts.pory"
	lock
# 72 "data/maps/ViridianForest/scripts.pory"
	faceplayer
# 73 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_ProtectiveRanger_Text_0, MSGBOX_DEFAULT
# 74 "data/maps/ViridianForest/scripts.pory"
	release
	end


ViridianForest_EvolutionCamper::
# 80 "data/maps/ViridianForest/scripts.pory"
	lock
# 81 "data/maps/ViridianForest/scripts.pory"
	faceplayer
# 82 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_EvolutionCamper_Text_0, MSGBOX_DEFAULT
# 83 "data/maps/ViridianForest/scripts.pory"
	release
	end


ViridianForest_SurroundedWorker::
# 88 "data/maps/ViridianForest/scripts.pory"
	lock
# 89 "data/maps/ViridianForest/scripts.pory"
	faceplayer
# 90 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_SurroundedWorker_Text_0, MSGBOX_DEFAULT
# 91 "data/maps/ViridianForest/scripts.pory"
	release
	end


ViridianForest_Protestor1::
# 97 "data/maps/ViridianForest/scripts.pory"
	lock
# 98 "data/maps/ViridianForest/scripts.pory"
	faceplayer
# 99 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Protestor1_Text_0, MSGBOX_DEFAULT
# 100 "data/maps/ViridianForest/scripts.pory"
	release
	end


ViridianForest_Protestor2::
# 105 "data/maps/ViridianForest/scripts.pory"
	lock
# 106 "data/maps/ViridianForest/scripts.pory"
	faceplayer
# 107 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Protestor2_Text_0, MSGBOX_DEFAULT
# 108 "data/maps/ViridianForest/scripts.pory"
	release
	end


ViridianForest_Protestor3::
# 113 "data/maps/ViridianForest/scripts.pory"
	lock
# 114 "data/maps/ViridianForest/scripts.pory"
	faceplayer
# 115 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Protestor3_Text_0, MSGBOX_DEFAULT
# 116 "data/maps/ViridianForest/scripts.pory"
	release
	end


ViridianForest_ProtestorPikachu::
# 122 "data/maps/ViridianForest/scripts.pory"
	lock
# 123 "data/maps/ViridianForest/scripts.pory"
	faceplayer
# 124 "data/maps/ViridianForest/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 125 "data/maps/ViridianForest/scripts.pory"
	waitmoncry
# 126 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_ProtestorPikachu_Text_0, MSGBOX_DEFAULT
# 127 "data/maps/ViridianForest/scripts.pory"
	release
	end


ViridianForest_SilphSurveySign::
# 133 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_SilphSurveySign_Text_0, MSGBOX_SIGN
	end


ViridianForest_ProtectiveRanger_Text_0:
# 73 "data/maps/ViridianForest/scripts.pory"
	.string "Hello. I'm a POKéMON RANGER from\nthe FIORE region.\pWhen I heard what SILPH CO. was\ndoing to VIRIDIAN FOREST, I had\pto come help.\pSee this grass patch? It looks\nsmall, but it's incredibly\pimportant.\pRare POKéMON live here that don't\nexist anywhere else in KANTO\panymore.\pWhen SILPH CO. bulldozed the west\nsection last year, most of their\ppopulation was wiped out.\pThis patch is their last refuge.\pI won't let them take this too.\pNot on my watch.$"

ViridianForest_EvolutionCamper_Text_0:
# 82 "data/maps/ViridianForest/scripts.pory"
	.string "You know what's crazy?\pThere used to be CATERPIE and\nWEEDLE everywhere in this forest.\pBut when SILPH CO. started\ntearing down trees last year,\psomething changed.\pMost of them evolved into METAPOD\nand KAKUNA almost immediately.\pIt's like... they knew they needed\nto protect themselves.\pNow the forest is full of\ncocoons, just waiting.\pWaiting to see if it's safe to\nemerge as BUTTERFREE and BEEDRILL.\pBut I don't think they feel safe\nanymore.$"

ViridianForest_SurroundedWorker_Text_0:
# 90 "data/maps/ViridianForest/scripts.pory"
	.string "Where the hell is DEREK?!\pHe was supposed to bring the\nsurvey plans from ROUTE 2 an\phour ago!\pDid those protestors get to him\nor something?\pUgh... I can't do anything\nwithout those plans.\pLook, even if he shows up, it\ndoesn't matter.\pSILPH CO. will just buy out the\nlocal government eventually.\pThis whole protest thing? Waste\nof time.\pIn six months, this'll all be a\nparking lot.$"

ViridianForest_Protestor1_Text_0:
# 99 "data/maps/ViridianForest/scripts.pory"
	.string "We're not letting him move!\pHe's been trying to survey this\narea for SILPH CO.!\pNot. Happening.$"

ViridianForest_Protestor2_Text_0:
# 107 "data/maps/ViridianForest/scripts.pory"
	.string "This guy thinks we'll just give\nup!\pWe've been here for MONTHS!\pWe're not going anywhere!$"

ViridianForest_Protestor3_Text_0:
# 115 "data/maps/ViridianForest/scripts.pory"
	.string "'Just a matter of time' he says!\pMaybe for him!\pBut we actually CARE about this\nplace!$"

ViridianForest_ProtestorPikachu_Text_0:
# 126 "data/maps/ViridianForest/scripts.pory"
	.string "The PIKACHU is standing with the\nprotestors!\pIt sparks angrily at the SILPH CO.\nworker whenever he tries to move.\pIt seems to understand what's at\nstake here.\pThis forest is its home too.$"

ViridianForest_SilphSurveySign_Text_0:
# 133 "data/maps/ViridianForest/scripts.pory"
	.string "SILPH CO. DEVELOPMENT PROJECT\pSITE: VIRIDIAN FOREST - SECTOR 7\pPLANNED: Regional Office Complex\nEmployee Parking Structure\pConstruction Start: PENDING\pLand Acquisition: IN PROGRESS\p'Progress Through Innovation'$"

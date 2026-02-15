# 1 "data/maps/Route2/scripts.pory"

# 2 "data/maps/Route2/scripts.pory"
Route2_MapScripts::
# 3 "data/maps/Route2/scripts.pory"
	.byte 0
# 4 "data/maps/Route2/scripts.pory"

# 5 "data/maps/Route2/scripts.pory"
Route2_EventScript_RouteSign::
# 6 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
# 7 "data/maps/Route2/scripts.pory"
	end
# 8 "data/maps/Route2/scripts.pory"

# 9 "data/maps/Route2/scripts.pory"
Route2_EventScript_DiglettsCaveSign::
# 10 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
# 11 "data/maps/Route2/scripts.pory"
	end

Route2_Scripts::
	.byte 0


Route2_BugCatcherBlockade1::
# 19 "data/maps/Route2/scripts.pory"
	lock
# 20 "data/maps/Route2/scripts.pory"
	faceplayer
# 21 "data/maps/Route2/scripts.pory"
	goto_if_set FLAG_ROUTE2_SILPH_WORKER_DEFEATED, Route2_BugCatcherBlockade1_2
# 26 "data/maps/Route2/scripts.pory"
	msgbox Route2_BugCatcherBlockade1_Text_1, MSGBOX_DEFAULT
# 27 "data/maps/Route2/scripts.pory"
	release
	end

Route2_BugCatcherBlockade1_2:
# 22 "data/maps/Route2/scripts.pory"
	msgbox Route2_BugCatcherBlockade1_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/Route2/scripts.pory"
	release
	end


Route2_BugCatcherBlockade2::
# 32 "data/maps/Route2/scripts.pory"
	lock
# 33 "data/maps/Route2/scripts.pory"
	faceplayer
# 34 "data/maps/Route2/scripts.pory"
	goto_if_set FLAG_ROUTE2_SILPH_WORKER_DEFEATED, Route2_BugCatcherBlockade2_2
# 40 "data/maps/Route2/scripts.pory"
	msgbox Route2_BugCatcherBlockade2_Text_1, MSGBOX_DEFAULT
# 41 "data/maps/Route2/scripts.pory"
	release
	end

Route2_BugCatcherBlockade2_2:
# 35 "data/maps/Route2/scripts.pory"
	msgbox Route2_BugCatcherBlockade2_Text_0, MSGBOX_DEFAULT
# 36 "data/maps/Route2/scripts.pory"
	release
	end


Route2_SilphWorker1::
# 46 "data/maps/Route2/scripts.pory"
	lock
# 47 "data/maps/Route2/scripts.pory"
	faceplayer
# 48 "data/maps/Route2/scripts.pory"
	msgbox Route2_SilphWorker1_Text_0, MSGBOX_DEFAULT
# 49 "data/maps/Route2/scripts.pory"
	release
	end


Route2_JadedWorker::
# 54 "data/maps/Route2/scripts.pory"
	lock
# 55 "data/maps/Route2/scripts.pory"
	faceplayer
# 56 "data/maps/Route2/scripts.pory"
	msgbox Route2_JadedWorker_Text_0, MSGBOX_DEFAULT
# 57 "data/maps/Route2/scripts.pory"
	release
	end


Route2_InvestigatingHiker::
# 62 "data/maps/Route2/scripts.pory"
	lock
# 63 "data/maps/Route2/scripts.pory"
	faceplayer
# 64 "data/maps/Route2/scripts.pory"
	msgbox Route2_InvestigatingHiker_Text_0, MSGBOX_DEFAULT
# 65 "data/maps/Route2/scripts.pory"
	release
	end


Route2_ConstructionSign::
# 71 "data/maps/Route2/scripts.pory"
	msgbox Route2_ConstructionSign_Text_0, MSGBOX_SIGN
	end


Route2_SilphWorkerTrigger_Left::
# 77 "data/maps/Route2/scripts.pory"
	lockall
# 80 "data/maps/Route2/scripts.pory"
	goto_if_set FLAG_ROUTE2_SILPH_WORKER_DEFEATED, Route2_SilphWorkerTrigger_Left_2
Route2_SilphWorkerTrigger_Left_1:
# 83 "data/maps/Route2/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 84 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_LookDown
# 85 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 87 "data/maps/Route2/scripts.pory"
	applymovement 10, Movement_SilphWorker_BlockLeft
# 88 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route2/scripts.pory"
	faceplayer
# 90 "data/maps/Route2/scripts.pory"
	msgbox Route2_SilphWorkerTrigger_Left_Text_0, MSGBOX_NPC
# 91 "data/maps/Route2/scripts.pory"
	closemessage
# 93 "data/maps/Route2/scripts.pory"
	msgbox Route2_SilphWorkerTrigger_Left_Text_1, MSGBOX_YESNO
# 95 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route2_SilphWorkerTrigger_Left_5
Route2_SilphWorkerTrigger_Left_4:
# 104 "data/maps/Route2/scripts.pory"
	msgbox Route2_SilphWorkerTrigger_Left_Text_3, MSGBOX_NPC
# 105 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_DEREK, SilphWorker_IntroText, SilphWorker_DefeatText, Route2_SilphWorker_PostBattle_Left
# 106 "data/maps/Route2/scripts.pory"
	goto SkipSilphWorker
# 108 "data/maps/Route2/scripts.pory"
SkipSilphWorker:
# 109 "data/maps/Route2/scripts.pory"
	releaseall
	end

Route2_SilphWorkerTrigger_Left_2:
# 81 "data/maps/Route2/scripts.pory"
	goto SkipSilphWorker
	goto Route2_SilphWorkerTrigger_Left_1

Route2_SilphWorkerTrigger_Left_5:
# 96 "data/maps/Route2/scripts.pory"
	msgbox Route2_SilphWorkerTrigger_Left_Text_2, MSGBOX_NPC
# 97 "data/maps/Route2/scripts.pory"
	closemessage
# 98 "data/maps/Route2/scripts.pory"
	applymovement 10, Movement_SilphWorker_ReturnLeft
# 99 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route2/scripts.pory"
	goto SkipSilphWorker
	goto Route2_SilphWorkerTrigger_Left_4


Route2_SilphWorker_PostBattle_Left::
# 114 "data/maps/Route2/scripts.pory"
	msgbox Route2_SilphWorker_PostBattle_Left_Text_0, MSGBOX_DEFAULT
# 115 "data/maps/Route2/scripts.pory"
	closemessage
# 116 "data/maps/Route2/scripts.pory"
	applymovement 10, Movement_SilphWorker_StormOffLeft
# 117 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route2/scripts.pory"
	removeobject 10
# 119 "data/maps/Route2/scripts.pory"
	setflag FLAG_ROUTE2_SILPH_WORKER_DEFEATED
# 120 "data/maps/Route2/scripts.pory"
	release
	end


Route2_SilphWorkerTrigger_Right::
# 125 "data/maps/Route2/scripts.pory"
	lockall
# 128 "data/maps/Route2/scripts.pory"
	goto_if_set FLAG_ROUTE2_SILPH_WORKER_DEFEATED, Route2_SilphWorkerTrigger_Right_2
Route2_SilphWorkerTrigger_Right_1:
# 131 "data/maps/Route2/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 132 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_LookDown
# 133 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 135 "data/maps/Route2/scripts.pory"
	applymovement 10, Movement_SilphWorker_BlockRight
# 136 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route2/scripts.pory"
	faceplayer
# 138 "data/maps/Route2/scripts.pory"
	msgbox Route2_SilphWorkerTrigger_Left_Text_0, MSGBOX_NPC
# 139 "data/maps/Route2/scripts.pory"
	closemessage
# 140 "data/maps/Route2/scripts.pory"
	msgbox Route2_SilphWorkerTrigger_Left_Text_1, MSGBOX_YESNO
# 142 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route2_SilphWorkerTrigger_Right_5
Route2_SilphWorkerTrigger_Right_4:
# 151 "data/maps/Route2/scripts.pory"
	msgbox Route2_SilphWorkerTrigger_Left_Text_3, MSGBOX_DEFAULT
# 152 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_DEREK, SilphWorker_IntroText, SilphWorker_DefeatText, Route2_SilphWorker_PostBattle_Right
# 153 "data/maps/Route2/scripts.pory"
	goto SkipSilphWorkerRight
# 155 "data/maps/Route2/scripts.pory"
SkipSilphWorkerRight:
# 156 "data/maps/Route2/scripts.pory"
	releaseall
	end

Route2_SilphWorkerTrigger_Right_2:
# 129 "data/maps/Route2/scripts.pory"
	goto SkipSilphWorkerRight
	goto Route2_SilphWorkerTrigger_Right_1

Route2_SilphWorkerTrigger_Right_5:
# 143 "data/maps/Route2/scripts.pory"
	msgbox Route2_SilphWorkerTrigger_Left_Text_2, MSGBOX_NPC
# 144 "data/maps/Route2/scripts.pory"
	closemessage
# 145 "data/maps/Route2/scripts.pory"
	applymovement 10, Movement_SilphWorker_ReturnRight
# 146 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route2/scripts.pory"
	goto SkipSilphWorkerRight
	goto Route2_SilphWorkerTrigger_Right_4


Route2_SilphWorker_PostBattle_Right::
# 161 "data/maps/Route2/scripts.pory"
	msgbox Route2_SilphWorker_PostBattle_Left_Text_0, MSGBOX_DEFAULT
# 162 "data/maps/Route2/scripts.pory"
	closemessage
# 163 "data/maps/Route2/scripts.pory"
	applymovement 10, Movement_SilphWorker_StormOffRight
# 164 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route2/scripts.pory"
	removeobject 10
# 166 "data/maps/Route2/scripts.pory"
	setflag FLAG_ROUTE2_SILPH_WORKER_DEFEATED
# 167 "data/maps/Route2/scripts.pory"
	release
	end


# 172 "data/maps/Route2/scripts.pory"
Player_LookDown:
# 173 "data/maps/Route2/scripts.pory"
	face_down
# 174 "data/maps/Route2/scripts.pory"
	step_end

# 177 "data/maps/Route2/scripts.pory"
Movement_SilphWorker_BlockLeft:
# 178 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 179 "data/maps/Route2/scripts.pory"
	walk_up
# 180 "data/maps/Route2/scripts.pory"
	face_player
# 181 "data/maps/Route2/scripts.pory"
	step_end

# 184 "data/maps/Route2/scripts.pory"
Movement_SilphWorker_ReturnLeft:
# 185 "data/maps/Route2/scripts.pory"
	walk_down
# 186 "data/maps/Route2/scripts.pory"
	step_end

# 189 "data/maps/Route2/scripts.pory"
Movement_SilphWorker_StormOffLeft:
# 190 "data/maps/Route2/scripts.pory"
	walk_down
# 191 "data/maps/Route2/scripts.pory"
	walk_down
# 192 "data/maps/Route2/scripts.pory"
	walk_down
# 193 "data/maps/Route2/scripts.pory"
	walk_down
# 194 "data/maps/Route2/scripts.pory"
	walk_down
# 195 "data/maps/Route2/scripts.pory"
	step_end

# 199 "data/maps/Route2/scripts.pory"
Movement_SilphWorker_BlockRight:
# 200 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 201 "data/maps/Route2/scripts.pory"
	walk_right
# 202 "data/maps/Route2/scripts.pory"
	walk_up
# 203 "data/maps/Route2/scripts.pory"
	face_player
# 204 "data/maps/Route2/scripts.pory"
	step_end

# 207 "data/maps/Route2/scripts.pory"
Movement_SilphWorker_ReturnRight:
# 209 "data/maps/Route2/scripts.pory"
	walk_down
# 210 "data/maps/Route2/scripts.pory"
	walk_left
# 211 "data/maps/Route2/scripts.pory"
	step_end

# 214 "data/maps/Route2/scripts.pory"
Movement_SilphWorker_StormOffRight:
# 215 "data/maps/Route2/scripts.pory"
	walk_left
# 216 "data/maps/Route2/scripts.pory"
	walk_down
# 217 "data/maps/Route2/scripts.pory"
	walk_down
# 218 "data/maps/Route2/scripts.pory"
	walk_down
# 219 "data/maps/Route2/scripts.pory"
	walk_down
# 220 "data/maps/Route2/scripts.pory"
	walk_down
# 221 "data/maps/Route2/scripts.pory"
	step_end

# 225 "data/maps/Route2/scripts.pory"
Movement_SilphWorker_Angry:
# 226 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 227 "data/maps/Route2/scripts.pory"
	step_end

Route2_InformedHiker::
# 240 "data/maps/Route2/scripts.pory"
	lock
# 241 "data/maps/Route2/scripts.pory"
	faceplayer
# 242 "data/maps/Route2/scripts.pory"
	msgbox Route2_InformedHiker_Text_0, MSGBOX_DEFAULT
# 243 "data/maps/Route2/scripts.pory"
	release
	end


Route2_PhoneWorker::
# 248 "data/maps/Route2/scripts.pory"
	lock
# 249 "data/maps/Route2/scripts.pory"
	faceplayer
# 252 "data/maps/Route2/scripts.pory"
	goto_if_set FLAG_ROUTE2_SILPH_WORKER_DEFEATED, Route2_PhoneWorker_2
# 258 "data/maps/Route2/scripts.pory"
	msgbox Route2_PhoneWorker_Text_1, MSGBOX_DEFAULT
# 259 "data/maps/Route2/scripts.pory"
	release
	end

Route2_PhoneWorker_2:
# 253 "data/maps/Route2/scripts.pory"
	msgbox Route2_PhoneWorker_Text_0, MSGBOX_DEFAULT
# 254 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Elder::
# 264 "data/maps/Route2/scripts.pory"
	lock
# 265 "data/maps/Route2/scripts.pory"
	faceplayer
# 266 "data/maps/Route2/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 268 "data/maps/Route2/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROUTE2_ELDER, Route2_Elder_2
# 275 "data/maps/Route2/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Route2_Elder_5
# 282 "data/maps/Route2/scripts.pory"
	msgbox Route2_Elder_Text_2, MSGBOX_YESNO
# 284 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route2_Elder_8
# 290 "data/maps/Route2/scripts.pory"
	msgbox Route2_Elder_Text_4, MSGBOX_NPC
# 291 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_ELDER, Route2Elder_IntroText, Route2Elder_DefeatText, Route2_Elder_PostBattle
# 292 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Elder_2:
# 269 "data/maps/Route2/scripts.pory"
	msgbox Route2_Elder_Text_0, MSGBOX_NPC
# 270 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Elder_5:
# 276 "data/maps/Route2/scripts.pory"
	msgbox Route2_Elder_Text_1, MSGBOX_NPC
# 277 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Elder_8:
# 285 "data/maps/Route2/scripts.pory"
	msgbox Route2_Elder_Text_3, MSGBOX_NPC
# 286 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Elder_PostBattle::
# 297 "data/maps/Route2/scripts.pory"
	msgbox Route2_Elder_PostBattle_Text_0, MSGBOX_DEFAULT
# 298 "data/maps/Route2/scripts.pory"
	giveitem ITEM_GOLD_BOTTLE_CAP
# 299 "data/maps/Route2/scripts.pory"
	msgbox Route2_Elder_PostBattle_Text_1, MSGBOX_DEFAULT
# 300 "data/maps/Route2/scripts.pory"
	setflag FLAG_DEFEATED_ROUTE2_ELDER
# 301 "data/maps/Route2/scripts.pory"
	release
	end


Route2_BugCatcherBlockade1_Text_0:
# 22 "data/maps/Route2/scripts.pory"
	.string "Whoa! You stood up to SILPH CO.!\pThat took guts!\pMaybe there's hope for VIRIDIAN\nFOREST after all.\pThanks for not backing down!$"

Route2_BugCatcherBlockade1_Text_1:
# 26 "data/maps/Route2/scripts.pory"
	.string "Hey! SILPH CO. isn't getting\nthrough here!\pVIRIDIAN FOREST is one of the\nlast untouched POKéMON\psanctuaries in KANTO!\pThey've already paved over MT.\nMOON and drained half of CERULEAN\pCAPE!\pNot this time!$"

Route2_BugCatcherBlockade2_Text_0:
# 35 "data/maps/Route2/scripts.pory"
	.string "You really showed that SILPH CO.\ngoon what's what!\pIf more people fought back like\nyou, maybe we could actually\psave this place.\pKeep fighting the good fight!$"

Route2_BugCatcherBlockade2_Text_1:
# 40 "data/maps/Route2/scripts.pory"
	.string "SILPH CO. says they're 'improving\ninfrastructure.'\pBut we all know they just want\nto clear the forest for their\pnew factory complex!\pRare BUG POKéMON live here that\ndon't exist anywhere else!\pIf they go extinct, they're gone\nforever!$"

Route2_SilphWorker1_Text_0:
# 48 "data/maps/Route2/scripts.pory"
	.string "These protestors are costing\nSILPH CO. thousands of\pPOKéDOLLARS every day!\pLook, I'm just following orders.\nI need this job to feed my family.\pBut between you and me... I used\nto catch WEEDLE here as a kid.\pIt's... complicated.$"

Route2_JadedWorker_Text_0:
# 56 "data/maps/Route2/scripts.pory"
	.string "This path? Used to have wild\nPOKéMON everywhere.\pNow it's just a road for office\nworkers heading to their sad\pSILPH CO. desk jobs.\pWe paved over paradise for that.\nGreat.$"

Route2_InvestigatingHiker_Text_0:
# 64 "data/maps/Route2/scripts.pory"
	.string "See this rock outcrop? Wasn't\nhere six months ago.\pJust... appeared. Pushed right up\nthrough the soil.\pI've been mapping TEAM ROCKET's\nold tunnel network.\pTheir leader had escape routes\nall over KANTO. Underground.\pI think this connects to one of\nthem.\pBut SILPH CO. keeps blocking my\ninvestigation. Say it's\p'private property' now.\pWhat are they hiding down there?$"

Route2_ConstructionSign_Text_0:
# 71 "data/maps/Route2/scripts.pory"
	.string "SILPH CO. DEVELOPMENT PROJECT\pROUTE 2 MODERNIZATION INITIATIVE\pPhase 1: Forest Clearing\pPhase 2: Commercial Zone\pPhase 3: Industrial Complex\p'Building Tomorrow's KANTO Today!'$"

Route2_SilphWorkerTrigger_Left_Text_0:
# 90 "data/maps/Route2/scripts.pory"
	.string "Hey! This is SILPH CO. property!\pYou can't just walk through here!\pWait for the public path on the\nright to be finished!$"

Route2_SilphWorkerTrigger_Left_Text_1:
# 93 "data/maps/Route2/scripts.pory"
	.string "Do we have an issue here?$"

Route2_SilphWorkerTrigger_Left_Text_2:
# 96 "data/maps/Route2/scripts.pory"
	.string "Good. Now let me deal with\nthese deluded BUG CATCHERS.$"

Route2_SilphWorkerTrigger_Left_Text_3:
# 104 "data/maps/Route2/scripts.pory"
	.string "Listen, kid.\pSILPH CO. is trying to make the\nworld a better place!\pProgress requires sacrifice!\pMaybe I need to teach you some\nrespect!$"

Route2_SilphWorker_PostBattle_Left_Text_0:
# 114 "data/maps/Route2/scripts.pory"
	.string "Tch... whatever.\pYou're just delaying the\ninevitable.\pSILPH CO. always gets what it\nwants.$"

Route2_InformedHiker_Text_0:
# 242 "data/maps/Route2/scripts.pory"
	.string "That SILPH CO. worker?\pHe wants folks to use this path\nso they can claim it's 'necessary\pinfrastructure.'\pThen they'll tear down VIRIDIAN\nFOREST for their fancy new\pheadquarters.\pThose kids are putting up a\nfight, but...\pI reckon it'll take a while\nbefore any of us get through.$"

Route2_PhoneWorker_Text_0:
# 253 "data/maps/Route2/scripts.pory"
	.string "...\p...\pDerek lost?\pBut... that's not...\p...\pSorry, I need to... I have to\ncall this in.\p...$"

Route2_PhoneWorker_Text_1:
# 258 "data/maps/Route2/scripts.pory"
	.string "Yeah, PORYGON units are shipping\non time...\pUh huh... conversion rate is...\nwait, hold on--\pKid, I'm working. Can't you see\nI'm on a call?\pJust... go around or something.\pAnyway, as I was saying, the\ndigital synthesis metrics...$"

Route2_Elder_Text_0:
# 269 "data/maps/Route2/scripts.pory"
	.string "You've come far, young one.\pKeep that spirit burning bright.$"

Route2_Elder_Text_1:
# 276 "data/maps/Route2/scripts.pory"
	.string "Hmm... I sense potential in you.\pBut you are still unproven.\pReturn when you've earned your\nfirst GYM BADGE.\pOnly then will I test your\nstrength.$"

Route2_Elder_Text_2:
# 282 "data/maps/Route2/scripts.pory"
	.string "Ah, you've returned!\pI can see the mark of a GYM\nLEADER's approval on you.\pNow... let us see if you are\ntruly worthy!$"

Route2_Elder_Text_3:
# 285 "data/maps/Route2/scripts.pory"
	.string "Not yet ready? Very well.\pReflection before battle is the\nmark of wisdom.$"

Route2_Elder_Text_4:
# 290 "data/maps/Route2/scripts.pory"
	.string "Then let us begin!$"

Route2_Elder_PostBattle_Text_0:
# 297 "data/maps/Route2/scripts.pory"
	.string "Excellent! You've proven yourself\nworthy indeed!\pTake this. It's a rare treasure\nthat will help you raise your\lPOKéMON to their full potential.$"

Route2_Elder_PostBattle_Text_1:
# 299 "data/maps/Route2/scripts.pory"
	.string "Use it wisely, young trainer.\pYour journey has only just begun.$"

SilphWorker_IntroText::
# 230 "data/maps/Route2/scripts.pory"
	.string "You want a piece of this?!$"

SilphWorker_DefeatText::
# 234 "data/maps/Route2/scripts.pory"
	.string "I... I lost?!$"

Route2Elder_IntroText::
# 305 "data/maps/Route2/scripts.pory"
	.string "Show me your resolve!$"

Route2Elder_DefeatText::
# 309 "data/maps/Route2/scripts.pory"
	.string "Remarkable... truly\nremarkable...$"

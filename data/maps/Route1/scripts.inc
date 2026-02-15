# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
	.byte 0
# 4 "data/maps/Route1/scripts.pory"

# 5 "data/maps/Route1/scripts.pory"
Route1_EventScript_MartClerk::
# 6 "data/maps/Route1/scripts.pory"
	lock
# 7 "data/maps/Route1/scripts.pory"
	faceplayer
# 8 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 9 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 10 "data/maps/Route1/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 11 "data/maps/Route1/scripts.pory"
	checkitemspace ITEM_POTION
# 12 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 13 "data/maps/Route1/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 14 "data/maps/Route1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 15 "data/maps/Route1/scripts.pory"
	message Text_ObtainedTheX
# 16 "data/maps/Route1/scripts.pory"
	waitmessage
# 17 "data/maps/Route1/scripts.pory"
	waitfanfare
# 18 "data/maps/Route1/scripts.pory"
	additem ITEM_POTION
# 19 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 20 "data/maps/Route1/scripts.pory"
	call EventScript_RestorePrevTextColor
# 21 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
# 22 "data/maps/Route1/scripts.pory"
	release
# 23 "data/maps/Route1/scripts.pory"
	end
# 24 "data/maps/Route1/scripts.pory"

# 25 "data/maps/Route1/scripts.pory"
Route1_EventScript_AlreadyGotPotion::
# 26 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 27 "data/maps/Route1/scripts.pory"
	release
# 28 "data/maps/Route1/scripts.pory"
	end
# 29 "data/maps/Route1/scripts.pory"

# 30 "data/maps/Route1/scripts.pory"
Route1_EventScript_Boy::
# 31 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
# 32 "data/maps/Route1/scripts.pory"
	end
# 33 "data/maps/Route1/scripts.pory"

# 34 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSign::
# 35 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
# 36 "data/maps/Route1/scripts.pory"
	end

Route1_Scripts::
	.byte 0


Route1_GreatBall::
# 43 "data/maps/Route1/scripts.pory"
	lock
# 46 "data/maps/Route1/scripts.pory"
	giveitem ITEM_GREAT_BALL, 1
# 47 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route1_GreatBall_2
# 54 "data/maps/Route1/scripts.pory"
	removeobject 3
# 57 "data/maps/Route1/scripts.pory"
	setflag FLAG_ROUTE1_GREAT_BALL
# 59 "data/maps/Route1/scripts.pory"
	release
	end

Route1_GreatBall_2:
# 49 "data/maps/Route1/scripts.pory"
	msgbox Route1_GreatBall_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/Route1/scripts.pory"
	release
	end


Route1_MartGuy::
# 64 "data/maps/Route1/scripts.pory"
	lock
# 65 "data/maps/Route1/scripts.pory"
	faceplayer
# 66 "data/maps/Route1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ROUTE1_POKEBALLS, Route1_MartGuy_2
# 77 "data/maps/Route1/scripts.pory"
	msgbox Route1_MartGuy_Text_3, MSGBOX_DEFAULT
Route1_MartGuy_1:
# 79 "data/maps/Route1/scripts.pory"
	release
	end

Route1_MartGuy_2:
# 67 "data/maps/Route1/scripts.pory"
	msgbox Route1_MartGuy_Text_0, MSGBOX_DEFAULT
# 68 "data/maps/Route1/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 69 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route1_MartGuy_6
# 74 "data/maps/Route1/scripts.pory"
	setflag FLAG_RECEIVED_ROUTE1_POKEBALLS
# 75 "data/maps/Route1/scripts.pory"
	msgbox Route1_MartGuy_Text_2, MSGBOX_DEFAULT
	goto Route1_MartGuy_1

Route1_MartGuy_6:
# 70 "data/maps/Route1/scripts.pory"
	msgbox Route1_MartGuy_Text_1, MSGBOX_DEFAULT
# 71 "data/maps/Route1/scripts.pory"
	release
	end


Route1_SilphWorker::
# 84 "data/maps/Route1/scripts.pory"
	lock
# 85 "data/maps/Route1/scripts.pory"
	faceplayer
# 86 "data/maps/Route1/scripts.pory"
	msgbox Route1_SilphWorker_Text_0, MSGBOX_NPC
# 87 "data/maps/Route1/scripts.pory"
	release
	end


Route1_ObservantBoy::
# 92 "data/maps/Route1/scripts.pory"
	lock
# 93 "data/maps/Route1/scripts.pory"
	faceplayer
# 94 "data/maps/Route1/scripts.pory"
	msgbox Route1_ObservantBoy_Text_0, MSGBOX_NPC
# 95 "data/maps/Route1/scripts.pory"
	release
	end


Route1_GreatBall_Text_0:
# 49 "data/maps/Route1/scripts.pory"
	.string "Your BAG is full!$"

Route1_MartGuy_Text_0:
# 67 "data/maps/Route1/scripts.pory"
	.string "Hi! I work at the POKé MART.\pIt's a convenient shop, so please\nvisit us in VIRIDIAN CITY.\pI know, I'll give you a sample\nof our products!$"

Route1_MartGuy_Text_1:
# 70 "data/maps/Route1/scripts.pory"
	.string "Oh! You don't have room.\pCome back when you have space.$"

Route1_MartGuy_Text_2:
# 75 "data/maps/Route1/scripts.pory"
	.string "We also carry POTIONs and other\nuseful items!$"

Route1_MartGuy_Text_3:
# 77 "data/maps/Route1/scripts.pory"
	.string "Our POKé MART in VIRIDIAN CITY\nhas everything you need!$"

Route1_SilphWorker_Text_0:
# 86 "data/maps/Route1/scripts.pory"
	.string "SILPH CO. sent me to assess\nPALLET TOWN's potential.\pAll that undeveloped land...\nIt's worth millions!\pToo bad PROF. OAK won't sell.\pFor now, anyway.$"

Route1_ObservantBoy_Text_0:
# 94 "data/maps/Route1/scripts.pory"
	.string "Hmm... There's way more CATERPIE\nand WEEDLE here than usual.\pI wonder if it has something to\ndo with all that construction in\lVIRIDIAN FOREST?\pPoor POKéMON...$"

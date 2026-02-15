# 1 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_MapScripts::
# 3 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.byte 0
# 4 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 5 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom::
# 6 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lock
# 7 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 8 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_MomHeal
# 9 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 10 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
# 11 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
# 12 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 13 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_FaceOriginalDirection
# 14 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 15 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
# 16 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 17 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 18 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
# 19 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
# 20 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 21 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 22 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
# 23 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
# 24 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 25 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 26 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomHeal::
# 27 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
# 28 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 29 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 30 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
# 31 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
# 32 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 33 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 34 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
@ Displays special text if interacted with from side or back (which are normally inaccessible)
# 35 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV::
# 36 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lockall
# 37 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 38 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 39 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 40 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 41 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 42 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 43 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 44 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 45 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 46 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 47 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 48 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 49 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 50 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
# 51 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 52 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 53 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 54 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
# 55 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return

Player_House_Scripts::
	.byte 0


Raichu_Pokeball::
# 62 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lockall
# 63 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	showmonpic SPECIES_RAICHU, 10, 3
# 64 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox Raichu_Pokeball_Text_0, MSGBOX_YESNO
# 65 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Raichu_Pokeball_2
# 88 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	hidemonpic
# 89 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox NewProfessor_NotChosen
Raichu_Pokeball_1:
# 91 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 92 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
	end

Raichu_Pokeball_2:
# 66 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	givemon SPECIES_RAICHU, 50, ITEM_MASTER_BALL
# 67 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Raichu_Pokeball_5
# 74 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Raichu_Pokeball_6
# 83 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	hidemonpic
# 84 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox Raichu_Pokeball_Text_3
	goto Raichu_Pokeball_1

Raichu_Pokeball_5:
# 68 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 69 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox Raichu_Pokeball_Text_1
# 70 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	removeobject 2
# 71 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	hidemonpic
# 72 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
	goto Raichu_Pokeball_1

Raichu_Pokeball_6:
# 75 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 76 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox Raichu_Pokeball_Text_2
# 77 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	removeobject 2
# 78 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	hidemonpic
# 79 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
	goto Raichu_Pokeball_1


GiveAllBadges_NPC::
# 103 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lock
# 104 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 105 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox GiveAllBadges_NPC_Text_0, MSGBOX_DEFAULT
# 107 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_BADGE01_GET
# 108 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_BADGE02_GET
# 109 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_BADGE03_GET
# 110 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 111 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_BADGE05_GET
# 112 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_BADGE06_GET
# 113 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_BADGE07_GET
# 114 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_BADGE08_GET
# 116 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 117 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox GiveAllBadges_NPC_Text_1, MSGBOX_DEFAULT
# 118 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitfanfare
# 120 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox GiveAllBadges_NPC_Text_2, MSGBOX_DEFAULT
# 121 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
	end


Raichu_Pokeball_Text_0:
# 64 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "Do you want to take dad's Raichu?$"

Raichu_Pokeball_Text_1:
# 69 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "Recieved Raichu!$"

Raichu_Pokeball_Text_2:
# 76 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "Recieved Mudkip$"

Raichu_Pokeball_Text_3:
# 84 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "No More Room$"

GiveAllBadges_NPC_Text_0:
# 105 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "Need some badges for testing?\pHere, have all 8!$"

GiveAllBadges_NPC_Text_1:
# 117 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "Received all 8 GYM BADGES!$"

GiveAllBadges_NPC_Text_2:
# 120 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "Your POKéMON should obey you now!$"

NewProfessor_NotChosen::
# 97 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "You did not choose the Pokemon$"

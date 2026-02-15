NewPlayerHouseUpperFlow_MapScripts::
	.byte 0


SinnohFamily_Daughter::
# 6 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	lock
# 7 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	faceplayer
# 8 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, SinnohFamily_Daughter_2
# 10 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	goto_if_unset FLAG_DEFEATED_SINNOH_GIRL, SinnohFamily_Daughter_3
# 17 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	msgbox SinnohFamily_Daughter_Text_3, MSGBOX_DEFAULT
SinnohFamily_Daughter_1:
# 19 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	release
	end

SinnohFamily_Daughter_2:
# 9 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	msgbox SinnohFamily_Daughter_Text_0, MSGBOX_DEFAULT
	goto SinnohFamily_Daughter_1

SinnohFamily_Daughter_3:
# 11 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	msgbox SinnohFamily_Daughter_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	setflag FLAG_DEFEATED_SINNOH_GIRL
# 14 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	msgbox SinnohFamily_Daughter_Text_2, MSGBOX_DEFAULT
	goto SinnohFamily_Daughter_1


# 23 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
Roserade_LeerAndTurnAway:
# 24 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	face_player
# 25 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	emote_exclamation_mark
# 26 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	delay_16
# 26 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	delay_16
# 27 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	face_away_player
	step_end

SinnohFamily_Roserade::
# 31 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	lock
# 32 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	playmoncry SPECIES_ROSERADE, CRY_MODE_ENCOUNTER
# 33 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	msgbox SinnohFamily_Roserade_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	waitmoncry
# 35 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	applymovement LOCALID_ROSERADE, Roserade_LeerAndTurnAway
# 36 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	waitmovement 0
# 37 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	msgbox SinnohFamily_Roserade_Text_1, MSGBOX_DEFAULT
# 38 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	release
	end


SinnohFamily_Daughter_Text_0:
# 9 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	.string "Back in Sinnoh, I was one of the\ntop trainers in my town.\pI had a full team and everything!\pBut after moving here, I just...\nI don't know.\pHm...\pYou've got potential, I can tell.\pCome back and battle me once\nyou've earned 4 GYM BADGES.\pLet's see if Kanto trainers are\nas tough as Sinnoh ones!$"

SinnohFamily_Daughter_Text_1:
# 11 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	.string "Oh! You have 4 BADGES now?\pAlright, let's battle!\pI'll show you how we train in\nSinnoh!$"

SinnohFamily_Daughter_Text_2:
# 14 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	.string "Wow! You're really strong!\pHere, take this. You've earned it!$"

SinnohFamily_Daughter_Text_3:
# 17 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	.string "That was a great battle!\pKeep training hard!$"

SinnohFamily_Roserade_Text_0:
# 33 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	.string "Roserade glares at you with\nintimidating eyes...$"

SinnohFamily_Roserade_Text_1:
# 37 "data/maps/NewPlayerHouseUpperFlow/scripts.pory"
	.string "It turned its back on you!$"

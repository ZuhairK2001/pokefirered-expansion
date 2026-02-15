PalletHiddenPotential_MapScripts::
	.byte 0


HP_Kadabra::
# 7 "data/maps/PalletHiddenPotential/scripts.pory"
	lock
# 8 "data/maps/PalletHiddenPotential/scripts.pory"
	applymovement LOCALID_KADABRA, HP_Kadabra_Mov
# 9 "data/maps/PalletHiddenPotential/scripts.pory"
	playmoncry SPECIES_KADABRA, CRY_MODE_NORMAL
# 10 "data/maps/PalletHiddenPotential/scripts.pory"
	msgbox HP_Kadabra_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/PalletHiddenPotential/scripts.pory"
	waitmoncry
# 12 "data/maps/PalletHiddenPotential/scripts.pory"
	release
	end


Channeler_HiddenPower::
# 17 "data/maps/PalletHiddenPotential/scripts.pory"
	lock
# 18 "data/maps/PalletHiddenPotential/scripts.pory"
	faceplayer
# 19 "data/maps/PalletHiddenPotential/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HIDDEN_POWER, Channeler_HiddenPower_2
# 30 "data/maps/PalletHiddenPotential/scripts.pory"
	msgbox Channeler_HiddenPower_Text_3, MSGBOX_DEFAULT
Channeler_HiddenPower_1:
# 32 "data/maps/PalletHiddenPotential/scripts.pory"
	release
	end

Channeler_HiddenPower_2:
# 20 "data/maps/PalletHiddenPotential/scripts.pory"
	msgbox Channeler_HiddenPower_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/PalletHiddenPotential/scripts.pory"
	giveitem ITEM_TM10
# 22 "data/maps/PalletHiddenPotential/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Channeler_HiddenPower_6
# 27 "data/maps/PalletHiddenPotential/scripts.pory"
	setflag FLAG_RECEIVED_HIDDEN_POWER
# 28 "data/maps/PalletHiddenPotential/scripts.pory"
	msgbox Channeler_HiddenPower_Text_2, MSGBOX_DEFAULT
	goto Channeler_HiddenPower_1

Channeler_HiddenPower_6:
# 23 "data/maps/PalletHiddenPotential/scripts.pory"
	msgbox Channeler_HiddenPower_Text_1, MSGBOX_DEFAULT
# 24 "data/maps/PalletHiddenPotential/scripts.pory"
	release
	end


# 36 "data/maps/PalletHiddenPotential/scripts.pory"
HP_Kadabra_Mov:
# 37 "data/maps/PalletHiddenPotential/scripts.pory"
	face_player
	step_end

HP_Kadabra_Text_0:
# 10 "data/maps/PalletHiddenPotential/scripts.pory"
	.string "Kadabraaa...$"

Channeler_HiddenPower_Text_0:
# 20 "data/maps/PalletHiddenPotential/scripts.pory"
	.string "Ah... I sense a strong bond\nbetween you and your POKéMON.\pThe spirits have guided me to\ngive you this...$"

Channeler_HiddenPower_Text_1:
# 23 "data/maps/PalletHiddenPotential/scripts.pory"
	.string "You don't have room...\pCome back when you have space.$"

Channeler_HiddenPower_Text_2:
# 28 "data/maps/PalletHiddenPotential/scripts.pory"
	.string "That is HIDDEN POWER.\pIts type changes depending on\nthe POKéMON's hidden strength!\pThe spirits reveal different\npowers to different POKéMON...$"

Channeler_HiddenPower_Text_3:
# 30 "data/maps/PalletHiddenPotential/scripts.pory"
	.string "The spirits are always watching\nover you and your POKéMON...$"

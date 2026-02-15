ViridanHouse_MapScripts::
	.byte 0


Little_Girl_ViridianHouse_1::
# 5 "data/maps/ViridanHouse/scripts.pory"
	lock
# 6 "data/maps/ViridanHouse/scripts.pory"
	faceplayer
# 7 "data/maps/ViridanHouse/scripts.pory"
	msgbox Little_Girl_ViridianHouse_1_Text_0, MSGBOX_NPC
# 8 "data/maps/ViridanHouse/scripts.pory"
	releaseall
	end


GentleMan_ViridianHouse_1::
# 13 "data/maps/ViridanHouse/scripts.pory"
	lock
# 14 "data/maps/ViridanHouse/scripts.pory"
	faceplayer
# 15 "data/maps/ViridanHouse/scripts.pory"
	msgbox GentleMan_ViridianHouse_1_Text_0, MSGBOX_NPC
# 16 "data/maps/ViridanHouse/scripts.pory"
	releaseall
	end


ViridianCity_BrokeMan::
# 21 "data/maps/ViridanHouse/scripts.pory"
	lock
# 23 "data/maps/ViridanHouse/scripts.pory"
	msgbox ViridianCity_BrokeMan_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ViridanHouse/scripts.pory"
	applymovement BROKE_MAN, ViridianHouse1_Mov_ManHop
# 25 "data/maps/ViridanHouse/scripts.pory"
	playse SE_LEDGE
# 26 "data/maps/ViridanHouse/scripts.pory"
	waitmovement 0
# 27 "data/maps/ViridanHouse/scripts.pory"
	release
	end


ViridianCity_ExpensiveWife::
# 32 "data/maps/ViridanHouse/scripts.pory"
	lock
# 33 "data/maps/ViridanHouse/scripts.pory"
	msgbox ViridianCity_ExpensiveWife_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ViridanHouse/scripts.pory"
	release
	end


ViridianCity_Clefairy::
# 39 "data/maps/ViridanHouse/scripts.pory"
	lock
# 40 "data/maps/ViridanHouse/scripts.pory"
	faceplayer
# 41 "data/maps/ViridanHouse/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 42 "data/maps/ViridanHouse/scripts.pory"
	msgbox ViridianCity_Clefairy_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/ViridanHouse/scripts.pory"
	waitmoncry
# 44 "data/maps/ViridanHouse/scripts.pory"
	release
	end


# 48 "data/maps/ViridanHouse/scripts.pory"
ViridianHouse1_Mov_ManHop:
# 49 "data/maps/ViridanHouse/scripts.pory"
	jump_in_place_right
# 50 "data/maps/ViridanHouse/scripts.pory"
	jump_in_place_right
	step_end

Little_Girl_ViridianHouse_1_Text_0:
# 7 "data/maps/ViridanHouse/scripts.pory"
	.string "We just moved here from CELADON \nCITY! It's so much smaller here.$"

GentleMan_ViridianHouse_1_Text_0:
# 15 "data/maps/ViridanHouse/scripts.pory"
	.string "VIRIDIAN CITY has expanded much \nmore since I last visited.$"

ViridianCity_BrokeMan_Text_0:
# 23 "data/maps/ViridanHouse/scripts.pory"
	.string "Ugh... I spent every last cent\nmoving to this city...\pThe rent here is outrageous!\pAnd don't even get me started\non the POKéMART prices!$"

ViridianCity_ExpensiveWife_Text_0:
# 33 "data/maps/ViridanHouse/scripts.pory"
	.string "That EEVEE in the shop window\nis calling my name...\pSure, it costs a fortune, but\nwe can afford it!\pWe just moved after all, so\nwe must have savings!$"

ViridianCity_Clefairy_Text_0:
# 42 "data/maps/ViridanHouse/scripts.pory"
	.string "Clefairy..\pThis CLEFAIRY is impeccably\ngroomed!\pIts fur has been brushed to\nperfection and it smells like\lexpensive perfume.$"

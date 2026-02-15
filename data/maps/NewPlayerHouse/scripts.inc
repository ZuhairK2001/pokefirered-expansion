NewPlayerHouse_MapScripts::
	.byte 0


SinnohFamily_Chimchar::
# 7 "data/maps/NewPlayerHouse/scripts.pory"
	lock
# 8 "data/maps/NewPlayerHouse/scripts.pory"
	applymovement LOCALID_CHIMCHAR, Common_Movement_FacePlayer
# 9 "data/maps/NewPlayerHouse/scripts.pory"
	playmoncry SPECIES_CHIMCHAR, CRY_MODE_WEAK
# 10 "data/maps/NewPlayerHouse/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 11 "data/maps/NewPlayerHouse/scripts.pory"
	msgbox SinnohFamily_Chimchar_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/NewPlayerHouse/scripts.pory"
	waitmoncry
# 13 "data/maps/NewPlayerHouse/scripts.pory"
	release
	end


SinnohFamily_Dad::
# 18 "data/maps/NewPlayerHouse/scripts.pory"
	msgbox SinnohFamily_Dad_Text_0, MSGBOX_NPC
	return


SinnohFamily_Mom::
# 22 "data/maps/NewPlayerHouse/scripts.pory"
	msgbox SinnohFamily_Mom_Text_0, MSGBOX_NPC
	return


SinnohFamily_Son::
# 26 "data/maps/NewPlayerHouse/scripts.pory"
	msgbox SinnohFamily_Son_Text_0, MSGBOX_NPC
	return


SinnohFamily_Chimchar_Text_0:
# 11 "data/maps/NewPlayerHouse/scripts.pory"
	.string "Char...\pChimchar looks down sadly.\lIt misses its home in Sinnoh.$"

SinnohFamily_Dad_Text_0:
# 18 "data/maps/NewPlayerHouse/scripts.pory"
	.string "We just moved here from Sinnoh.\pMy company transferred me, but...\nI don't think Chimchar's adjusting well.\pIt misses the snowy mountains back\nhome.$"

SinnohFamily_Mom_Text_0:
# 22 "data/maps/NewPlayerHouse/scripts.pory"
	.string "I'm actually enjoying it here!\pThe weather's much warmer than\nSinnoh, and the people are nice.\pBut the transfer was so sudden!\pMy husband said SILPH CO. is doing\nsome kind of major expansion across\lKanto.\pThey're opening new offices and\nbuilding... something.\pHe's been working late every night\nsince we got here.$"

SinnohFamily_Son_Text_0:
# 26 "data/maps/NewPlayerHouse/scripts.pory"
	.string "The PIDGEY and RATTATA here\nare kinda cool, I guess.\pThey remind me of the STARLY and\nBIDOOF back in Sinnoh.\pBut it's not the same...\pI miss catching STARLY in the\nmorning before school.$"

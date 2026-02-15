NpcAdamHouse_MapScripts::
	.byte 0


Adam_Sister::
# 5 "data/maps/NpcAdamHouse/scripts.pory"
	lock
# 6 "data/maps/NpcAdamHouse/scripts.pory"
	msgbox Adam_Sister_Text_0, MSGBOX_NPC
# 7 "data/maps/NpcAdamHouse/scripts.pory"
	release
	return


# 10 "data/maps/NpcAdamHouse/scripts.pory"
NpcAdamHouse_Mov_GrandmaExclaim:
# 11 "data/maps/NpcAdamHouse/scripts.pory"
	emote_exclamation_mark
	step_end

Adam_Grandma::
# 15 "data/maps/NpcAdamHouse/scripts.pory"
	lock
# 16 "data/maps/NpcAdamHouse/scripts.pory"
	faceplayer
# 18 "data/maps/NpcAdamHouse/scripts.pory"
	msgbox Adam_Grandma_Text_0, MSGBOX_NPC
# 20 "data/maps/NpcAdamHouse/scripts.pory"
	waitmessage
# 21 "data/maps/NpcAdamHouse/scripts.pory"
	delay 30
# 22 "data/maps/NpcAdamHouse/scripts.pory"
	applymovement LOCALID_GRANDMA, NpcAdamHouse_Mov_GrandmaExclaim
# 23 "data/maps/NpcAdamHouse/scripts.pory"
	waitmovement LOCALID_GRANDMA
# 26 "data/maps/NpcAdamHouse/scripts.pory"
	msgbox Adam_Grandma_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/NpcAdamHouse/scripts.pory"
	release
	return


Old_Man_NPC::
# 32 "data/maps/NpcAdamHouse/scripts.pory"
	lock
# 33 "data/maps/NpcAdamHouse/scripts.pory"
	faceplayer
# 36 "data/maps/NpcAdamHouse/scripts.pory"
	goto_if_set FLAG_OLD_MAN_GAVE_SHARP_BEAK, Old_Man_NPC_2
# 47 "data/maps/NpcAdamHouse/scripts.pory"
	checktrainerflag TRAINER_ADAM
# 48 "data/maps/NpcAdamHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Old_Man_NPC_5
# 72 "data/maps/NpcAdamHouse/scripts.pory"
	msgbox Old_Man_NPC_Text_4, MSGBOX_DEFAULT
# 79 "data/maps/NpcAdamHouse/scripts.pory"
	release
	end

Old_Man_NPC_2:
# 37 "data/maps/NpcAdamHouse/scripts.pory"
	msgbox Old_Man_NPC_Text_0, MSGBOX_DEFAULT
# 42 "data/maps/NpcAdamHouse/scripts.pory"
	release
	end

Old_Man_NPC_5:
# 50 "data/maps/NpcAdamHouse/scripts.pory"
	msgbox Old_Man_NPC_Text_1, MSGBOX_DEFAULT
# 59 "data/maps/NpcAdamHouse/scripts.pory"
	giveitem ITEM_SHARP_BEAK, 1
# 60 "data/maps/NpcAdamHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Old_Man_NPC_8
# 65 "data/maps/NpcAdamHouse/scripts.pory"
	setflag FLAG_OLD_MAN_GAVE_SHARP_BEAK
# 66 "data/maps/NpcAdamHouse/scripts.pory"
	msgbox Old_Man_NPC_Text_3, MSGBOX_DEFAULT
# 67 "data/maps/NpcAdamHouse/scripts.pory"
	release
	end

Old_Man_NPC_8:
# 61 "data/maps/NpcAdamHouse/scripts.pory"
	msgbox Old_Man_NPC_Text_2, MSGBOX_DEFAULT
# 62 "data/maps/NpcAdamHouse/scripts.pory"
	release
	end


# 84 "data/maps/NpcAdamHouse/scripts.pory"
NpcAdamHouse_Mov_DoduoHop:
# 85 "data/maps/NpcAdamHouse/scripts.pory"
	jump_in_place_down
# 86 "data/maps/NpcAdamHouse/scripts.pory"
	jump_in_place_down
	step_end

Doduo_NPC::
# 90 "data/maps/NpcAdamHouse/scripts.pory"
	lock
# 91 "data/maps/NpcAdamHouse/scripts.pory"
	faceplayer
# 92 "data/maps/NpcAdamHouse/scripts.pory"
	applymovement ADAM_DODUO, NpcAdamHouse_Mov_DoduoHop
# 93 "data/maps/NpcAdamHouse/scripts.pory"
	waitmovement 0
# 94 "data/maps/NpcAdamHouse/scripts.pory"
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
# 95 "data/maps/NpcAdamHouse/scripts.pory"
	waitmoncry
# 96 "data/maps/NpcAdamHouse/scripts.pory"
	msgbox Doduo_NPC_Text_0, MSGBOX_DEFAULT
# 97 "data/maps/NpcAdamHouse/scripts.pory"
	release
	end


Adam_Sister_Text_0:
# 6 "data/maps/NpcAdamHouse/scripts.pory"
	.string "Sometimes I think Grandma likes Doduo\nmore than she likes me...$"

Adam_Grandma_Text_0:
# 18 "data/maps/NpcAdamHouse/scripts.pory"
	.string "Oh, hello dear! I'm just making lunch\nfor my sweet Doduo!$"

Adam_Grandma_Text_1:
# 26 "data/maps/NpcAdamHouse/scripts.pory"
	.string "...Oh! And for my granddaughter too,\nof course!$"

Old_Man_NPC_Text_0:
# 38 "data/maps/NpcAdamHouse/scripts.pory"
	.string "Adam is working even harder\nbecause of you {PLAYER}!\p"
	.string "Please battle him again soon.$"

Old_Man_NPC_Text_1:
# 51 "data/maps/NpcAdamHouse/scripts.pory"
	.string "Hohoho! So you actually beat Adam?\n"
	.string "I knew there was something special\p"
	.string "about you, {PLAYER}!\p"
	.string "Take this Sharp Beak. It'll make\n"
	.string "your Flying-type moves just as\p"
	.string "just as strong as Adam's.$"

Old_Man_NPC_Text_2:
# 61 "data/maps/NpcAdamHouse/scripts.pory"
	.string "Oh, your Bag is full!$"

Old_Man_NPC_Text_3:
# 66 "data/maps/NpcAdamHouse/scripts.pory"
	.string "Use it wisely!$"

Old_Man_NPC_Text_4:
# 73 "data/maps/NpcAdamHouse/scripts.pory"
	.string "Hello {PLAYER}! if you get the chance,\n"
	.string "please give Adam a battle.\p"
	.string "He recently moved here from \nViridian City. He graduated from\p"
	.string "the trainer school there and is \nlooking to improve his skills.$"

Doduo_NPC_Text_0:
# 96 "data/maps/NpcAdamHouse/scripts.pory"
	.string "It looks hungry!$"

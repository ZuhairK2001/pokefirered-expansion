ViridianMansion_MapScripts::
	.byte 0


Mansion_Doorman::
# 4 "data/maps/ViridianMansion/scripts.pory"
	lock
# 5 "data/maps/ViridianMansion/scripts.pory"
	faceplayer
# 6 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_Doorman_Text_0, MSGBOX_DEFAULT
# 7 "data/maps/ViridianMansion/scripts.pory"
	release
	end


Mansion_HeadOfHousehold::
# 12 "data/maps/ViridianMansion/scripts.pory"
	lock
# 13 "data/maps/ViridianMansion/scripts.pory"
	faceplayer
# 14 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_HeadOfHousehold_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/ViridianMansion/scripts.pory"
	release
	end


Mansion_SpoiledGirl::
# 20 "data/maps/ViridianMansion/scripts.pory"
	lock
# 21 "data/maps/ViridianMansion/scripts.pory"
	faceplayer
# 24 "data/maps/ViridianMansion/scripts.pory"
	goto_if_unset FLAG_MANSION_GIRL_PAID_YOU, Mansion_SpoiledGirl_2
# 37 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_SpoiledGirl_Text_3, MSGBOX_DEFAULT
# 38 "data/maps/ViridianMansion/scripts.pory"
	addmoney 50
# 39 "data/maps/ViridianMansion/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/ViridianMansion/scripts.pory"
	waitfanfare
# 41 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_SpoiledGirl_Text_4, MSGBOX_DEFAULT
# 42 "data/maps/ViridianMansion/scripts.pory"
	release
	end

Mansion_SpoiledGirl_2:
# 25 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_SpoiledGirl_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/ViridianMansion/scripts.pory"
	addmoney 10000
# 27 "data/maps/ViridianMansion/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 28 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_SpoiledGirl_Text_1, MSGBOX_DEFAULT
# 29 "data/maps/ViridianMansion/scripts.pory"
	waitfanfare
# 30 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_SpoiledGirl_Text_2, MSGBOX_DEFAULT
# 31 "data/maps/ViridianMansion/scripts.pory"
	setflag FLAG_MANSION_GIRL_PAID_YOU
# 32 "data/maps/ViridianMansion/scripts.pory"
	release
	end


Mansion_GoldDiggerWife::
# 47 "data/maps/ViridianMansion/scripts.pory"
	lock
# 48 "data/maps/ViridianMansion/scripts.pory"
	faceplayer
# 49 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_GoldDiggerWife_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/ViridianMansion/scripts.pory"
	release
	end


Mansion_FrenchChef::
# 56 "data/maps/ViridianMansion/scripts.pory"
	lock
# 57 "data/maps/ViridianMansion/scripts.pory"
	faceplayer
# 58 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_FrenchChef_Text_0, MSGBOX_DEFAULT
# 59 "data/maps/ViridianMansion/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_ChefAngryHop
# 60 "data/maps/ViridianMansion/scripts.pory"
	playse SE_LEDGE
# 61 "data/maps/ViridianMansion/scripts.pory"
	waitmovement 0
# 62 "data/maps/ViridianMansion/scripts.pory"
	playse SE_LEDGE
# 63 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_FrenchChef_Text_1, MSGBOX_DEFAULT
# 64 "data/maps/ViridianMansion/scripts.pory"
	release
	end


# 68 "data/maps/ViridianMansion/scripts.pory"
Movement_ChefAngryHop:
# 69 "data/maps/ViridianMansion/scripts.pory"
	emote_exclamation_mark
# 70 "data/maps/ViridianMansion/scripts.pory"
	jump_in_place_down
# 71 "data/maps/ViridianMansion/scripts.pory"
	jump_in_place_down
# 72 "data/maps/ViridianMansion/scripts.pory"
	face_up_fast
	step_end

Mansion_SpoiledSon::
# 76 "data/maps/ViridianMansion/scripts.pory"
	lock
# 77 "data/maps/ViridianMansion/scripts.pory"
	faceplayer
# 78 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_SpoiledSon_Text_0, MSGBOX_DEFAULT
# 79 "data/maps/ViridianMansion/scripts.pory"
	release
	end


Mansion_IncriminatingClipboard::
# 84 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_IncriminatingClipboard_Text_0, MSGBOX_SIGN
	end


Mansion_Machoke1::
# 89 "data/maps/ViridianMansion/scripts.pory"
	lock
# 90 "data/maps/ViridianMansion/scripts.pory"
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
# 91 "data/maps/ViridianMansion/scripts.pory"
	waitmoncry
# 92 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_Machoke1_Text_0, MSGBOX_DEFAULT
# 93 "data/maps/ViridianMansion/scripts.pory"
	release
	end


Mansion_Machoke2::
# 98 "data/maps/ViridianMansion/scripts.pory"
	lock
# 99 "data/maps/ViridianMansion/scripts.pory"
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
# 100 "data/maps/ViridianMansion/scripts.pory"
	waitmoncry
# 101 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_Machoke2_Text_0, MSGBOX_DEFAULT
# 102 "data/maps/ViridianMansion/scripts.pory"
	release
	end


Mansion_Kangaskhan::
# 107 "data/maps/ViridianMansion/scripts.pory"
	lock
# 108 "data/maps/ViridianMansion/scripts.pory"
	faceplayer
# 109 "data/maps/ViridianMansion/scripts.pory"
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
# 110 "data/maps/ViridianMansion/scripts.pory"
	waitmoncry
# 111 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_Kangaskhan_Text_0, MSGBOX_DEFAULT
# 112 "data/maps/ViridianMansion/scripts.pory"
	release
	end


Mansion_LittleBoy::
# 117 "data/maps/ViridianMansion/scripts.pory"
	lock
# 118 "data/maps/ViridianMansion/scripts.pory"
	faceplayer
# 119 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_LittleBoy_Text_0, MSGBOX_DEFAULT
# 120 "data/maps/ViridianMansion/scripts.pory"
	release
	end


Mansion_Wigglytuff::
# 125 "data/maps/ViridianMansion/scripts.pory"
	lock
# 126 "data/maps/ViridianMansion/scripts.pory"
	faceplayer
# 127 "data/maps/ViridianMansion/scripts.pory"
	playmoncry SPECIES_WIGGLYTUFF, CRY_MODE_NORMAL
# 128 "data/maps/ViridianMansion/scripts.pory"
	waitmoncry
# 129 "data/maps/ViridianMansion/scripts.pory"
	msgbox Mansion_Wigglytuff_Text_0, MSGBOX_DEFAULT
# 130 "data/maps/ViridianMansion/scripts.pory"
	release
	end


Mansion_Doorman_Text_0:
# 6 "data/maps/ViridianMansion/scripts.pory"
	.string "Ah... a visitor.\pI suppose you may enter, but\nplease refrain from touching\panything expensive.\pWhich is... everything.$"

Mansion_HeadOfHousehold_Text_0:
# 14 "data/maps/ViridianMansion/scripts.pory"
	.string "Ah, another visitor to my estate.\pYou know, VIRIDIAN CITY has really\ngone downhill lately.\pSome people move here and can't\neven afford a modest home!\pPathetic, really. If you can't\nafford VIRIDIAN CITY living,\pwhy move here at all?$"

Mansion_SpoiledGirl_Text_0:
# 25 "data/maps/ViridianMansion/scripts.pory"
	.string "Ugh, another peasant...\pHere! Take 10,000 and leave\nme alone!$"

Mansion_SpoiledGirl_Text_1:
# 28 "data/maps/ViridianMansion/scripts.pory"
	.string "Received 10,000 from the girl!$"

Mansion_SpoiledGirl_Text_2:
# 30 "data/maps/ViridianMansion/scripts.pory"
	.string "Now go away!$"

Mansion_SpoiledGirl_Text_3:
# 37 "data/maps/ViridianMansion/scripts.pory"
	.string "Oh, you again?\pYou work here, right?\pHere's your tip.$"

Mansion_SpoiledGirl_Text_4:
# 41 "data/maps/ViridianMansion/scripts.pory"
	.string "There. Don't spend it all\nin one place!$"

Mansion_GoldDiggerWife_Text_0:
# 49 "data/maps/ViridianMansion/scripts.pory"
	.string "People say I only married him\nfor his money.\pHow RUDE! I also married him for\nthis mansion.\pAnd the summer home. And the\nyacht. Love has many forms!$"

Mansion_FrenchChef_Text_0:
# 58 "data/maps/ViridianMansion/scripts.pory"
	.string "SACRÉ BLEU! QU'EST-CE QUE C'EST?!\pA dirty little TRAINER in\nMY kitchen?!\pDo you 'ave any idea 'ow many\nMICHELIN STARS I 'ave?!\pZREE! TROIS! And you, you are\nstanding where I prepare zee\pBOEUF BOURGUIGNON!\pYour filthy shoes! Zey are\nRUINING my kitchen!\pOUT! OUT! Before I turn you into\na CASSEROLE! ALLEZ! VITE VITE!$"

Mansion_FrenchChef_Text_1:
# 63 "data/maps/ViridianMansion/scripts.pory"
	.string "AND STAY OUT!$"

Mansion_SpoiledSon_Text_0:
# 78 "data/maps/ViridianMansion/scripts.pory"
	.string "Hmph. I'm collecting rare POKéMON.\pFather buys me whatever I want!\pI already have 47 species!\pWhat? You caught yours yourself?\pHow... quaint.$"

Mansion_IncriminatingClipboard_Text_0:
# 84 "data/maps/ViridianMansion/scripts.pory"
	.string "It's a letter on official\nletterhead...\p'NOTICE OF INVESTIGATION\pDear Sir,\pYou are hereby notified that\nyour recent purchases of\prillegally obtained POKéMON are\nunder investigation.\pAdditionally, your account shows\na balance of -2,847,000\nPOKéDOLLARS.\pOFFICER JENNY will be in contact\nshortly regarding your arrest.'\p...Yikes.$"

Mansion_Machoke1_Text_0:
# 92 "data/maps/ViridianMansion/scripts.pory"
	.string "The MACHOKE is carrying a huge\nstack of boxes.\pIt looks absolutely exhausted...\pPoor thing has probably been\nworking all day.$"

Mansion_Machoke2_Text_0:
# 101 "data/maps/ViridianMansion/scripts.pory"
	.string "This MACHOKE is pushing a massive\nwardrobe across the floor.\pSweat is dripping from its brow.\pSomeone should really give it\na break!$"

Mansion_Kangaskhan_Text_0:
# 111 "data/maps/ViridianMansion/scripts.pory"
	.string "The KANGASKHAN looks down at you\nwith sad eyes.\pIts pouch is empty... where is\nits baby?\pIt seems lonely, like it's just\nanother item in this \pboy's collection.$"

Mansion_LittleBoy_Text_0:
# 119 "data/maps/ViridianMansion/scripts.pory"
	.string "Psst... hey.\pCan you take me with you?\pI'm serious! I want to leave!\pMy family only cares about money\nand showing off.\pI just want a normal life with\na PIDGEY or RATTATA...\pBut they say those POKéMON are\n'too common' for us.\p(sigh) Being rich isn't as great\nas people think...$"

Mansion_Wigglytuff_Text_0:
# 129 "data/maps/ViridianMansion/scripts.pory"
	.string "The WIGGLYTUFF looks at you\nwith pleading eyes.\pIt seems to want to go with you.\pPerhaps it is tired of being\na mere status symbol.$"

ViridianMansion2_MapScripts::
	.byte 0


Mansion_OldLady::
# 4 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 6 "data/maps/ViridianMansion2/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTUNE_TELLER, Mansion_OldLady_2
# 13 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_OldLady_Text_1, MSGBOX_SIGN
# 14 "data/maps/ViridianMansion2/scripts.pory"
	closemessage
# 15 "data/maps/ViridianMansion2/scripts.pory"
	applymovement SCAM_LADY, Movement_OldLady_Notice
# 16 "data/maps/ViridianMansion2/scripts.pory"
	waitmovement 0
# 17 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 18 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_OldLady_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ViridianMansion2/scripts.pory"
	applymovement SCAM_LADY, Movement_OldLady_Return
# 20 "data/maps/ViridianMansion2/scripts.pory"
	waitmovement 0
# 21 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_OldLady_2:
# 7 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 8 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_OldLady_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


# 25 "data/maps/ViridianMansion2/scripts.pory"
Movement_OldLady_Notice:
# 26 "data/maps/ViridianMansion2/scripts.pory"
	emote_exclamation_mark
	step_end

# 29 "data/maps/ViridianMansion2/scripts.pory"
Movement_OldLady_Return:
# 30 "data/maps/ViridianMansion2/scripts.pory"
	face_original_direction
	step_end

Mansion_FortuneCaretaker::
# 34 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 35 "data/maps/ViridianMansion2/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTUNE_TELLER, Mansion_FortuneCaretaker_2
# 41 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 42 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneCaretaker_Text_1, MSGBOX_DEFAULT
# 43 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_FortuneCaretaker_2:
# 36 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 37 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneCaretaker_Text_0
# 38 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


Mansion_PoliceOfficer::
# 48 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 49 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 50 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_PoliceOfficer_Text_0, MSGBOX_DEFAULT
# 51 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


Mansion_YoungerBrother::
# 56 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 57 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 58 "data/maps/ViridianMansion2/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTUNE_TELLER, Mansion_YoungerBrother_2
# 64 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_YoungerBrother_Text_1, MSGBOX_DEFAULT
# 65 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_YoungerBrother_2:
# 59 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_YoungerBrother_Text_0, MSGBOX_DEFAULT
# 60 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


Mansion_BrotherPsyduck::
# 70 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 71 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 72 "data/maps/ViridianMansion2/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 73 "data/maps/ViridianMansion2/scripts.pory"
	waitmoncry
# 74 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_BrotherPsyduck_Text_0, MSGBOX_DEFAULT
# 75 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


Mansion_PacingChef::
# 81 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 82 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_PacingChef_Text_0, MSGBOX_SIGN
# 83 "data/maps/ViridianMansion2/scripts.pory"
	closemessage
# 84 "data/maps/ViridianMansion2/scripts.pory"
	applymovement SCARED_CHEF, Movement_PacingChef_Notice
# 85 "data/maps/ViridianMansion2/scripts.pory"
	waitmovement 0
# 86 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 87 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_PacingChef_Text_1, MSGBOX_DEFAULT
# 88 "data/maps/ViridianMansion2/scripts.pory"
	applymovement SCARED_CHEF, Movement_PacingChef_Return
# 89 "data/maps/ViridianMansion2/scripts.pory"
	waitmovement 0
# 90 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


# 94 "data/maps/ViridianMansion2/scripts.pory"
Movement_PacingChef_Notice:
# 95 "data/maps/ViridianMansion2/scripts.pory"
	emote_exclamation_mark
	step_end

# 98 "data/maps/ViridianMansion2/scripts.pory"
Movement_PacingChef_Return:
# 99 "data/maps/ViridianMansion2/scripts.pory"
	face_original_direction
	step_end

Mansion_FortuneTellerPsyduck::
# 104 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 105 "data/maps/ViridianMansion2/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTUNE_TELLER, Mansion_FortuneTellerPsyduck_2
# 114 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 116 "data/maps/ViridianMansion2/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 117 "data/maps/ViridianMansion2/scripts.pory"
	waitmoncry
# 118 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTellerPsyduck_Text_1, MSGBOX_DEFAULT
# 119 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_FortuneTellerPsyduck_2:
# 106 "data/maps/ViridianMansion2/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 107 "data/maps/ViridianMansion2/scripts.pory"
	waitmoncry
# 108 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTellerPsyduck_Text_0, MSGBOX_DEFAULT
# 109 "data/maps/ViridianMansion2/scripts.pory"
	applymovement VAR_LAST_TALKED, Psyduck_SHAME
# 110 "data/maps/ViridianMansion2/scripts.pory"
	waitmovement 0
# 111 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


# 123 "data/maps/ViridianMansion2/scripts.pory"
Psyduck_SHAME:
# 124 "data/maps/ViridianMansion2/scripts.pory"
	face_away_player
	step_end

Mansion_FortuneTeller::
# 128 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 129 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 132 "data/maps/ViridianMansion2/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTUNE_TELLER, Mansion_FortuneTeller_2
# 138 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_1, MSGBOX_YESNO
# 140 "data/maps/ViridianMansion2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mansion_FortuneTeller_5
# 159 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_6, MSGBOX_YESNO
# 161 "data/maps/ViridianMansion2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mansion_FortuneTeller_8
# 180 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_7, MSGBOX_YESNO
# 182 "data/maps/ViridianMansion2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mansion_FortuneTeller_14
# 201 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_8, MSGBOX_DEFAULT
# 202 "data/maps/ViridianMansion2/scripts.pory"
	closemessage
# 203 "data/maps/ViridianMansion2/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_FortuneTeller_Angry
# 204 "data/maps/ViridianMansion2/scripts.pory"
	waitmovement 0
# 205 "data/maps/ViridianMansion2/scripts.pory"
	trainerbattle_single TRAINER_SOPHIA, FortuneTeller_IntroText, FortuneTeller_Defeat, Mansion_FortuneTeller_PostBattle
# 206 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_FortuneTeller_2:
# 133 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_0, MSGBOX_DEFAULT
# 134 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_FortuneTeller_5:
# 141 "data/maps/ViridianMansion2/scripts.pory"
	checkmoney 500
# 142 "data/maps/ViridianMansion2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Mansion_FortuneTeller_11
# 147 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_3, MSGBOX_DEFAULT
# 148 "data/maps/ViridianMansion2/scripts.pory"
	removemoney 500
# 149 "data/maps/ViridianMansion2/scripts.pory"
	playse SE_SHOP
# 150 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_4, MSGBOX_DEFAULT
# 151 "data/maps/ViridianMansion2/scripts.pory"
	closemessage
# 152 "data/maps/ViridianMansion2/scripts.pory"
	delay 60
# 153 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_5, MSGBOX_DEFAULT
# 154 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_FortuneTeller_8:
# 162 "data/maps/ViridianMansion2/scripts.pory"
	checkmoney 500
# 163 "data/maps/ViridianMansion2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Mansion_FortuneTeller_17
# 168 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_3, MSGBOX_DEFAULT
# 169 "data/maps/ViridianMansion2/scripts.pory"
	removemoney 500
# 170 "data/maps/ViridianMansion2/scripts.pory"
	playse SE_SHOP
# 171 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_4, MSGBOX_DEFAULT
# 172 "data/maps/ViridianMansion2/scripts.pory"
	closemessage
# 173 "data/maps/ViridianMansion2/scripts.pory"
	delay 60
# 174 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_5, MSGBOX_DEFAULT
# 175 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_FortuneTeller_11:
# 143 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_2, MSGBOX_DEFAULT
# 144 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_FortuneTeller_14:
# 183 "data/maps/ViridianMansion2/scripts.pory"
	checkmoney 500
# 184 "data/maps/ViridianMansion2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Mansion_FortuneTeller_20
# 189 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_3, MSGBOX_DEFAULT
# 190 "data/maps/ViridianMansion2/scripts.pory"
	removemoney 500
# 191 "data/maps/ViridianMansion2/scripts.pory"
	playse SE_SHOP
# 192 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_4, MSGBOX_DEFAULT
# 193 "data/maps/ViridianMansion2/scripts.pory"
	closemessage
# 194 "data/maps/ViridianMansion2/scripts.pory"
	delay 60
# 195 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_5, MSGBOX_DEFAULT
# 196 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_FortuneTeller_17:
# 164 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_2, MSGBOX_DEFAULT
# 165 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_FortuneTeller_20:
# 185 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_Text_2, MSGBOX_DEFAULT
# 186 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


# 210 "data/maps/ViridianMansion2/scripts.pory"
Movement_FortuneTeller_Angry:
# 211 "data/maps/ViridianMansion2/scripts.pory"
	emote_exclamation_mark
# 212 "data/maps/ViridianMansion2/scripts.pory"
	emote_exclamation_mark
	step_end

Mansion_FortuneTeller_PostBattle::
# 215 "data/maps/ViridianMansion2/scripts.pory"
	setflag FLAG_DEFEATED_FORTUNE_TELLER
# 216 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_PostBattle_Text_0, MSGBOX_DEFAULT
# 217 "data/maps/ViridianMansion2/scripts.pory"
	giveitem ITEM_TWISTED_SPOON
# 218 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_PostBattle_Text_1, MSGBOX_DEFAULT
# 219 "data/maps/ViridianMansion2/scripts.pory"
	closemessage
# 220 "data/maps/ViridianMansion2/scripts.pory"
	delay 30
# 221 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_PostBattle_Text_2, MSGBOX_DEFAULT
# 222 "data/maps/ViridianMansion2/scripts.pory"
	closemessage
# 223 "data/maps/ViridianMansion2/scripts.pory"
	delay 30
# 224 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTeller_PostBattle_Text_3, MSGBOX_DEFAULT
# 225 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


Mansion_SpellTag::
# 239 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 242 "data/maps/ViridianMansion2/scripts.pory"
	giveitem ITEM_SPELL_TAG, 1
# 243 "data/maps/ViridianMansion2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mansion_SpellTag_2
# 250 "data/maps/ViridianMansion2/scripts.pory"
	removeobject 9
# 253 "data/maps/ViridianMansion2/scripts.pory"
	setflag FLAG_ROUTE1_SPELL_TAG
# 255 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_SpellTag_2:
# 245 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_SpellTag_Text_0, MSGBOX_DEFAULT
# 246 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


Mansion_FortuneClientList::
# 260 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneClientList_Text_0, MSGBOX_SIGN
	end


Mansion_ImpressionedClient::
# 265 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 266 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 267 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_ImpressionedClient_Text_0, MSGBOX_DEFAULT
# 268 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


Mansion_SkepticalClient::
# 273 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 274 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 275 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_SkepticalClient_Text_0, MSGBOX_DEFAULT
# 276 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


Mansion_NeutralClient::
# 281 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 282 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 283 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_NeutralClient_Text_0, MSGBOX_DEFAULT
# 284 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


Mansion_FortuneTellerGastly::
# 289 "data/maps/ViridianMansion2/scripts.pory"
	lock
# 292 "data/maps/ViridianMansion2/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTUNE_TELLER, Mansion_FortuneTellerGastly_2
# 301 "data/maps/ViridianMansion2/scripts.pory"
	faceplayer
# 302 "data/maps/ViridianMansion2/scripts.pory"
	playmoncry SPECIES_GASTLY, CRY_MODE_ENCOUNTER
# 303 "data/maps/ViridianMansion2/scripts.pory"
	waitmoncry
# 304 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTellerGastly_Text_1, MSGBOX_DEFAULT
# 305 "data/maps/ViridianMansion2/scripts.pory"
	release
	end

Mansion_FortuneTellerGastly_2:
# 293 "data/maps/ViridianMansion2/scripts.pory"
	playmoncry SPECIES_GASTLY, CRY_MODE_WEAK
# 294 "data/maps/ViridianMansion2/scripts.pory"
	waitmoncry
# 295 "data/maps/ViridianMansion2/scripts.pory"
	msgbox Mansion_FortuneTellerGastly_Text_0, MSGBOX_DEFAULT
# 296 "data/maps/ViridianMansion2/scripts.pory"
	release
	end


Mansion_OldLady_Text_0:
# 8 "data/maps/ViridianMansion2/scripts.pory"
	.string "My daughter... she's not the\nsame anymore...\pI need something stronger to\nkeep her under control.\pPerhaps a HAUNTER would work\nbetter than that GASTLY...\pYes... a ghost to bind her\nspirit...$"

Mansion_OldLady_Text_1:
# 13 "data/maps/ViridianMansion2/scripts.pory"
	.string "Mutter... mutter...\nIf we charge 50 more...$"

Mansion_OldLady_Text_2:
# 18 "data/maps/ViridianMansion2/scripts.pory"
	.string "Oh! A customer?\pMy daughter is currently with\nsomeone. Go wait your turn like\leveryone else!$"

Mansion_FortuneCaretaker_Text_0:
# 37 "data/maps/ViridianMansion2/scripts.pory"
	.string "Thank you....$"

Mansion_FortuneCaretaker_Text_1:
# 42 "data/maps/ViridianMansion2/scripts.pory"
	.string "Oh, hello there.\pJust so you know, the fortune\ntelling does cost money.\pAnd please be careful around\nthe young lady and her PSYDUCK.\pThey're both quite delicate.$"

Mansion_PoliceOfficer_Text_0:
# 50 "data/maps/ViridianMansion2/scripts.pory"
	.string "Man, this mansion is eerie.\pEspecially that fortune telling\ngirl. Gives me chills.\pBut the pay for this gig is\nway better than my usual patrol\pduty, so I'm not complaining!$"

Mansion_YoungerBrother_Text_0:
# 59 "data/maps/ViridianMansion2/scripts.pory"
	.string "You... you beat my sister?\pDid you see it? The GASTLY?\pMother gave it to her to make\nher 'behave'...\pI tried to tell someone, but\nnobody believes me.\pPlease... you have to help her.\nShe's not herself anymore.\pThat ghost is controlling her!$"

Mansion_YoungerBrother_Text_1:
# 64 "data/maps/ViridianMansion2/scripts.pory"
	.string "My sister used to play with me...\pBut now Mother has her doing\nfortune tellings all the time.\pI miss her.\pMy PSYDUCK is the only one who\nlistens to me now.\pHe's a good friend, even if he\ndoes get headaches a lot.$"

Mansion_BrotherPsyduck_Text_0:
# 74 "data/maps/ViridianMansion2/scripts.pory"
	.string "The PSYDUCK looks up at you with\nsad, watery eyes.\pIt seems to sense its TRAINER's\nloneliness.\pThe poor thing clutches its head,\nbut stays close to the boy.\pAt least they have each other...$"

Mansion_PacingChef_Text_0:
# 82 "data/maps/ViridianMansion2/scripts.pory"
	.string "The meals! The meals!\nI must get them perfect!$"

Mansion_PacingChef_Text_1:
# 87 "data/maps/ViridianMansion2/scripts.pory"
	.string "Oh! Sorry, I...\pI have to prepare special meals\nfor the fortune teller and her\pPSYDUCK three times a day!\pIf I mess up even once, I'll be\nfired!\pAnd if I lose this job, my wife\nwill leave me for sure!\pThe pressure! The pressure!\pI can't take it!$"

Mansion_FortuneTellerPsyduck_Text_0:
# 108 "data/maps/ViridianMansion2/scripts.pory"
	.string "The PSYDUCK won't look at you.\pIt seems ashamed... or perhaps\nrelieved?\pIts headache appears to have\neased slightly.\pMaybe defeating its trainer gave\nit a brief respite from the\pconstant psychic strain.$"

Mansion_FortuneTellerPsyduck_Text_1:
# 118 "data/maps/ViridianMansion2/scripts.pory"
	.string "This PSYDUCK looks... different.\pIts eyes are darker, almost\nempty.\pIt clutches its head constantly,\nlike it's in terrible pain.\pHow long has it been forced to\nuse its psychic powers?\pThis poor creature looks\nabsolutely drained...$"

Mansion_FortuneTeller_Text_0:
# 133 "data/maps/ViridianMansion2/scripts.pory"
	.string "The spirits... are always\nwatching...\pAlways... watching...$"

Mansion_FortuneTeller_Text_1:
# 138 "data/maps/ViridianMansion2/scripts.pory"
	.string "Welcome...\pDo you wish to have your\nfortune told...?$"

Mansion_FortuneTeller_Text_2:
# 143 "data/maps/ViridianMansion2/scripts.pory"
	.string "You don't have enough money...\pCome back when you do...$"

Mansion_FortuneTeller_Text_3:
# 147 "data/maps/ViridianMansion2/scripts.pory"
	.string "That will be 500 POKéDOLLARS...$"

Mansion_FortuneTeller_Text_4:
# 150 "data/maps/ViridianMansion2/scripts.pory"
	.string "Let me gaze into your future...$"

Mansion_FortuneTeller_Text_5:
# 153 "data/maps/ViridianMansion2/scripts.pory"
	.string "I see... a great journey ahead...\pYou will face many challenges...\pBut perseverance will lead you\nto success...\pYour lucky number is... seven...$"

Mansion_FortuneTeller_Text_6:
# 159 "data/maps/ViridianMansion2/scripts.pory"
	.string "Are you... sure...?\pThe spirits have much to\nreveal...$"

Mansion_FortuneTeller_Text_7:
# 180 "data/maps/ViridianMansion2/scripts.pory"
	.string "You WILL have your fortune told!$"

Mansion_FortuneTeller_Text_8:
# 201 "data/maps/ViridianMansion2/scripts.pory"
	.string "FINE!$"

Mansion_FortuneTeller_PostBattle_Text_0:
# 216 "data/maps/ViridianMansion2/scripts.pory"
	.string "I... I lost...$"

Mansion_FortuneTeller_PostBattle_Text_1:
# 218 "data/maps/ViridianMansion2/scripts.pory"
	.string "Take this... and leave...$"

Mansion_FortuneTeller_PostBattle_Text_2:
# 221 "data/maps/ViridianMansion2/scripts.pory"
	.string "Please... tell my brother...\nI'm sorry...$"

Mansion_FortuneTeller_PostBattle_Text_3:
# 224 "data/maps/ViridianMansion2/scripts.pory"
	.string "...\pNext customer...$"

Mansion_SpellTag_Text_0:
# 245 "data/maps/ViridianMansion2/scripts.pory"
	.string "Your BAG is full!$"

Mansion_FortuneClientList_Text_0:
# 260 "data/maps/ViridianMansion2/scripts.pory"
	.string "It's a clipboard with a client\nlist...\p'HIGH-PROFILE CLIENTELE:\pMR. FUJI - Paid 2,000 for future\nof POKéMON TOWER donations.\pBILL - Paid 5,000 to know if his\nteleporter experiments will\psucceed.\pCELADON GYM LEADER - Paid 3,000\nfor business fortune.\pSILPH CO. EXECUTIVE - Paid\n10,000 for company stocks\pforecast.\pTotal this month: 847,000\nPOKéDOLLARS!'\p...This operation is making a\nfortune off people's desperation.$"

Mansion_ImpressionedClient_Text_0:
# 267 "data/maps/ViridianMansion2/scripts.pory"
	.string "Oh my gosh, you HAVE to get your\nfortune told here!\pThe fortune teller said I would\nmeet someone special today, and\pthen I ran into my childhood\nfriend on the way here!\pIt's absolutely REAL! She has\ngenuine psychic powers!$"

Mansion_SkepticalClient_Text_0:
# 275 "data/maps/ViridianMansion2/scripts.pory"
	.string "Hmm... I don't know about this.\pI paid 500 POKéDOLLARS and all\nshe told me was 'good things\pare coming.'\pThat's pretty vague if you ask\nme. Anyone could say that.\pBut everyone swears by her, so\nmaybe I'm just being cynical...$"

Mansion_NeutralClient_Text_0:
# 283 "data/maps/ViridianMansion2/scripts.pory"
	.string "The fortune she gave me was...\nokay, I guess?\pShe said I'd have trouble at work\nbut it would resolve itself.\pI mean, everyone has work problems,\nright?\pBut the PSYDUCK did seem to be\nreally focused... maybe there's\psomething to it after all?$"

Mansion_FortuneTellerGastly_Text_0:
# 295 "data/maps/ViridianMansion2/scripts.pory"
	.string "The GASTLY floats weakly...\pIts sinister aura has faded.\pWithout its trainer's dark\ncommand, it seems almost...\pordinary.\pJust a ghost POKéMON, no longer\na tool of manipulation.$"

Mansion_FortuneTellerGastly_Text_1:
# 304 "data/maps/ViridianMansion2/scripts.pory"
	.string "The GASTLY swirls around the\nfortune teller ominously...\pIts eyes glow with an unnatural\nintensity.\pYou feel a chill run down your\nspine.\pThis isn't just a pet...\nIt's a guardian. A jailer.\pKeeping her bound to this room,\nthis life, this endless cycle\lof false fortunes.$"

FortuneTeller_IntroText::
# 229 "data/maps/ViridianMansion2/scripts.pory"
	.string "If you won't accept your\nfortune, then face your\pFATE!$"

FortuneTeller_Defeat::
# 233 "data/maps/ViridianMansion2/scripts.pory"
	.string "No... Mother will be\n"
	.string "so angry...$"

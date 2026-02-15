# 1 "data/maps/Route22/scripts.pory"

# 2 "data/maps/Route22/scripts.pory"
# 1 "data/maps/Route22/scripts.pory"
# 3 "data/maps/Route22/scripts.pory"

# 4 "data/maps/Route22/scripts.pory"
# 2 "data/maps/Route22/scripts.pory"
# 5 "data/maps/Route22/scripts.pory"
Route22_MapScripts::
# 6 "data/maps/Route22/scripts.pory"
# 3 "data/maps/Route22/scripts.pory"
# 7 "data/maps/Route22/scripts.pory"
	.byte 0
# 8 "data/maps/Route22/scripts.pory"
# 4 "data/maps/Route22/scripts.pory"
# 9 "data/maps/Route22/scripts.pory"

# 10 "data/maps/Route22/scripts.pory"
# 5 "data/maps/Route22/scripts.pory"
# 11 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalTriggerTop::
# 12 "data/maps/Route22/scripts.pory"
# 6 "data/maps/Route22/scripts.pory"
# 13 "data/maps/Route22/scripts.pory"
	lockall
# 14 "data/maps/Route22/scripts.pory"
# 7 "data/maps/Route22/scripts.pory"
# 15 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 0
# 16 "data/maps/Route22/scripts.pory"
# 8 "data/maps/Route22/scripts.pory"
# 17 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
# 18 "data/maps/Route22/scripts.pory"
# 9 "data/maps/Route22/scripts.pory"
# 19 "data/maps/Route22/scripts.pory"
	end
# 20 "data/maps/Route22/scripts.pory"
# 10 "data/maps/Route22/scripts.pory"
# 21 "data/maps/Route22/scripts.pory"

# 22 "data/maps/Route22/scripts.pory"
# 11 "data/maps/Route22/scripts.pory"
# 23 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalTriggerMid::
# 24 "data/maps/Route22/scripts.pory"
# 12 "data/maps/Route22/scripts.pory"
# 25 "data/maps/Route22/scripts.pory"
	lockall
# 26 "data/maps/Route22/scripts.pory"
# 13 "data/maps/Route22/scripts.pory"
# 27 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 1
# 28 "data/maps/Route22/scripts.pory"
# 14 "data/maps/Route22/scripts.pory"
# 29 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 30 "data/maps/Route22/scripts.pory"
# 15 "data/maps/Route22/scripts.pory"
# 31 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
# 32 "data/maps/Route22/scripts.pory"
# 16 "data/maps/Route22/scripts.pory"
# 33 "data/maps/Route22/scripts.pory"
	end
# 34 "data/maps/Route22/scripts.pory"
# 17 "data/maps/Route22/scripts.pory"
# 35 "data/maps/Route22/scripts.pory"

# 36 "data/maps/Route22/scripts.pory"
# 18 "data/maps/Route22/scripts.pory"
# 37 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalTriggerBottom::
# 38 "data/maps/Route22/scripts.pory"
# 19 "data/maps/Route22/scripts.pory"
# 39 "data/maps/Route22/scripts.pory"
	lockall
# 40 "data/maps/Route22/scripts.pory"
# 20 "data/maps/Route22/scripts.pory"
# 41 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 2
# 42 "data/maps/Route22/scripts.pory"
# 21 "data/maps/Route22/scripts.pory"
# 43 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 44 "data/maps/Route22/scripts.pory"
# 22 "data/maps/Route22/scripts.pory"
# 45 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
# 46 "data/maps/Route22/scripts.pory"
# 23 "data/maps/Route22/scripts.pory"
# 47 "data/maps/Route22/scripts.pory"
	end
# 48 "data/maps/Route22/scripts.pory"
# 24 "data/maps/Route22/scripts.pory"
# 49 "data/maps/Route22/scripts.pory"

# 50 "data/maps/Route22/scripts.pory"
# 25 "data/maps/Route22/scripts.pory"
# 51 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRival::
# 52 "data/maps/Route22/scripts.pory"
# 26 "data/maps/Route22/scripts.pory"
# 53 "data/maps/Route22/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 54 "data/maps/Route22/scripts.pory"
# 27 "data/maps/Route22/scripts.pory"
# 55 "data/maps/Route22/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 56 "data/maps/Route22/scripts.pory"
# 28 "data/maps/Route22/scripts.pory"
# 57 "data/maps/Route22/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 58 "data/maps/Route22/scripts.pory"
# 29 "data/maps/Route22/scripts.pory"
# 59 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_EarlyRivalApproach
# 60 "data/maps/Route22/scripts.pory"
# 30 "data/maps/Route22/scripts.pory"
# 61 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_EarlyRivalApproach
# 62 "data/maps/Route22/scripts.pory"
# 31 "data/maps/Route22/scripts.pory"
# 63 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_EarlyRivalApproachBottom
# 64 "data/maps/Route22/scripts.pory"
# 32 "data/maps/Route22/scripts.pory"
# 65 "data/maps/Route22/scripts.pory"
	delay 6
# 66 "data/maps/Route22/scripts.pory"
# 33 "data/maps/Route22/scripts.pory"
# 67 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_EarlyRivalIntro
# 68 "data/maps/Route22/scripts.pory"
# 34 "data/maps/Route22/scripts.pory"
# 69 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, Route22_EventScript_EarlyRivalSquirtle
# 70 "data/maps/Route22/scripts.pory"
# 35 "data/maps/Route22/scripts.pory"
# 71 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, Route22_EventScript_EarlyRivalBulbasaur
# 72 "data/maps/Route22/scripts.pory"
# 36 "data/maps/Route22/scripts.pory"
# 73 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, Route22_EventScript_EarlyRivalCharmander
# 74 "data/maps/Route22/scripts.pory"
# 37 "data/maps/Route22/scripts.pory"
# 75 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_EarlyRivalPostBattle
# 76 "data/maps/Route22/scripts.pory"
# 38 "data/maps/Route22/scripts.pory"
# 77 "data/maps/Route22/scripts.pory"
	closemessage
# 78 "data/maps/Route22/scripts.pory"
# 39 "data/maps/Route22/scripts.pory"
# 79 "data/maps/Route22/scripts.pory"
	delay 10
# 80 "data/maps/Route22/scripts.pory"
# 40 "data/maps/Route22/scripts.pory"
# 81 "data/maps/Route22/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 82 "data/maps/Route22/scripts.pory"
# 41 "data/maps/Route22/scripts.pory"
# 83 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_EarlyRivalExit
# 84 "data/maps/Route22/scripts.pory"
# 42 "data/maps/Route22/scripts.pory"
# 85 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_EarlyRivalExit
# 86 "data/maps/Route22/scripts.pory"
# 43 "data/maps/Route22/scripts.pory"
# 87 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_EarlyRivalExitBottom
# 88 "data/maps/Route22/scripts.pory"
# 44 "data/maps/Route22/scripts.pory"
# 89 "data/maps/Route22/scripts.pory"
	fadedefaultbgm
# 90 "data/maps/Route22/scripts.pory"
# 45 "data/maps/Route22/scripts.pory"
# 91 "data/maps/Route22/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 92 "data/maps/Route22/scripts.pory"
# 46 "data/maps/Route22/scripts.pory"
# 93 "data/maps/Route22/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 94 "data/maps/Route22/scripts.pory"
# 47 "data/maps/Route22/scripts.pory"
# 95 "data/maps/Route22/scripts.pory"
	releaseall
# 96 "data/maps/Route22/scripts.pory"
# 48 "data/maps/Route22/scripts.pory"
# 97 "data/maps/Route22/scripts.pory"
	end
# 98 "data/maps/Route22/scripts.pory"
# 49 "data/maps/Route22/scripts.pory"
# 99 "data/maps/Route22/scripts.pory"

# 100 "data/maps/Route22/scripts.pory"
# 50 "data/maps/Route22/scripts.pory"
# 101 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalApproach::
# 102 "data/maps/Route22/scripts.pory"
# 51 "data/maps/Route22/scripts.pory"
# 103 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
# 104 "data/maps/Route22/scripts.pory"
# 52 "data/maps/Route22/scripts.pory"
# 105 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route22/scripts.pory"
# 53 "data/maps/Route22/scripts.pory"
# 107 "data/maps/Route22/scripts.pory"
	return
# 108 "data/maps/Route22/scripts.pory"
# 54 "data/maps/Route22/scripts.pory"
# 109 "data/maps/Route22/scripts.pory"

# 110 "data/maps/Route22/scripts.pory"
# 55 "data/maps/Route22/scripts.pory"
# 111 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalApproachBottom::
# 112 "data/maps/Route22/scripts.pory"
# 56 "data/maps/Route22/scripts.pory"
# 113 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
# 114 "data/maps/Route22/scripts.pory"
# 57 "data/maps/Route22/scripts.pory"
# 115 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_Movement_PlayerFaceRival
# 116 "data/maps/Route22/scripts.pory"
# 58 "data/maps/Route22/scripts.pory"
# 117 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route22/scripts.pory"
# 59 "data/maps/Route22/scripts.pory"
# 119 "data/maps/Route22/scripts.pory"
	return
# 120 "data/maps/Route22/scripts.pory"
# 60 "data/maps/Route22/scripts.pory"
# 121 "data/maps/Route22/scripts.pory"

# 122 "data/maps/Route22/scripts.pory"
# 61 "data/maps/Route22/scripts.pory"
# 123 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalSquirtle::
# 124 "data/maps/Route22/scripts.pory"
# 62 "data/maps/Route22/scripts.pory"
# 125 "data/maps/Route22/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
# 126 "data/maps/Route22/scripts.pory"
# 63 "data/maps/Route22/scripts.pory"
# 127 "data/maps/Route22/scripts.pory"
	return
# 128 "data/maps/Route22/scripts.pory"
# 64 "data/maps/Route22/scripts.pory"
# 129 "data/maps/Route22/scripts.pory"

# 130 "data/maps/Route22/scripts.pory"
# 65 "data/maps/Route22/scripts.pory"
# 131 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalBulbasaur::
# 132 "data/maps/Route22/scripts.pory"
# 66 "data/maps/Route22/scripts.pory"
# 133 "data/maps/Route22/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
# 134 "data/maps/Route22/scripts.pory"
# 67 "data/maps/Route22/scripts.pory"
# 135 "data/maps/Route22/scripts.pory"
	return
# 136 "data/maps/Route22/scripts.pory"
# 68 "data/maps/Route22/scripts.pory"
# 137 "data/maps/Route22/scripts.pory"

# 138 "data/maps/Route22/scripts.pory"
# 69 "data/maps/Route22/scripts.pory"
# 139 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalCharmander::
# 140 "data/maps/Route22/scripts.pory"
# 70 "data/maps/Route22/scripts.pory"
# 141 "data/maps/Route22/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
# 142 "data/maps/Route22/scripts.pory"
# 71 "data/maps/Route22/scripts.pory"
# 143 "data/maps/Route22/scripts.pory"
	return
# 144 "data/maps/Route22/scripts.pory"
# 72 "data/maps/Route22/scripts.pory"
# 145 "data/maps/Route22/scripts.pory"

# 146 "data/maps/Route22/scripts.pory"
# 73 "data/maps/Route22/scripts.pory"
# 147 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalExit::
# 148 "data/maps/Route22/scripts.pory"
# 74 "data/maps/Route22/scripts.pory"
# 149 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExit
# 150 "data/maps/Route22/scripts.pory"
# 75 "data/maps/Route22/scripts.pory"
# 151 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route22/scripts.pory"
# 76 "data/maps/Route22/scripts.pory"
# 153 "data/maps/Route22/scripts.pory"
	return
# 154 "data/maps/Route22/scripts.pory"
# 77 "data/maps/Route22/scripts.pory"
# 155 "data/maps/Route22/scripts.pory"

# 156 "data/maps/Route22/scripts.pory"
# 78 "data/maps/Route22/scripts.pory"
# 157 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalExitBottom::
# 158 "data/maps/Route22/scripts.pory"
# 79 "data/maps/Route22/scripts.pory"
# 159 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExitBottom
# 160 "data/maps/Route22/scripts.pory"
# 80 "data/maps/Route22/scripts.pory"
# 161 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 162 "data/maps/Route22/scripts.pory"
# 81 "data/maps/Route22/scripts.pory"
# 163 "data/maps/Route22/scripts.pory"
	return
# 164 "data/maps/Route22/scripts.pory"
# 82 "data/maps/Route22/scripts.pory"
# 165 "data/maps/Route22/scripts.pory"

# 166 "data/maps/Route22/scripts.pory"
# 83 "data/maps/Route22/scripts.pory"
# 167 "data/maps/Route22/scripts.pory"
Route22_Movement_UnusedRivalExit:: @ 8
# 168 "data/maps/Route22/scripts.pory"
# 84 "data/maps/Route22/scripts.pory"
# 169 "data/maps/Route22/scripts.pory"
	walk_right
# 170 "data/maps/Route22/scripts.pory"
# 85 "data/maps/Route22/scripts.pory"
# 171 "data/maps/Route22/scripts.pory"
	walk_right
# 172 "data/maps/Route22/scripts.pory"
# 86 "data/maps/Route22/scripts.pory"
# 173 "data/maps/Route22/scripts.pory"
	walk_right
# 174 "data/maps/Route22/scripts.pory"
# 87 "data/maps/Route22/scripts.pory"
# 175 "data/maps/Route22/scripts.pory"
	walk_right
# 176 "data/maps/Route22/scripts.pory"
# 88 "data/maps/Route22/scripts.pory"
# 177 "data/maps/Route22/scripts.pory"
	walk_right
# 178 "data/maps/Route22/scripts.pory"
# 89 "data/maps/Route22/scripts.pory"
# 179 "data/maps/Route22/scripts.pory"
	walk_right
# 180 "data/maps/Route22/scripts.pory"
# 90 "data/maps/Route22/scripts.pory"
# 181 "data/maps/Route22/scripts.pory"
	walk_right
# 182 "data/maps/Route22/scripts.pory"
# 91 "data/maps/Route22/scripts.pory"
# 183 "data/maps/Route22/scripts.pory"
	step_end
# 184 "data/maps/Route22/scripts.pory"
# 92 "data/maps/Route22/scripts.pory"
# 185 "data/maps/Route22/scripts.pory"

# 186 "data/maps/Route22/scripts.pory"
# 93 "data/maps/Route22/scripts.pory"
# 187 "data/maps/Route22/scripts.pory"
Route22_Movement_EarlyRivalExit::
# 188 "data/maps/Route22/scripts.pory"
# 94 "data/maps/Route22/scripts.pory"
# 189 "data/maps/Route22/scripts.pory"
	walk_down
# 190 "data/maps/Route22/scripts.pory"
# 95 "data/maps/Route22/scripts.pory"
# 191 "data/maps/Route22/scripts.pory"
	walk_right
# 192 "data/maps/Route22/scripts.pory"
# 96 "data/maps/Route22/scripts.pory"
# 193 "data/maps/Route22/scripts.pory"
	walk_right
# 194 "data/maps/Route22/scripts.pory"
# 97 "data/maps/Route22/scripts.pory"
# 195 "data/maps/Route22/scripts.pory"
	walk_right
# 196 "data/maps/Route22/scripts.pory"
# 98 "data/maps/Route22/scripts.pory"
# 197 "data/maps/Route22/scripts.pory"
	walk_right
# 198 "data/maps/Route22/scripts.pory"
# 99 "data/maps/Route22/scripts.pory"
# 199 "data/maps/Route22/scripts.pory"
	walk_right
# 200 "data/maps/Route22/scripts.pory"
# 100 "data/maps/Route22/scripts.pory"
# 201 "data/maps/Route22/scripts.pory"
	walk_down
# 202 "data/maps/Route22/scripts.pory"
# 101 "data/maps/Route22/scripts.pory"
# 203 "data/maps/Route22/scripts.pory"
	walk_down
# 204 "data/maps/Route22/scripts.pory"
# 102 "data/maps/Route22/scripts.pory"
# 205 "data/maps/Route22/scripts.pory"
	walk_down
# 206 "data/maps/Route22/scripts.pory"
# 103 "data/maps/Route22/scripts.pory"
# 207 "data/maps/Route22/scripts.pory"
	walk_down
# 208 "data/maps/Route22/scripts.pory"
# 104 "data/maps/Route22/scripts.pory"
# 209 "data/maps/Route22/scripts.pory"
	walk_down
# 210 "data/maps/Route22/scripts.pory"
# 105 "data/maps/Route22/scripts.pory"
# 211 "data/maps/Route22/scripts.pory"
	walk_down
# 212 "data/maps/Route22/scripts.pory"
# 106 "data/maps/Route22/scripts.pory"
# 213 "data/maps/Route22/scripts.pory"
	step_end
# 214 "data/maps/Route22/scripts.pory"
# 107 "data/maps/Route22/scripts.pory"
# 215 "data/maps/Route22/scripts.pory"

# 216 "data/maps/Route22/scripts.pory"
# 108 "data/maps/Route22/scripts.pory"
# 217 "data/maps/Route22/scripts.pory"
Route22_Movement_EarlyRivalExitBottom::
# 218 "data/maps/Route22/scripts.pory"
# 109 "data/maps/Route22/scripts.pory"
# 219 "data/maps/Route22/scripts.pory"
	walk_right
# 220 "data/maps/Route22/scripts.pory"
# 110 "data/maps/Route22/scripts.pory"
# 221 "data/maps/Route22/scripts.pory"
	walk_right
# 222 "data/maps/Route22/scripts.pory"
# 111 "data/maps/Route22/scripts.pory"
# 223 "data/maps/Route22/scripts.pory"
	walk_right
# 224 "data/maps/Route22/scripts.pory"
# 112 "data/maps/Route22/scripts.pory"
# 225 "data/maps/Route22/scripts.pory"
	walk_right
# 226 "data/maps/Route22/scripts.pory"
# 113 "data/maps/Route22/scripts.pory"
# 227 "data/maps/Route22/scripts.pory"
	walk_down
# 228 "data/maps/Route22/scripts.pory"
# 114 "data/maps/Route22/scripts.pory"
# 229 "data/maps/Route22/scripts.pory"
	walk_down
# 230 "data/maps/Route22/scripts.pory"
# 115 "data/maps/Route22/scripts.pory"
# 231 "data/maps/Route22/scripts.pory"
	walk_down
# 232 "data/maps/Route22/scripts.pory"
# 116 "data/maps/Route22/scripts.pory"
# 233 "data/maps/Route22/scripts.pory"
	walk_down
# 234 "data/maps/Route22/scripts.pory"
# 117 "data/maps/Route22/scripts.pory"
# 235 "data/maps/Route22/scripts.pory"
	walk_down
# 236 "data/maps/Route22/scripts.pory"
# 118 "data/maps/Route22/scripts.pory"
# 237 "data/maps/Route22/scripts.pory"
	walk_down
# 238 "data/maps/Route22/scripts.pory"
# 119 "data/maps/Route22/scripts.pory"
# 239 "data/maps/Route22/scripts.pory"
	walk_down
# 240 "data/maps/Route22/scripts.pory"
# 120 "data/maps/Route22/scripts.pory"
# 241 "data/maps/Route22/scripts.pory"
	step_end
# 242 "data/maps/Route22/scripts.pory"
# 121 "data/maps/Route22/scripts.pory"
# 243 "data/maps/Route22/scripts.pory"

# 244 "data/maps/Route22/scripts.pory"
# 122 "data/maps/Route22/scripts.pory"
# 245 "data/maps/Route22/scripts.pory"
Route22_Movement_RivalApproach::
# 246 "data/maps/Route22/scripts.pory"
# 123 "data/maps/Route22/scripts.pory"
# 247 "data/maps/Route22/scripts.pory"
	walk_right
# 248 "data/maps/Route22/scripts.pory"
# 124 "data/maps/Route22/scripts.pory"
# 249 "data/maps/Route22/scripts.pory"
	walk_right
# 250 "data/maps/Route22/scripts.pory"
# 125 "data/maps/Route22/scripts.pory"
# 251 "data/maps/Route22/scripts.pory"
	walk_right
# 252 "data/maps/Route22/scripts.pory"
# 126 "data/maps/Route22/scripts.pory"
# 253 "data/maps/Route22/scripts.pory"
	walk_right
# 254 "data/maps/Route22/scripts.pory"
# 127 "data/maps/Route22/scripts.pory"
# 255 "data/maps/Route22/scripts.pory"
	walk_right
# 256 "data/maps/Route22/scripts.pory"
# 128 "data/maps/Route22/scripts.pory"
# 257 "data/maps/Route22/scripts.pory"
	walk_right
# 258 "data/maps/Route22/scripts.pory"
# 129 "data/maps/Route22/scripts.pory"
# 259 "data/maps/Route22/scripts.pory"
	walk_right
# 260 "data/maps/Route22/scripts.pory"
# 130 "data/maps/Route22/scripts.pory"
# 261 "data/maps/Route22/scripts.pory"
	step_end
# 262 "data/maps/Route22/scripts.pory"
# 131 "data/maps/Route22/scripts.pory"
# 263 "data/maps/Route22/scripts.pory"

# 264 "data/maps/Route22/scripts.pory"
# 132 "data/maps/Route22/scripts.pory"
# 265 "data/maps/Route22/scripts.pory"
Route22_Movement_RivalApproachBottom::
# 266 "data/maps/Route22/scripts.pory"
# 133 "data/maps/Route22/scripts.pory"
# 267 "data/maps/Route22/scripts.pory"
	walk_right
# 268 "data/maps/Route22/scripts.pory"
# 134 "data/maps/Route22/scripts.pory"
# 269 "data/maps/Route22/scripts.pory"
	walk_right
# 270 "data/maps/Route22/scripts.pory"
# 135 "data/maps/Route22/scripts.pory"
# 271 "data/maps/Route22/scripts.pory"
	walk_right
# 272 "data/maps/Route22/scripts.pory"
# 136 "data/maps/Route22/scripts.pory"
# 273 "data/maps/Route22/scripts.pory"
	walk_right
# 274 "data/maps/Route22/scripts.pory"
# 137 "data/maps/Route22/scripts.pory"
# 275 "data/maps/Route22/scripts.pory"
	walk_right
# 276 "data/maps/Route22/scripts.pory"
# 138 "data/maps/Route22/scripts.pory"
# 277 "data/maps/Route22/scripts.pory"
	walk_right
# 278 "data/maps/Route22/scripts.pory"
# 139 "data/maps/Route22/scripts.pory"
# 279 "data/maps/Route22/scripts.pory"
	walk_right
# 280 "data/maps/Route22/scripts.pory"
# 140 "data/maps/Route22/scripts.pory"
# 281 "data/maps/Route22/scripts.pory"
	walk_right
# 282 "data/maps/Route22/scripts.pory"
# 141 "data/maps/Route22/scripts.pory"
# 283 "data/maps/Route22/scripts.pory"
	walk_in_place_faster_down
# 284 "data/maps/Route22/scripts.pory"
# 142 "data/maps/Route22/scripts.pory"
# 285 "data/maps/Route22/scripts.pory"
	step_end
# 286 "data/maps/Route22/scripts.pory"
# 143 "data/maps/Route22/scripts.pory"
# 287 "data/maps/Route22/scripts.pory"

# 288 "data/maps/Route22/scripts.pory"
# 144 "data/maps/Route22/scripts.pory"
# 289 "data/maps/Route22/scripts.pory"
Route22_Movement_PlayerFaceRival::
# 290 "data/maps/Route22/scripts.pory"
# 145 "data/maps/Route22/scripts.pory"
# 291 "data/maps/Route22/scripts.pory"
	delay_16
# 292 "data/maps/Route22/scripts.pory"
# 146 "data/maps/Route22/scripts.pory"
# 293 "data/maps/Route22/scripts.pory"
	delay_16
# 294 "data/maps/Route22/scripts.pory"
# 147 "data/maps/Route22/scripts.pory"
# 295 "data/maps/Route22/scripts.pory"
	delay_16
# 296 "data/maps/Route22/scripts.pory"
# 148 "data/maps/Route22/scripts.pory"
# 297 "data/maps/Route22/scripts.pory"
	delay_16
# 298 "data/maps/Route22/scripts.pory"
# 149 "data/maps/Route22/scripts.pory"
# 299 "data/maps/Route22/scripts.pory"
	delay_16
# 300 "data/maps/Route22/scripts.pory"
# 150 "data/maps/Route22/scripts.pory"
# 301 "data/maps/Route22/scripts.pory"
	delay_16
# 302 "data/maps/Route22/scripts.pory"
# 151 "data/maps/Route22/scripts.pory"
# 303 "data/maps/Route22/scripts.pory"
	delay_16
# 304 "data/maps/Route22/scripts.pory"
# 152 "data/maps/Route22/scripts.pory"
# 305 "data/maps/Route22/scripts.pory"
	delay_8
# 306 "data/maps/Route22/scripts.pory"
# 153 "data/maps/Route22/scripts.pory"
# 307 "data/maps/Route22/scripts.pory"
	walk_in_place_faster_up
# 308 "data/maps/Route22/scripts.pory"
# 154 "data/maps/Route22/scripts.pory"
# 309 "data/maps/Route22/scripts.pory"
	step_end
# 310 "data/maps/Route22/scripts.pory"
# 155 "data/maps/Route22/scripts.pory"
# 311 "data/maps/Route22/scripts.pory"

# 312 "data/maps/Route22/scripts.pory"
# 156 "data/maps/Route22/scripts.pory"
# 313 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalTriggerTop::
# 314 "data/maps/Route22/scripts.pory"
# 157 "data/maps/Route22/scripts.pory"
# 315 "data/maps/Route22/scripts.pory"
	lockall
# 316 "data/maps/Route22/scripts.pory"
# 158 "data/maps/Route22/scripts.pory"
# 317 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 0
# 318 "data/maps/Route22/scripts.pory"
# 159 "data/maps/Route22/scripts.pory"
# 319 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
# 320 "data/maps/Route22/scripts.pory"
# 160 "data/maps/Route22/scripts.pory"
# 321 "data/maps/Route22/scripts.pory"
	end
# 322 "data/maps/Route22/scripts.pory"
# 161 "data/maps/Route22/scripts.pory"
# 323 "data/maps/Route22/scripts.pory"

# 324 "data/maps/Route22/scripts.pory"
# 162 "data/maps/Route22/scripts.pory"
# 325 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalTriggerMid::
# 326 "data/maps/Route22/scripts.pory"
# 163 "data/maps/Route22/scripts.pory"
# 327 "data/maps/Route22/scripts.pory"
	lockall
# 328 "data/maps/Route22/scripts.pory"
# 164 "data/maps/Route22/scripts.pory"
# 329 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 1
# 330 "data/maps/Route22/scripts.pory"
# 165 "data/maps/Route22/scripts.pory"
# 331 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 332 "data/maps/Route22/scripts.pory"
# 166 "data/maps/Route22/scripts.pory"
# 333 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
# 334 "data/maps/Route22/scripts.pory"
# 167 "data/maps/Route22/scripts.pory"
# 335 "data/maps/Route22/scripts.pory"
	end
# 336 "data/maps/Route22/scripts.pory"
# 168 "data/maps/Route22/scripts.pory"
# 337 "data/maps/Route22/scripts.pory"

# 338 "data/maps/Route22/scripts.pory"
# 169 "data/maps/Route22/scripts.pory"
# 339 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalTriggerBottom::
# 340 "data/maps/Route22/scripts.pory"
# 170 "data/maps/Route22/scripts.pory"
# 341 "data/maps/Route22/scripts.pory"
	lockall
# 342 "data/maps/Route22/scripts.pory"
# 171 "data/maps/Route22/scripts.pory"
# 343 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 2
# 344 "data/maps/Route22/scripts.pory"
# 172 "data/maps/Route22/scripts.pory"
# 345 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 346 "data/maps/Route22/scripts.pory"
# 173 "data/maps/Route22/scripts.pory"
# 347 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
# 348 "data/maps/Route22/scripts.pory"
# 174 "data/maps/Route22/scripts.pory"
# 349 "data/maps/Route22/scripts.pory"
	end
# 350 "data/maps/Route22/scripts.pory"
# 175 "data/maps/Route22/scripts.pory"
# 351 "data/maps/Route22/scripts.pory"

# 352 "data/maps/Route22/scripts.pory"
# 176 "data/maps/Route22/scripts.pory"
# 353 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRival::
# 354 "data/maps/Route22/scripts.pory"
# 177 "data/maps/Route22/scripts.pory"
# 355 "data/maps/Route22/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 356 "data/maps/Route22/scripts.pory"
# 178 "data/maps/Route22/scripts.pory"
# 357 "data/maps/Route22/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 358 "data/maps/Route22/scripts.pory"
# 179 "data/maps/Route22/scripts.pory"
# 359 "data/maps/Route22/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 360 "data/maps/Route22/scripts.pory"
# 180 "data/maps/Route22/scripts.pory"
# 361 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_LateRivalApproach
# 362 "data/maps/Route22/scripts.pory"
# 181 "data/maps/Route22/scripts.pory"
# 363 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_LateRivalApproach
# 364 "data/maps/Route22/scripts.pory"
# 182 "data/maps/Route22/scripts.pory"
# 365 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_LateRivalApproachBottom
# 366 "data/maps/Route22/scripts.pory"
# 183 "data/maps/Route22/scripts.pory"
# 367 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LateRivalIntro
# 368 "data/maps/Route22/scripts.pory"
# 184 "data/maps/Route22/scripts.pory"
# 369 "data/maps/Route22/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROUTE22_RIVAL
# 370 "data/maps/Route22/scripts.pory"
# 185 "data/maps/Route22/scripts.pory"
# 371 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, Route22_EventScript_LateRivalSquirtle
# 372 "data/maps/Route22/scripts.pory"
# 186 "data/maps/Route22/scripts.pory"
# 373 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, Route22_EventScript_LateRivalBulbasaur
# 374 "data/maps/Route22/scripts.pory"
# 187 "data/maps/Route22/scripts.pory"
# 375 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, Route22_EventScript_LateRivalCharmander
# 376 "data/maps/Route22/scripts.pory"
# 188 "data/maps/Route22/scripts.pory"
# 377 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LateRivalPostBattle
# 378 "data/maps/Route22/scripts.pory"
# 189 "data/maps/Route22/scripts.pory"
# 379 "data/maps/Route22/scripts.pory"
	closemessage
# 380 "data/maps/Route22/scripts.pory"
# 190 "data/maps/Route22/scripts.pory"
# 381 "data/maps/Route22/scripts.pory"
	delay 10
# 382 "data/maps/Route22/scripts.pory"
# 191 "data/maps/Route22/scripts.pory"
# 383 "data/maps/Route22/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 384 "data/maps/Route22/scripts.pory"
# 192 "data/maps/Route22/scripts.pory"
# 385 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_LateRivalExit
# 386 "data/maps/Route22/scripts.pory"
# 193 "data/maps/Route22/scripts.pory"
# 387 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 388 "data/maps/Route22/scripts.pory"
# 194 "data/maps/Route22/scripts.pory"
# 389 "data/maps/Route22/scripts.pory"
	fadedefaultbgm
# 390 "data/maps/Route22/scripts.pory"
# 195 "data/maps/Route22/scripts.pory"
# 391 "data/maps/Route22/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 392 "data/maps/Route22/scripts.pory"
# 196 "data/maps/Route22/scripts.pory"
# 393 "data/maps/Route22/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 4
# 394 "data/maps/Route22/scripts.pory"
# 197 "data/maps/Route22/scripts.pory"
# 395 "data/maps/Route22/scripts.pory"
	releaseall
# 396 "data/maps/Route22/scripts.pory"
# 198 "data/maps/Route22/scripts.pory"
# 397 "data/maps/Route22/scripts.pory"
	end
# 398 "data/maps/Route22/scripts.pory"
# 199 "data/maps/Route22/scripts.pory"
# 399 "data/maps/Route22/scripts.pory"

# 400 "data/maps/Route22/scripts.pory"
# 200 "data/maps/Route22/scripts.pory"
# 401 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalApproach::
# 402 "data/maps/Route22/scripts.pory"
# 201 "data/maps/Route22/scripts.pory"
# 403 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
# 404 "data/maps/Route22/scripts.pory"
# 202 "data/maps/Route22/scripts.pory"
# 405 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 406 "data/maps/Route22/scripts.pory"
# 203 "data/maps/Route22/scripts.pory"
# 407 "data/maps/Route22/scripts.pory"
	return
# 408 "data/maps/Route22/scripts.pory"
# 204 "data/maps/Route22/scripts.pory"
# 409 "data/maps/Route22/scripts.pory"

# 410 "data/maps/Route22/scripts.pory"
# 205 "data/maps/Route22/scripts.pory"
# 411 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalApproachBottom::
# 412 "data/maps/Route22/scripts.pory"
# 206 "data/maps/Route22/scripts.pory"
# 413 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
# 414 "data/maps/Route22/scripts.pory"
# 207 "data/maps/Route22/scripts.pory"
# 415 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_Movement_PlayerFaceRival
# 416 "data/maps/Route22/scripts.pory"
# 208 "data/maps/Route22/scripts.pory"
# 417 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 418 "data/maps/Route22/scripts.pory"
# 209 "data/maps/Route22/scripts.pory"
# 419 "data/maps/Route22/scripts.pory"
	return
# 420 "data/maps/Route22/scripts.pory"
# 210 "data/maps/Route22/scripts.pory"
# 421 "data/maps/Route22/scripts.pory"

# 422 "data/maps/Route22/scripts.pory"
# 211 "data/maps/Route22/scripts.pory"
# 423 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalSquirtle::
# 424 "data/maps/Route22/scripts.pory"
# 212 "data/maps/Route22/scripts.pory"
# 425 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_SQUIRTLE, Route22_Text_LateRivalDefeat
# 426 "data/maps/Route22/scripts.pory"
# 213 "data/maps/Route22/scripts.pory"
# 427 "data/maps/Route22/scripts.pory"
	return
# 428 "data/maps/Route22/scripts.pory"
# 214 "data/maps/Route22/scripts.pory"
# 429 "data/maps/Route22/scripts.pory"

# 430 "data/maps/Route22/scripts.pory"
# 215 "data/maps/Route22/scripts.pory"
# 431 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalBulbasaur::
# 432 "data/maps/Route22/scripts.pory"
# 216 "data/maps/Route22/scripts.pory"
# 433 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_BULBASAUR, Route22_Text_LateRivalDefeat
# 434 "data/maps/Route22/scripts.pory"
# 217 "data/maps/Route22/scripts.pory"
# 435 "data/maps/Route22/scripts.pory"
	return
# 436 "data/maps/Route22/scripts.pory"
# 218 "data/maps/Route22/scripts.pory"
# 437 "data/maps/Route22/scripts.pory"

# 438 "data/maps/Route22/scripts.pory"
# 219 "data/maps/Route22/scripts.pory"
# 439 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalCharmander::
# 440 "data/maps/Route22/scripts.pory"
# 220 "data/maps/Route22/scripts.pory"
# 441 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_CHARMANDER, Route22_Text_LateRivalDefeat
# 442 "data/maps/Route22/scripts.pory"
# 221 "data/maps/Route22/scripts.pory"
# 443 "data/maps/Route22/scripts.pory"
	return
# 444 "data/maps/Route22/scripts.pory"
# 222 "data/maps/Route22/scripts.pory"
# 445 "data/maps/Route22/scripts.pory"

# 446 "data/maps/Route22/scripts.pory"
# 223 "data/maps/Route22/scripts.pory"
# 447 "data/maps/Route22/scripts.pory"
Route22_Movement_LateRivalExit::
# 448 "data/maps/Route22/scripts.pory"
# 224 "data/maps/Route22/scripts.pory"
# 449 "data/maps/Route22/scripts.pory"
	walk_left
# 450 "data/maps/Route22/scripts.pory"
# 225 "data/maps/Route22/scripts.pory"
# 451 "data/maps/Route22/scripts.pory"
	walk_left
# 452 "data/maps/Route22/scripts.pory"
# 226 "data/maps/Route22/scripts.pory"
# 453 "data/maps/Route22/scripts.pory"
	walk_left
# 454 "data/maps/Route22/scripts.pory"
# 227 "data/maps/Route22/scripts.pory"
# 455 "data/maps/Route22/scripts.pory"
	walk_left
# 456 "data/maps/Route22/scripts.pory"
# 228 "data/maps/Route22/scripts.pory"
# 457 "data/maps/Route22/scripts.pory"
	walk_left
# 458 "data/maps/Route22/scripts.pory"
# 229 "data/maps/Route22/scripts.pory"
# 459 "data/maps/Route22/scripts.pory"
	walk_left
# 460 "data/maps/Route22/scripts.pory"
# 230 "data/maps/Route22/scripts.pory"
# 461 "data/maps/Route22/scripts.pory"
	walk_left
# 462 "data/maps/Route22/scripts.pory"
# 231 "data/maps/Route22/scripts.pory"
# 463 "data/maps/Route22/scripts.pory"
	step_end
# 464 "data/maps/Route22/scripts.pory"
# 232 "data/maps/Route22/scripts.pory"
# 465 "data/maps/Route22/scripts.pory"

# 466 "data/maps/Route22/scripts.pory"
# 233 "data/maps/Route22/scripts.pory"
# 467 "data/maps/Route22/scripts.pory"
Route22_EventScript_LeagueGateSign::
# 468 "data/maps/Route22/scripts.pory"
# 234 "data/maps/Route22/scripts.pory"
# 469 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LeagueGateSign, MSGBOX_SIGN
# 470 "data/maps/Route22/scripts.pory"
# 235 "data/maps/Route22/scripts.pory"
# 471 "data/maps/Route22/scripts.pory"
	end

Route22_CrypticFisherman::
# 477 "data/maps/Route22/scripts.pory"
	lock
# 478 "data/maps/Route22/scripts.pory"
	faceplayer
# 481 "data/maps/Route22/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Route22_CrypticFisherman_2
# 488 "data/maps/Route22/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Route22_CrypticFisherman_5
# 495 "data/maps/Route22/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route22_CrypticFisherman_8
# 502 "data/maps/Route22/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Route22_CrypticFisherman_11
# 509 "data/maps/Route22/scripts.pory"
	msgbox Route22_CrypticFisherman_Text_4, MSGBOX_NPC
# 510 "data/maps/Route22/scripts.pory"
	release
	end

Route22_CrypticFisherman_2:
# 482 "data/maps/Route22/scripts.pory"
	msgbox Route22_CrypticFisherman_Text_0, MSGBOX_NPC
# 483 "data/maps/Route22/scripts.pory"
	release
	end

Route22_CrypticFisherman_5:
# 489 "data/maps/Route22/scripts.pory"
	msgbox Route22_CrypticFisherman_Text_1, MSGBOX_NPC
# 490 "data/maps/Route22/scripts.pory"
	release
	end

Route22_CrypticFisherman_8:
# 496 "data/maps/Route22/scripts.pory"
	msgbox Route22_CrypticFisherman_Text_2, MSGBOX_NPC
# 497 "data/maps/Route22/scripts.pory"
	release
	end

Route22_CrypticFisherman_11:
# 503 "data/maps/Route22/scripts.pory"
	msgbox Route22_CrypticFisherman_Text_3, MSGBOX_NPC
# 504 "data/maps/Route22/scripts.pory"
	release
	end


Route22_MountainBlackbelt::
# 515 "data/maps/Route22/scripts.pory"
	lock
# 516 "data/maps/Route22/scripts.pory"
	faceplayer
# 519 "data/maps/Route22/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROUTE22_BLACKBELT, Route22_MountainBlackbelt_2
# 526 "data/maps/Route22/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route22_MountainBlackbelt_5
# 533 "data/maps/Route22/scripts.pory"
	msgbox Route22_MountainBlackbelt_Text_2, MSGBOX_YESNO
# 535 "data/maps/Route22/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route22_MountainBlackbelt_8
# 542 "data/maps/Route22/scripts.pory"
	msgbox Route22_MountainBlackbelt_Text_4, MSGBOX_NPC
# 544 "data/maps/Route22/scripts.pory"
	release
	end

Route22_MountainBlackbelt_2:
# 520 "data/maps/Route22/scripts.pory"
	msgbox Route22_MountainBlackbelt_Text_0, MSGBOX_NPC
# 521 "data/maps/Route22/scripts.pory"
	release
	end

Route22_MountainBlackbelt_5:
# 527 "data/maps/Route22/scripts.pory"
	msgbox Route22_MountainBlackbelt_Text_1, MSGBOX_NPC
# 528 "data/maps/Route22/scripts.pory"
	release
	end

Route22_MountainBlackbelt_8:
# 536 "data/maps/Route22/scripts.pory"
	msgbox Route22_MountainBlackbelt_Text_3, MSGBOX_NPC
# 537 "data/maps/Route22/scripts.pory"
	release
	end


Blackbelt_Machamp::
# 550 "data/maps/Route22/scripts.pory"
	lock
# 551 "data/maps/Route22/scripts.pory"
	faceplayer
# 552 "data/maps/Route22/scripts.pory"
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
# 553 "data/maps/Route22/scripts.pory"
	msgbox Blackbelt_Machamp_Text_0, MSGBOX_DEFAULT
# 554 "data/maps/Route22/scripts.pory"
	waitmoncry
# 555 "data/maps/Route22/scripts.pory"
	release
	end


Route22_JohtoGentleman::
# 560 "data/maps/Route22/scripts.pory"
	lock
# 561 "data/maps/Route22/scripts.pory"
	faceplayer
# 562 "data/maps/Route22/scripts.pory"
	msgbox Route22_JohtoGentleman_Text_0, MSGBOX_NPC
# 563 "data/maps/Route22/scripts.pory"
	release
	end


Route22_Cyndaquil::
# 568 "data/maps/Route22/scripts.pory"
	lock
# 569 "data/maps/Route22/scripts.pory"
	faceplayer
# 570 "data/maps/Route22/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_WEAK
# 571 "data/maps/Route22/scripts.pory"
	waitmoncry
# 572 "data/maps/Route22/scripts.pory"
	msgbox Route22_Cyndaquil_Text_0, MSGBOX_DEFAULT
# 573 "data/maps/Route22/scripts.pory"
	release
	end


Route22_PoliceOfficer::
# 578 "data/maps/Route22/scripts.pory"
	lock
# 579 "data/maps/Route22/scripts.pory"
	faceplayer
# 580 "data/maps/Route22/scripts.pory"
	msgbox Route22_PoliceOfficer_Text_0, MSGBOX_NPC
# 581 "data/maps/Route22/scripts.pory"
	release
	end


Route22_CrypticFisherman_Text_0:
# 482 "data/maps/Route22/scripts.pory"
	.string "The waters are calm today...\pBut I sense a great journey\nbeginning.\pThe path ahead is long, traveler.\nBut you already knew that,\ldidn't you?$"

Route22_CrypticFisherman_Text_1:
# 489 "data/maps/Route22/scripts.pory"
	.string "First steps taken...\pThe fish are restless.\nThey know something is stirring\lin the world.\pAs do you.$"

Route22_CrypticFisherman_Text_2:
# 496 "data/maps/Route22/scripts.pory"
	.string "Two stones cast into the pond...\pThe ripples spread wider.\nYour presence is felt now.\pThey're watching you.$"

Route22_CrypticFisherman_Text_3:
# 503 "data/maps/Route22/scripts.pory"
	.string "Come and sit with me a while.\pLeave the demon to his demons.\nRest your own soul.\pThere is nothing else.$"

Route22_CrypticFisherman_Text_4:
# 509 "data/maps/Route22/scripts.pory"
	.string "The current flows ever forward...\pAs must you.$"

Route22_MountainBlackbelt_Text_0:
# 520 "data/maps/Route22/scripts.pory"
	.string "That was a great battle!\pKeep training hard!$"

Route22_MountainBlackbelt_Text_1:
# 527 "data/maps/Route22/scripts.pory"
	.string "You climbed all the way up here?\pHa! You've got guts, I'll give\nyou that.\pBut look at you... you're not\neven close to ready!\pGet stronger first!\pCome back when you've earned at\nleast 3 GYM BADGES!\pMy MACHAMP would crush you in\nseconds. Don't waste my time!$"

Route22_MountainBlackbelt_Text_2:
# 533 "data/maps/Route22/scripts.pory"
	.string "So you've returned!\pYou have the look of a true\ntrainer now.\pLet's see if you can handle the\npower of my MACHAMP!$"

Route22_MountainBlackbelt_Text_3:
# 536 "data/maps/Route22/scripts.pory"
	.string "Not ready yet? That's fine.\pI'll be here training when you\nare!$"

Route22_MountainBlackbelt_Text_4:
# 542 "data/maps/Route22/scripts.pory"
	.string "Battle placeholder - coming soon!$"

Blackbelt_Machamp_Text_0:
# 553 "data/maps/Route22/scripts.pory"
	.string "Machamp!$"

Route22_JohtoGentleman_Text_0:
# 562 "data/maps/Route22/scripts.pory"
	.string "Ah, a fellow trainer!\pI came here from JOHTO seeking\nadventure in KANTO...\pBut now I'm... well, stuck.\pSILPH CO. bought out all the\nferry companies.\pTicket prices have tripled!\nI can't afford to go home!\pMy poor CYNDAQUIL is so homesick.\pWe just wanted to see the world,\nnot be trapped here...$"

Route22_Cyndaquil_Text_0:
# 572 "data/maps/Route22/scripts.pory"
	.string "Cynda... quil...\pThe CYNDAQUIL's back flames burn\nlow and sadly.\pIt stares longingly toward the\neast, toward home.\pPoor thing misses JOHTO...$"

Route22_PoliceOfficer_Text_0:
# 580 "data/maps/Route22/scripts.pory"
	.string "Halt! The POKéMON LEAGUE is\nclosed to challengers.\pYou need all 8 GYM BADGES to\npass through.\pThough between you and me...\pI hear GYM LEADERS might be a\nthing of the past soon.\pSILPH CO. has been talking about\na new system, something about\l'standardized training facilities'\land...\pAh, never mind. Forget I said\nanything.\pJust... get your BADGES and move\nalong, kid.$"

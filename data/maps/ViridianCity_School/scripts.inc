# 1 "data/maps/ViridianCity_School/scripts.pory"

# 2 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_MapScripts::
# 3 "data/maps/ViridianCity_School/scripts.pory"
	.byte 0
# 4 "data/maps/ViridianCity_School/scripts.pory"

# 5 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_Lass::
# 6 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 7 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 8 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TryingToMemorizeNotes
# 9 "data/maps/ViridianCity_School/scripts.pory"
	closemessage
# 10 "data/maps/ViridianCity_School/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
# 11 "data/maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 12 "data/maps/ViridianCity_School/scripts.pory"
	release
# 13 "data/maps/ViridianCity_School/scripts.pory"
	end
# 14 "data/maps/ViridianCity_School/scripts.pory"

# 15 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_Woman::
# 16 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 17 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 18 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ReadBlackboardCarefully
# 19 "data/maps/ViridianCity_School/scripts.pory"
	closemessage
# 20 "data/maps/ViridianCity_School/scripts.pory"
	applymovement LOCALID_SCHOOL_WOMAN, Common_Movement_FaceOriginalDirection
# 21 "data/maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 22 "data/maps/ViridianCity_School/scripts.pory"
	release
# 23 "data/maps/ViridianCity_School/scripts.pory"
	end
# 24 "data/maps/ViridianCity_School/scripts.pory"

# 25 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_Notebook::
# 26 "data/maps/ViridianCity_School/scripts.pory"
	lockall
# 27 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFirstPage
# 28 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 29 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 30 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookSecondPage
# 31 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 32 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 33 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookThirdPage
# 34 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 35 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 36 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFourthPage
# 37 "data/maps/ViridianCity_School/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
# 38 "data/maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 39 "data/maps/ViridianCity_School/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 40 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_HeyDontLookAtMyNotes
# 41 "data/maps/ViridianCity_School/scripts.pory"
	releaseall
# 42 "data/maps/ViridianCity_School/scripts.pory"
	end
# 43 "data/maps/ViridianCity_School/scripts.pory"

# 44 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_StopReadingNotebook::
# 45 "data/maps/ViridianCity_School/scripts.pory"
	releaseall
# 46 "data/maps/ViridianCity_School/scripts.pory"
	end
# 47 "data/maps/ViridianCity_School/scripts.pory"

# 48 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_Blackboard::
# 49 "data/maps/ViridianCity_School/scripts.pory"
	lockall
# 50 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_BlackboardListsStatusProblems
# 51 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 52 "data/maps/ViridianCity_School/scripts.pory"
	end
# 53 "data/maps/ViridianCity_School/scripts.pory"

# 54 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic::
# 55 "data/maps/ViridianCity_School/scripts.pory"
	message ViridianCity_School_Text_ReadWhichTopic
# 56 "data/maps/ViridianCity_School/scripts.pory"
	waitmessage
# 57 "data/maps/ViridianCity_School/scripts.pory"
	multichoicegrid 7, 1, MULTICHOICE_TRAINER_SCHOOL_WHITEBOARD, 3, FALSE
# 58 "data/maps/ViridianCity_School/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/ViridianCity_School/scripts.pory"
	case 0, ViridianCity_School_EventScript_ReadSleep
# 60 "data/maps/ViridianCity_School/scripts.pory"
	case 1, ViridianCity_School_EventScript_ReadPoison
# 61 "data/maps/ViridianCity_School/scripts.pory"
	case 2, ViridianCity_School_EventScript_ReadParalysis
# 62 "data/maps/ViridianCity_School/scripts.pory"
	case 3, ViridianCity_School_EventScript_ReadBurn
# 63 "data/maps/ViridianCity_School/scripts.pory"
	case 4, ViridianCity_School_EventScript_ReadFreeze
# 64 "data/maps/ViridianCity_School/scripts.pory"
	case 5, ViridianCity_School_EventScript_ExitBlackboard
# 65 "data/maps/ViridianCity_School/scripts.pory"
	case 127, ViridianCity_School_EventScript_ExitBlackboard
# 66 "data/maps/ViridianCity_School/scripts.pory"
	end
# 67 "data/maps/ViridianCity_School/scripts.pory"

# 68 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadSleep::
# 69 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainSleep
# 70 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 71 "data/maps/ViridianCity_School/scripts.pory"
	end
# 72 "data/maps/ViridianCity_School/scripts.pory"

# 73 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadBurn::
# 74 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainBurn
# 75 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 76 "data/maps/ViridianCity_School/scripts.pory"
	end
# 77 "data/maps/ViridianCity_School/scripts.pory"

# 78 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadPoison::
# 79 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainPoison
# 80 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 81 "data/maps/ViridianCity_School/scripts.pory"
	end
# 82 "data/maps/ViridianCity_School/scripts.pory"

# 83 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadFreeze::
# 84 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainFreeze
# 85 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 86 "data/maps/ViridianCity_School/scripts.pory"
	end
# 87 "data/maps/ViridianCity_School/scripts.pory"

# 88 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadParalysis::
# 89 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainParalysis
# 90 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 91 "data/maps/ViridianCity_School/scripts.pory"
	end
# 92 "data/maps/ViridianCity_School/scripts.pory"

# 93 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ExitBlackboard::
# 94 "data/maps/ViridianCity_School/scripts.pory"
	releaseall
# 95 "data/maps/ViridianCity_School/scripts.pory"
	end

MyMapscripts_ViridianCity_School::
	.byte 0


Adam_Classmate_Script::
# 101 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 102 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 103 "data/maps/ViridianCity_School/scripts.pory"
	msgbox Adam_Classmate_Script_Text_0, MSGBOX_NPC
# 104 "data/maps/ViridianCity_School/scripts.pory"
	release
	return


BugTrainer_Classmate_Script::
# 108 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 109 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 110 "data/maps/ViridianCity_School/scripts.pory"
	msgbox BugTrainer_Classmate_Script_Text_0, MSGBOX_NPC
# 111 "data/maps/ViridianCity_School/scripts.pory"
	release
	return


TrainerSchool_CheatSheet::
# 116 "data/maps/ViridianCity_School/scripts.pory"
	msgbox TrainerSchool_CheatSheet_Text_0, MSGBOX_SIGN
	end


TrainerSchool_EarlyPidgeottoNotebook::
# 121 "data/maps/ViridianCity_School/scripts.pory"
	msgbox TrainerSchool_EarlyPidgeottoNotebook_Text_0, MSGBOX_SIGN
	end


Lass_Classmate_Script::
# 126 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 127 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 128 "data/maps/ViridianCity_School/scripts.pory"
	msgbox Lass_Classmate_Script_Text_0, MSGBOX_NPC
# 129 "data/maps/ViridianCity_School/scripts.pory"
	release
	end


BattleGirl_Classmate_Script::
# 134 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 135 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 136 "data/maps/ViridianCity_School/scripts.pory"
	msgbox BattleGirl_Classmate_Script_Text_0, MSGBOX_NPC
# 137 "data/maps/ViridianCity_School/scripts.pory"
	release
	end


TrainerSchool_LassNotebook::
# 142 "data/maps/ViridianCity_School/scripts.pory"
	msgbox TrainerSchool_LassNotebook_Text_0, MSGBOX_SIGN
	end


TrainerSchool_BattleGirlNotebook::
# 147 "data/maps/ViridianCity_School/scripts.pory"
	msgbox TrainerSchool_BattleGirlNotebook_Text_0, MSGBOX_SIGN
	end


Adam_Classmate_Script_Text_0:
# 103 "data/maps/ViridianCity_School/scripts.pory"
	.string "My friend Adam always beat me with \nhis PIDGEOTTO...where did he get one \pSo early?$"

BugTrainer_Classmate_Script_Text_0:
# 110 "data/maps/ViridianCity_School/scripts.pory"
	.string "Shh! I'm trying to cheat!$"

TrainerSchool_CheatSheet_Text_0:
# 116 "data/maps/ViridianCity_School/scripts.pory"
	.string "A notebook lies open on the desk.\p'Test answers: A, B, C, D, A, B...'\p...They just wrote the entire\nalphabet in order.$"

TrainerSchool_EarlyPidgeottoNotebook_Text_0:
# 121 "data/maps/ViridianCity_School/scripts.pory"
	.string "A notebook filled with questions.\p'How does Adam already have\na PIDGEOTTO?!'\p'We JUST got our POKéMON!\nMine's still a PIDGEY!'\p'Did his Grandpa give him\nspecial training or something?'\p...The handwriting gets angrier\ntoward the end.$"

Lass_Classmate_Script_Text_0:
# 128 "data/maps/ViridianCity_School/scripts.pory"
	.string "I heard CLEFAIRY are really rare!\pBut I saw one in town with some\nrich lady...\pShe said it cost more than my\nhouse! How is that fair?!$"

BattleGirl_Classmate_Script_Text_0:
# 136 "data/maps/ViridianCity_School/scripts.pory"
	.string "Forget studying! I'm gonna train\nmy POKéMON instead!\pBooks won't help me become the\nchampion!\p...But my mom says if I fail this\ntest, no more POKéMON battles\lfor a month.\pUgh, fine. What's a type chart?$"

TrainerSchool_LassNotebook_Text_0:
# 142 "data/maps/ViridianCity_School/scripts.pory"
	.string "A notebook covered in doodles.\p'Cute POKéMON I want:\n- CLEFAIRY (too expensive)\l- JIGGLYPUFF (can't find one)\l- MEOWTH (scratched me)\l- PIKACHU (keeps shocking me)'\p'Why are all the cute ones so\nmean or expensive?!'\p...There's a poorly drawn sad face\nat the bottom.$"

TrainerSchool_BattleGirlNotebook_Text_0:
# 147 "data/maps/ViridianCity_School/scripts.pory"
	.string "A notebook with aggressive scribbles.\p'FIGHTING TYPES ARE THE BEST!'\p'Who cares about type advantages?\nJust hit harder!'\p'Teacher says PSYCHIC beats\nFIGHTING but I don't believe it.'\p'Gonna prove her wrong someday!'\p...There's a poorly drawn MACHOP\nflexing in the corner.$"

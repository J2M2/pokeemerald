testmap_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, testmap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

testmap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, testmap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

testmap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	delay 30
	moveobjecttopos OBJ_EVENT_ID_PLAYER, 17, 17, 3
	waitmovement 0
	setvar VAR_TEMP_0, 1
	release
	return


Glamio_PRE_OnResume::
	setvar VAR_TEMP_0, 0
	release
	return


testmap_Camara0:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

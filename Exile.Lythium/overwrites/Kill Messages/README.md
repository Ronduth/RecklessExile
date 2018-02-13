Kill Messages Installation
==========================

**Missions Folder**

Open the MISSION folder
Add the custom folder to your missions folder. (If you already have a custom folder, add the file to your existing folder)
Add the overwrites folder. (If you already have a overwrites folder, add the file to your existing folder)

Open your config file and locate 'class CfgExileCustomCode' and add the following inside the brackets.

	//Kill Messages
	ExileServer_object_player_event_onMpKilled = "overwrites\ExileServer_object_player_event_onMpKilled.sqf";
	
Add the init file to your missions folder.
If you already have an init file, add the following line to it - 

	//Kill Messages
	[] execVM "custom\KillMessages.sqf";

**Edit your exile.ini**
@ExileServer > extDB > sql_custom_v2
Add the following to the bottom

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Kill Messages
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

[logGr8Kill]
SQL1_1 = INSERT INTO kills SET killer_name = ?, killer_uid = ?, victim_name = ?, victim_uid = ?, weapon = ?, distance = ?, respect = ?, died_at = NOW()
Number Of Inputs = 7
SQL1_INPUTS = 1,2,3,4,5,6,7
Return InsertID = true
 Return InsertID = true
 
**Database Edits**
 
Run the SQL script, or run the following Query

CREATE TABLE `kills` (
	`id` INT(11) UNSIGNED NOT NULL AUTO_INCREMENT COMMENT 'Identification number of each kill',
	`killer_name` VARCHAR(50) NOT NULL DEFAULT 'Unkown' COMMENT 'Name of the Killer',
	`killer_uid` VARCHAR(32) NULL DEFAULT NULL COMMENT 'UID of the Killer',
	`victim_name` VARCHAR(50) NOT NULL DEFAULT 'Unkown' COMMENT 'Name of the Person who died',
	`victim_uid` VARCHAR(32) NULL DEFAULT NULL COMMENT 'UID of the Victim',
	`weapon` VARCHAR(50) NOT NULL DEFAULT 'Unkown' COMMENT 'Name of the weapon/vehicle or item used to kill',
	`distance` VARCHAR(10) NOT NULL DEFAULT '0' COMMENT 'Number of distance in meters between the killer and the victim',
	`respect` VARCHAR(10) NULL DEFAULT '0' COMMENT 'Number of respect the killer earned',
	`died_at` DATETIME NULL DEFAULT '0000-00-00 00:00:00' COMMENT 'Date and time the victim was killed',
	PRIMARY KEY (`id`)
)
COMMENT='Kill Feeds\r\nWith Victom, Killer, distance and gun'
COLLATE='utf8_general_ci'
ENGINE=InnoDB
AUTO_INCREMENT=8759
;


********
**DONE**
********
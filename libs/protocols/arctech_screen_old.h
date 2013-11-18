/*
	Copyright (C) 2013 CurlyMo

	This file is part of pilight.

    pilight is free software: you can redistribute it and/or modify it under the 
	terms of the GNU General Public License as published by the Free Software 
	Foundation, either version 3 of the License, or (at your option) any later 
	version.

    pilight is distributed in the hope that it will be useful, but WITHOUT ANY 
	WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR 
	A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with pilight. If not, see	<http://www.gnu.org/licenses/>
*/

#ifndef _PROTOCOL_ARCTECH_SCREEN_OLD_H_
#define _PROTOCOL_ARCTECH_SCREEN_OLD_H_

struct protocol_t *arctech_screen_old;

void arctechSrOldInit(void);
void arctechSrOldCreateMessage(int id, int unit, int state);
void arctechSrOldParseBinary(void);
int arctechSrOldCreateCode(JsonNode *code);
void arctechSrOldCreateUnit(int unit);
void arctechSrOldCreateId(int id);
void arctechSrOldCreateState(int state);
void arctechSrOldPrintHelp(void);

#endif
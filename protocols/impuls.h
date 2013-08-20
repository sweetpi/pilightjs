/*
	Copyright (C) 2013 CurlyMo & Bram1337

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

#ifndef _PROTOCOL_IMPULS_H_
#define _PROTOCOL_IMPULS_H_

struct protocol_t *impuls;

void impulsInit(void);
void impulsCreateMessage(int id, int unit, int state);
void impulsParseBinary(void);
int impulsCreateCode(JsonNode *code);
void impulsCreateLow(int s, int e);
void impulsCreateMed(int s, int e);
void impulsCreateHigh(int s, int e);
void impulsClearCode(void);
void impulsCreateUnit(int unit);
void impulsCreateId(int id);
void impulsCreateState(int state);
void impulsCreateFooter(void);
void impulsPrintHelp(void);

#endif

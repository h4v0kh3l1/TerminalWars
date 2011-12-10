//
//  ProgramHandler.h
//  TerminalWars
//
//  Created by Heli Wang on 12/10/11.
//  Copyright (c) 2011 Carnegie Mellon. All rights reserved.
//

#ifndef TerminalWars_ProgramHandler_h
#define TerminalWars_ProgramHandler_h

struct ProgramEntry {
	char* ProgramName;
	
}

typedef struct ProgramEntry* ProgramEntry;

struct ProgramLibrary {
	int size;
	ProgramEntry* library;
}

void execute();


#endif

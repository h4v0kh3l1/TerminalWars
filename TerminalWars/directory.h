//
//  directory.h
//  TerminalWars
//
//  Created by Heli Wang on 12/10/11.
//  Copyright (c) 2011 Carnegie Mellon. All rights reserved.
//

#ifndef TerminalWars_directory_h
#define TerminalWars_directory_h

struct folder {
	int size;
	char* name;
	void**;
};

void cd(char* target);
void ls();
void pwd();
void touch(char* target);
void rm(char* target);
#endif

//
//  main.c
//  TerminalWars
//
//  Created by Heli Wang on 12/10/11.
//  Copyright (c) 2011 Carnegie Mellon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main (int argc, const char * argv[])
{

	// insert code here...
	char* inputString = (char*) calloc(sizeof(char), 256);
	do {
		gets(inputString);
		printf("%s\n", inputString);
	} while (strcmp(inputString, "exit") != 0);
	printf("Program terminated.\n");
    return 0;
}


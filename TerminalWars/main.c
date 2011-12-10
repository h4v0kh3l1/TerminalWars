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

	
	char* inputString = (char*) calloc(sizeof(char), 256);
	while (true){
		printf(">");
		gets(inputString);
		
		// Needs to hash input string into int input, for easier comparison.
		if (strcmp(inputString, "exit") == 0) {
			printf("Do you want to take the blue pill? (y,n)\n");
			gets(inputString);
			if (strcmp(inputString, "y") == 0) {break;}
		}
		printf("%s\n", inputString);
	}
	printf("Program terminated.\n");
    return 0;
}


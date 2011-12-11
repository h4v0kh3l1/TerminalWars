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
	char buf[BUFSIZ];
	char *p;
	
	printf ("Please enter a line of text, max %lu characters\n", sizeof(buf));
	
	if (fgets(buf, sizeof(buf), stdin) != NULL)
		{
		printf ("Thank you, you entered >%s<\n", buf);
		
		/*
		 *  Now test for, and remove that newline character
		 */
		if ((p = strchr(buf, '\n')) != NULL)
			*p = '\0';
		
		printf ("And now it's >%s<\n", buf);
		}
	
	
	
	
	//save, load, new
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
		printf("Invalid input or command name. Type \"help\" for more info.\n");
	}
	printf("Program terminated.\n");
    return 0;
}


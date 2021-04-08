
#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>

extern char **environ;


/* function that read the line to add for getline*/
char **read_line(char *line);

/*function that exexute line in the read_line*/
void execute_line(char **tokens);





#endif /**_HOLBERTON_H_*/


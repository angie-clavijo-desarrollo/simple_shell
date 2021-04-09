
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

/*function that link_together command and director*/
char *_path(char *s);

/**/
char *_getenv(char *var);

/**/
char *directories(char *value, char *c);

/**/
int _strlen(char *s);

/**/
char *_strcat(char *s1, char *s2);

/**/
int _strcmp(char *s1, char *s2);


#endif /**_HOLBERTON_H_*/

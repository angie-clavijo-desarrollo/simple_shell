
#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#define _BUFF_SIZE_MAX_ 1064
#define _LIMITS_ " \t\n"


/*var exten with double point to enviroment*/
extern char **environ;


/* function that read the line to add for getline*/
char **read_line(char *line);

/*function that exexute line in the read_line*/
void execute_line(char **tokens, char *line);

/*function that link_together command and director*/
char *_path(char *s);

/*function that check var for print all env*/
char *_getenv(char *var);

/*function that check the  parameters of entry for check if is directory*/
char *directories(char *value, char *c);

/*function that verify the size of parameter s*/
int _strlen(char *s);

/*appends the string pointed to by s1  to the end s2*/
char *_strcat(char *s1, char *s2);

/*function is used to converts a given string to uppercase.*/
char *_strdup(char *src);

/*function that compare the string pointed s1 and s2*/
int _strcmp(char *s1, char *s2);

/*function that copy the string pointed*/
char *_strcpy(char *dest, char *src);

/*function that print enviroment*/
void printenv(void);

/*function that print to char*/
int _putchar(char c);

/*function that check char s that pointer line current*/
int pointline(char *s);

/*function that print to error if check your arguments how null*/
void _printerror(char *s, int i, char *line);

/*function thta print integer*/
void print_integer(int i);

/*function that print char*/
int _putchar2(char c);

/*function that compare the parameters of entry*/
void builtexit(char *line, char **tokens);

/*function that exit of program*/
void exit2(char *line);


#endif /**_HOLBERTON_H_*/


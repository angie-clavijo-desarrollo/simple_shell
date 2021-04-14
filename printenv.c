#include "holberton.h"
/**
* printenv - function that print the var environ
* Return: void
*/

void printenv(void)
{
	int i = 0;
	char **env = environ;

	while (env[i] != NULL)
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		_putchar(10);
		i++;
	}
}

/**
* pointline - Function that rectify if at the begin of the string is . or
* @s: string to verify
* Return: 0 incase success or -1 in case failure
*/
int pointline(char *s)
{
	int start = -1;

	if (s[0] == 46 || s[0] == 47)
		start = 0;

	return (start);
}

/**
* _printerror - Function that check if is a error and print message error
* @av: argument to verify
* @i: iterator to verify the length
* @line: argument of line
* Return: 0 incase success or -1 in case failure
*/
void _printerror(char *av, int i, char *line)
{
	char *message = ": ";
/*	char *message2 = ": not found";*/
	write(STDERR_FILENO, av, _strlen(av));
	write(STDERR_FILENO, message, _strlen(message));
	print_integer(i);
	write(STDERR_FILENO, message, _strlen(message));
	if (line != NULL)
		line = strtok(line, _LIMITS_);
	write(STDERR_FILENO, line, _strlen(line));
	perror(" ");
/*	write(STDERR_FILENO, message2, _strlen(message2));*/
/*	write(STDERR_FILENO, "\n", 1);*/
}

/**
* print_integer - Function that verify of length of integer for print
* @i: argument of iterator
* Return: 0 incase success or -1 in case failure
*/
void print_integer(int i)
{
	int d, length;
	unsigned int x;

	d = 1;
	length = 0;

	x = i;


	while (x / d > 9)
		d = d * 10;
	while (d != 0)
	{
		length = length + _putchar2('0' + x / d);
		x = x % d;
		d = d / 10;
	}
}

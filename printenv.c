#include "holberton.h"

/**
* printenv - function that print the var environ
*
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
* _putchar - function that print of the one caracter each time
* @c: the character to print
* Return: 1 in success
*/

int _putchar(char c)
{
		return (write(1, &c, 1));
}

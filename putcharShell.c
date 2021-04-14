#include "holberton.h"
/**
* _putchar - function that print of the one caracter each time
* @c: the character to print
* Return: 1 in success
*/
int _putchar(char c)
{
		return (write(1, &c, 1));
}

/**
* _putchar2 - Function that verify or function write for print of char
* @c: Arguments type of char
* Return: 0 incase success or -1 in case failure
*/
int _putchar2(char c)
{
		return (write(2, &c, 1));
}

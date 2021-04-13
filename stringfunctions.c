#include "holberton.h"

/**
 * _strlen - function that obtain the length of the string
 * @s: string to examine
 *
 * Return: integer correspond the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
 * _strdup - Function that duplicate string
 * @src: string to duplicate
 *
 * Return: string duplicate
 */

char *_strdup(char *src)
{
	int length = 0;
	int i = 0;
	char *dest;

	if (src == NULL)
		return (NULL);

	length = _strlen(src);

	if (length == 0)
		return (NULL);

	dest = malloc((length + 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * _strcmp - Function that compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 in the case of the two strings are same
 * >0 in case of the s2 is more long
 * <0 in case of the s1 is more long
 */

int _strcmp(char *s1, char *s2)
{
	int l1 = 0;
	int l2 = 0;
	int i = 0;

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	if (l1 == 0 || l2 == 0)
		return (-1);

	while (*(s1 + i) == *(s2 + i))
		i++;
	i--;

	if (l1 == i && l2 == i)
		return (0);

	return (-1);
}

/**
 * _strcat - function that concat two strings s1/s2
 * @s1: first string
 * @s2: second string
 *
 * Return: string concat in order s1/s2
 */

char *_strcat(char *s1, char *s2)
{
	int i;
	int j = 0;
	int l1 = _strlen(s1);
	int l2 = _strlen(s2);
	char *link_together = NULL;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	link_together = (char *)malloc((l1 + l2 + 2) * sizeof(char));

	if (link_together == NULL)
		return (NULL);

	for (i = 0; i <= l1 + l2; i++)
	{
		if (i < l1)
	{
		link_together[i] = s1[i];
	}
	else if (i == l1)
	{
		link_together[i] = 47;
	}
	else
	{
		link_together[i] = s2[j];
		j++;
	}
	}

	link_together[i] = '\0';

	return (link_together);
}

/**
* _strcpy - Function that copy two strings
* @dest: string to destination
* @src: string to copy
* Return: pointer to destination string dest
*/

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	if (dest == NULL || src == NULL)
		return (NULL);

	length = _strlen(src);

	if (length == 0)
		return (NULL);

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);
}


#include "holberton.h"

/**
*
*
*
*
*
*/

int _strlen(char *s)
{
	int i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
*
*
*
*
*/

int _strcmp(char *s1, char *s2)
{
	int l1 = 0;
	int l2 = 0;
	int i = 0;

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	while (*(s1 + i) == *(s2 + i))
		i++;
	i--;

	if (l1 == i && l2 == i)
		return (0);

	return (l1 - l2);
}

/**
*
*
*
*
*/

char *_strcat(char *s1, char *s2)
{
	int i;
	int j = 0;
	int l1 = _strlen(s1);
	int l2 = _strlen(s2);
	char *link_together = malloc((l1 + l2 + 2) * sizeof(char));

	for (i = 0; i <= l1 + l2; i++)
	{
		if (i < l1)
			link_together[i] = s1[i];
		else if (i == l1)
			link_together[i] = 47;
		else
		{
			link_together[i] = s2[j];
			j++;
		}
	}
	if (access(link_together, F_OK) == -1)
	{
		free(link_together);
		return (NULL);
	}

	return (link_together);
}





















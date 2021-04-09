#include "holberton.h"

/*
*
*
*
*
*/

char *_path(char *s)
{
	char *var = "PATH";
	char *value = NULL;
	char *link_together = NULL;
	value = _getenv(var);
	link_together = directories(value,s);
	if (link_together != NULL)
	{
		return (link_together);
	}
	return (NULL);
}

/**
*
*
*
*
*/

char *_getenv(char *var)
{
	char *token = NULL;
	char **env = environ;
	int i = 0;
	int compare = 1;
	while (env[i] != NULL)
	{
		token = strtok(env[i], "=");
		if (*token == *var)
		{
			compare = _strcmp(token, var);
			if (compare == 0)
			{
				token = strtok(NULL, "=");
				return (token);
			}
		}
		i++;
	}
	return (NULL);
}

/**
*
*
*
*
*/

char *directories(char *value, char *c)
{
	char *token;
	char *link_together = NULL;
	token = strtok(value, ":");
	while (token != NULL)
	{
		link_together = _strcat(token, c);
		if (link_together != NULL)
			return (link_together);
		token = strtok(NULL, ":");
	}
	return (NULL);
}


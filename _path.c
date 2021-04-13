#include "holberton.h"

/**
* _path - function that obtain the address to execute
* @s: char correspond to command to find
*
* Return: Correct address
*/

char *_path(char *s)
{
	char *var = "PATH";
	char *value = NULL;
	char *link_together = NULL;

	value = _getenv(var);

	if (value == NULL)
		return (NULL);

	link_together = directories(value, s);

	if (link_together != NULL)
	{
		free(value);
		return (link_together);
	}

	free(value);
	return (NULL);
}

/**
* _getenv - function that obtain directories of the PATH
* @var: correspond to VAR=PATH of the environ
*
* Return: VAR of the PATH in the environ
*/

char *_getenv(char *var)
{
	char *token = NULL;
	char **env = environ;
	int i = 0;
	char *tmp = NULL;
	int compare = 1;

	while (env[i] != NULL)
	{
		tmp = _strdup(env[i]);

		if (tmp == NULL)
			return (NULL);

		token = strtok(tmp, "=");

		if (*token == *var)
		{
			compare = _strcmp(token, var);
			if (compare == 0)
			{
				token = _strdup(strtok(NULL, "="));
				free(tmp);
				return (token);
			}
		}

		i++;

		free(tmp);
	}

	return (NULL);
}

/**
 * directories - function that obtain
 * the concatenate command and the director PATH
 * @value: Value of the PATH in the envrion
 * @c: Commando to concatenate
 *
 * Return: address concatenate
 */

char *directories(char *value, char *c)
{
	char *token;
	char *link_together = NULL;
	char *value2 = value;

	token = strtok(value2, ":");

	while (token != NULL)
	{
		link_together = _strcat(token, c);

		if (link_together == NULL)
			return (NULL);

		if (access(link_together, F_OK) == 0)
		{
			return (link_together);
		}

		token = strtok(NULL, ":");
		free(link_together);
	}

	return (NULL);
}

#include "holberton.h"
#define _BUFF_SIZE_MAX_ 1064
#define _LIMITS_ " \t\n"

/**
* **read_line - function that read the line before add
* @line: line to examine and before into
*
* Return: array of pointer for to execute
*/

char **read_line(char *line)
{
	char *token;
	char **tokens;
	int position = 0;

	if (line == NULL)
		return (NULL);

	tokens = malloc(_BUFF_SIZE_MAX_ * sizeof(char));

	if (tokens == NULL)
		return (NULL);

	token = strtok(line, _LIMITS_);

	while (token != NULL)
	{
		tokens[position] = token;
		position++;
		token = strtok(NULL, _LIMITS_);
	}
	tokens[position] = NULL;
	return (tokens);
}

/**
* execute_line - function that execute command
* @tokens: array of pointers for to execute
*
* Return: void
*/

void execute_line(char **tokens, char *line)
{
	pid_t pid = 0;

	pid = fork();
	if (pid == -1)
		perror("hsh");
	if (pid == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
		{
			perror(" ");
			free(line);
			free(tokens);
			exit(0);
		}
	}
	else
	{
		wait(NULL);
		kill(pid, SIGKILL);
	}
}


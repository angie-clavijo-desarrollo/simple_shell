#include "holberton.h"

/**
* main - principal function of into
*
* Return: integer
*/

int main(void)
{
	ssize_t linesize = 0;
	size_t len = 0;
	char *line = NULL;
	char **tokens = NULL;
	int int_mode;

	int_mode = isatty(STDIN_FILENO);

	while (1)
	{

		if (int_mode == 1)
		{
			write(STDOUT_FILENO, "$ ", 3);
		}
		linesize = getline(&line, &len, stdin);
		if (linesize == -1)
			return (0);
		tokens = read_line(line);
		if (tokens[0] != NULL)
		{
			if (_strcmp(tokens[0], "exit") == 0)
				exit(0);
			if (_strcmp(tokens[0], "env") == 0)
			{
				printenv();
			}
			if (access(tokens[0], F_OK) == 0)
				execute_line(tokens);
			else
			{
				tokens[0] = _path(tokens[0]);
				execute_line(tokens);
			}
		}
		free(tokens);
	}
	return (0);
}

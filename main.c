#include "holberton.h"

/**
* main - principal function of into
*
* Return: integer
*/

int main(int ac, char **av)
{
	ssize_t linesize = 0;
	size_t len = 0;
	char *line = NULL;
	char **tokens = NULL;
	int int_mode;
	int i = 0;

	int_mode = isatty(STDIN_FILENO);
	while (1)
	{
		if (int_mode == 1)
			write(STDOUT_FILENO, "$ ", 3);
		linesize = getline(&line, &len, stdin);
		i++;
		if (linesize == -1)
		{
			free(line);
			exit(98);
		}
		tokens = read_line(line);
		if (tokens[0] != NULL)
		{
			if (_strcmp(tokens[0], "exit") == 0)
			{	free(line);
				free(tokens);
				exit(0);
			}
			else if (_strcmp(tokens[0], "env") == 0)
				printenv();
			else if (access(tokens[0], F_OK) == 0 && pointline(tokens[0]) == 0)
				execute_line(tokens, line);
			else
			{
				tokens[0] = _path(tokens[0]);				
				if (tokens[0] != NULL)
				{
					execute_line(tokens, line);
					free(tokens[0]);
				}
				else if (ac == 1)
					_printerror(av[0], i, line);
			}
		}
		if (tokens != NULL)
			free(tokens);
	}
	return (0);
}

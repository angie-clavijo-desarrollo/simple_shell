#include "holberton.h"

/**
* main - principla function of into
*
* Return: integer
*/

int main(void)
{
	ssize_t linesize = 0;
	size_t len = 0;
	char *line = NULL;
	char **tokens = NULL;

	while (1)
	{
		write(1, "$ ", 2);
		linesize = getline(&line, &len, stdin);
		if (linesize == -1)
			return (0);
		tokens = read_line(line);
		if (tokens[0] != NULL)
			execute_line(tokens);
	}
	return (0);
}

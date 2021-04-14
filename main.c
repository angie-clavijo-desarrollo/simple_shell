#include "holberton.h"

/**
* sigintHandle - Does not terminate when Ctrl+C is pressed.
* @number: parameter.
*
* Return: Nothing.
*/
void sigintHandle(int number __attribute__((unused)))
{
	signal(SIGINT, sigintHandle);
	fflush(stdout);
}

/**
* main - principal function of into
* @ac: count of the parameters to inside
* @av: parametres writes in the terminal
*
* Return: integer
*/
int main(int ac, char **av)
{
	ssize_t linesize = 0;
	size_t len = 0;
	char *line = NULL, **tokens = NULL;
	int int_mode, i = 0;

	signal(SIGINT, sigintHandle);
	int_mode = isatty(STDIN_FILENO);
	while (1)
	{
		if (int_mode == 1)
			write(STDOUT_FILENO, "$ ", 3);
		linesize = getline(&line, &len, stdin);
		i++;
		if (linesize == -1)
			exit2(line);
		tokens = read_line(line);
		if (tokens[0] != NULL)
		{
			if (_strcmp(tokens[0], "exit") == 0)
				builtexit(line, tokens);
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

/**
* builtexit - built-in function that exit and free all leaks
* @line: buffer of the getline
* @tokens: buffer read_line
*
* Return: void
*/

void builtexit(char *line, char **tokens)
{
	if (line != NULL)
		free(line);
	if (tokens != NULL)
		free(tokens);
	exit(98);
}

/**
* exit2 - function that free memory in no-interative mode
* @line: buffer of the getline
*
* Return: void
*/

void exit2(char *line)
{
	if (line != NULL)
		free(line);
	exit(0);
}

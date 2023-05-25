#include "main.h"

/**
 * my_exit - exits the shell, also handles the exit status
 * @token: the token
 * @line: the line
 */

void my_exit(char **token, char *line)
{
	int status = 0;

	if (token[1] == NULL || (!_strcmp(token[1], "0")))
	{
		free_tok(token);
		free(line);
		exit(0);
	}
	status = _atoi(token[1]);
	if (status != 0)
	{
		free_tok(token);
		free(line);
		exit(status);
	}
	else
	{
		_puts("exit: illegal number: ");
		_puts(token[1]);
		_puts("\n");
	}
	free_tok(token);
	free(line);
	exit(EXIT_SUCCESS);
}

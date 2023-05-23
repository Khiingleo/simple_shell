#include "main.h"

/**
 * handle_exit - handles exit status
 * @argv: argument
 */

void handle_exit(char **argv)
{
	int status;

	if (argv[1] != NULL)
	{
		status = _atoi(argv[1]);
		exit(status);
	}
	else
		exit(EXIT_SUCCESS);
}

/**
 * is_exit - checks if a command is "exit"
 * @command: the command to check
 * Return: 1 if it is "exit"
 *         else return 0
 */

int is_exit(char *command)
{
	if (_strncmp("exit", command, 4) == 0 &&
			(command[4] == '\0' || command[4] == ' '))
	{
		return (1);
	}
	return (0);
}

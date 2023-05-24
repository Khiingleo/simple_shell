#include "main.h"

/**
 * built_in - gets the built in commands
 * @command: array of strings containing the commands
 * @line: the command
 * Return: 1 if true , else 0
 */

int built_in(char **command, char *line)
{
	struct _builtin inbuilt = {"env", "exit"};

	if (_strcmp(*command, inbuilt.env) == 0)
	{
		_env();
		return (1);
	}
	else if (_strcmp(*command, inbuilt.exit) == 0)
	{
		my_exit(command, line);
		return (1);
	}
	return (0);
}

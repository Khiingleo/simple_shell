#include "main.h"

/**
 * check - checks the command
 * @command: command to check
 * @buf: the buf
 * Return: 1 if command is built in
 */

int check(char **command, char *buf)
{
	if (built_in(command, buf))
		return (1);
	else if (**command == '/')
	{
		exec(command[0], command);
		return (1);
	}
	return (0);
}

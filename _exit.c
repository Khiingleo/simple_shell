#include "main.h"

/**
 * my_exit - handles exit
 * @command: command passed to it
 * @line: path
 *
 * Return: exits the shell
 */

void my_exit(char **command, char *line)
{
	free(line);
	_free(command);
	exit(0);
}

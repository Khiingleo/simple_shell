#include "main.h"

/**
 * exec - executes command given
 * @cp: command path
 * @command: the command
 *
 * Return: executed cmd
 */

void exec(char *cp, char **command)
{
	pid_t pid;
	int status;
	char **env = environ;

	pid = fork();
	if (pid == -1)
		perror(cp);
	if (pid == 0)
	{
		execve(cp, command, env);
		perror(cp);
		free(cp);
		_free(command);
		exit(98);
	}
	else
		wait(&status);
}

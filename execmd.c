#include "main.h"

/**
 * execmd_builtin - executes builtin commands
 * @token: the token
 * @line: the line
 * Return: 1 if it is a builtin command
 *        else return 0
 */

int execmd_builtin(char **token, char *line)
{
	int i = 0;
	char *command_list[] = { "exit", "cd", "help", "env", NULL };

	while (command_list[i] != NULL)
	{
		if (_strcmp(token[0], command_list[i]) == 0)
		{
			if (i == 0)
				my_exit(token, line);
			else if (i == 1)
			{
				chdir(token[1]);
				return (1);
			}
			else if (i == 2)
			{
				_help();
				return (1);
			}
			else if (i == 3)
			{
				_env();
				return (1);
			}
		}
		i++;
	}
	return (0);
}

/**
 * execmd - exexecutes command passed to it
 * @command: command to execute
 * @f: the flags or arguments to the command
 * Return: 0 on success
 */

int execmd(char *command, char **f)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == -1)
	{
		perror("fork failed");
		return (-1);
	}
	else if (pid == 0)
	{
		execve(command, f, environ);
	}
	else
	{

		do {
			waitpid(pid, &status, WUNTRACED);
		} while (WIFEXITED(status) == 0 && WIFSIGNALED(status) == 0);
	}
	return (0);
}

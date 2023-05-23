#include "main.h"

/**
 * execmd - executes the command passed to it
 * @av: argument vector
 * @argv: pointer to NULL terminated array of strings
 * containing the PATH and arguments
 * @env: environment variables
 */

void execmd(char **av, char **argv, char **env)
{
	pid_t pid;
	int status;

	if (access(argv[0], X_OK) == 0)
	{
		pid = fork();

		if (pid == -1)
		{
			free_argv(argv);
			free(argv);
			write(STDERR_FILENO, "fork failed", 11);
			exit(EXIT_FAILURE);
		}
		if (pid == 0)
		{
			if (execve(argv[0], argv, env) == -1)
			{
				perror("Error");
				exit(EXIT_FAILURE);
			}
		}
		else if (pid > 0)
			wait(&status);

	}
	else
	{
		write(STDERR_FILENO, av[0], _strlen(av[0]));
		write(STDERR_FILENO, ": 1: ", 5);
		write(STDERR_FILENO, argv[0], _strlen(argv[0]));
		write(STDERR_FILENO, ":", 1);
		write(STDERR_FILENO, " not found\n", 12);
	}
}

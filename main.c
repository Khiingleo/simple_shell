#include "main.h"

/**
 * main - main shell function
 * @ac: argument count
 * @av: argument vector
 * @env: environment variables
 * Return: 0 on success
 */

int main(int ac, char **av, char **env)
{
	char **argv;
	size_t n = 0;
	ssize_t nread;
	char *line = NULL;
	int count;
	char *nc, *path;
	(void)ac;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "#cisfun$ ", 9);
		nread = _getline(&line, &n, stdin);
		if (nread == -1)
		{
			free(line);
			exit(EXIT_FAILURE);
		}
		if (*line != '\n')
		{
			count = 0;
			argv = get_args(line, &count, nread);
			if (is_exit(argv[0]))
			{
				free_argv(argv);
				free(argv);
				handle_exit(argv);
				break;
			}
			path = get_path(env);
			nc = find_command(argv[0], path);
			if (nc != NULL)
				argv[0] = nc;
			execmd(av, argv, env);
			free_argv(argv);
			free(argv);
		}
	}
	free(line);
	return (0);
}

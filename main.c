#include "main.h"

/**
 * main - the main function for the simple shell
 * @ac: argument count
 * @av: argument vector
 * @env: environment variables
 * Return: 0 on sucess
 */

int main(int ac, char **av, char **env)
{
	char *line = NULL, *path_command = NULL, *path = NULL;
	size_t n = 0;
	ssize_t nread = 0;
	char **command = NULL, **p = NULL;
	(void)ac, (void)env;

	signal(SIGINT, check_sig);
	while (1)
	{
		_free(command);
		_free(p);
		free(path_command);
		prompt();
		nread = getline(&line, &n, stdin);
		if (nread < 0)
			break;
		data.line_count++;
		if (line[nread - 1] == '\n')
			line[nread - 1] = '\0';
		command = _strtokenize(line);
		if (command == NULL || *command == NULL || **command == '\0')
			continue;
		if (check(command, line))
			continue;
		path = get_path();
		p = _strtokenize(path);
		path_command = check_path(p, command[0]);
		if (!path_command)
			perror(av[0]);
		else
			exec(path_command, command);
	}
	if (nread < 0 && flag.is_interactive)
		write(STDERR_FILENO, "\n", 1);
	free(line);
	return (0);
}

#include "main.h"

/**
 * main - main simple shell function
 * Return: 0 on success
 */

int main(void)
{
	char *line = NULL, **tokens = NULL;
	int len = 0, flag = 0;
	size_t n = 0;
	ssize_t nread = 0;

	while (nread >= 0)
	{
		signal(SIGINT, handle_sig);
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "#cisfun$ ", 9);
		nread = getline(&line, &n, stdin);
		if (nread == -1)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			break;
		}
		len = input_num(line);
		if (line[0] != '\n' && len > 0)
		{
			tokens = _strtokenize(line, " \t", len);
			flag = execmd_builtin(tokens, line);
			if (!flag)
			{
				tokens[0] = locate(tokens[0]);
				if (tokens[0] && access(tokens[0], X_OK) == 0)
					execmd(tokens[0], tokens);
				else
					perror("./hsh");
			}
			free_tok(tokens);
		}
	}
	free(line);
	return (0);
}

#include "main.h"

/**
 * locate - checks if command is found
 * @command: the command name
 * Return: the path
 */

char *locate(char *command)
{
	char *path = NULL, **tokens = NULL;
	int i = 0, d_num = 0;
	struct stat sb;

	if (command)
	{
		if (stat(command, &sb) != 0 && command[0] != '/')
		{
			path = _getenv("PATH");
			d_num = delim_num(path, ":") + 1;
			tokens = _strtokenize(path, ":", d_num);
			while (tokens[i])
			{
				tokens[i] = add_path(tokens[i], command);
				if (stat(tokens[i], &sb) == 0)
				{
					free(command);
					command = _strdup(tokens[i]);
					free_env(path);
					free_tok(tokens);
					return (command);
				}
				i++;
			}
			free_env(path);
			free_tok(tokens);
		}
		if (stat(command, &sb) == 0)
			return (command);
	}
	free(command);
	return (NULL);
}

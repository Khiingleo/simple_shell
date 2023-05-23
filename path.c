#include "main.h"

/**
 * get_path - gets the PATH from the env
 * @env: environment variables
 * Return: returns the PATH
 */

char *get_path(char **env)
{
	int i;
	char *path = NULL;

	for (i = 0; env[i] != NULL; i++)
	{
		if (_strncmp(env[i], "PATH=", 5) == 0)
		{
			path = env[i] + 5;
			break;
		}
	}
	if (path == NULL)
	{
		perror("PATH variable not found\n");
		exit(EXIT_FAILURE);
	}
	return (path);
}

/**
 * find_command - uses the PATH to find commands
 * @command: command given
 * @path: the PATH
 * Return: pointer to the path
 */

char *find_command(char *command, char *path)
{
	char *dir;
	char *full_path;
	char *_path = _strdup(path);
	char *token = _strtok(_path, ":");

	while (token != NULL)
	{
		dir = token;
		token = _strtok(NULL, ":");
		full_path = malloc(_strlen(dir) + _strlen(command) + 2);
		if (full_path == NULL)
		{
			free(_path);
			perror("malloc failed");
			exit(EXIT_FAILURE);
		}
		_strcpy(full_path, dir);
		_strcat(full_path, "/");
		_strcat(full_path, command);

		if (access(full_path, F_OK) == 0)
		{
			free(_path);
			return (full_path);
		}
		free(full_path);
	}

	free(_path);
	return (NULL);
}

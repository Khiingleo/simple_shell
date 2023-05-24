#include "main.h"

char *add_path(char *path, char *command)
{
	char *buf;
	size_t i = 0, j = 0;

	if (command == 0)
		command = "";
	if (path == 0)
		path = "";
	buf = malloc(sizeof(char) * (_strlen(path) + _strlen(command) + 2));
	if (buf == NULL)
		return (NULL);
	while (path[i])
	{
		buf[i] = path[i];
		i++;
	}

	if (path[i - 1] != '/')
	{
		buf[i] = '/';
		i++;
	}
	while (command[j])
	{
		buf[i + j] = command[j];
		j++;
	}
	buf[i + j] = '\0';
	return (buf);
}

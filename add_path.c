#include "main.h"

/**
 * add_path - concatonates the path and prog
 * @path: the path
 * @prog: the programme
 * Return: the full path
 */

char *add_path(char *path, char *prog)
{
	int prog_len = 0, path_len = 0, n = 0;

	path_len = _strlen(path);
	prog_len = _strlen(prog);
	n = sizeof(char) * (path_len + prog_len + 2);
	path = _realloc(path, (path_len + 1), n);
	if (path == NULL)
		return (NULL);
	_strcat(path, "/");
	_strcat(path, prog);
	return (path);
}

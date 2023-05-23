#include "main.h"

/**
 * get_args - passes the argument into the argv using strtok
 * @line: the arguments
 * @ac: argument count
 * @nread: used to copy the value of line to another pointer
 * Return: the arguments
 */

char **get_args(char *line, int *ac, ssize_t nread)
{
	char *token, **argv;
	char *delim = " \n";
	int i = 0;
	char *line_copy;

	line_copy = malloc(sizeof(char) * nread);
	if (line_copy == NULL)
	{
		perror("copy failed");
		exit(EXIT_FAILURE);
	}
	_strcpy(line_copy, line);
	token = _strtok(line, delim);
	while (token != NULL)
	{
		(*ac)++;
		token = _strtok(NULL, delim);
	}
	argv = malloc(sizeof(char *) * ((*ac) + 1));
	if (argv == NULL)
	{
		perror("malloc failed");
		free(line_copy);
		exit(EXIT_FAILURE);
	}
	token = _strtok(line_copy, delim);
	while (token != NULL)
	{
		argv[i] = _strdup(token);
		token = _strtok(NULL, delim);
		i++;/*to continue incrementing argv while the loop continues*/
	}
	argv[i] = NULL;/*NULL terminated array of strings*/
	free(line_copy);/*free unused malloc'd string*/
	return (argv);
}

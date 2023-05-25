#include "main.h"

/**
 * handle_nl - removes the new line char from the string
 * @s: the string
 * Return: the string after the new line has been removed
 */

char *handle_nl(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\n')
			s[i] = '\0';
	}
	return (s);
}

/**
 * handle_sig - handles signal
 * @signal: signal to handle
 */

void handle_sig(int signal)
{
	if (signal == SIGINT)
		write(STDOUT_FILENO, "\n#cisfun$ ", 10);
}

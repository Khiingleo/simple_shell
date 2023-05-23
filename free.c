#include "main.h"

/**
 * free_argv - frees argv
 * @argv: argv
 */

void free_argv(char **argv)
{
	int i;

	if (argv == NULL)
		return;
	for (i = 0; argv[i] != NULL; i++)
		free(argv[i]);
}

#include "main.h"

void my_exit(char **command, char *line)
{
	free(line);
	_free(command);
	exit(0);
}

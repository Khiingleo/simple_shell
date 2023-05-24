#include "main.h"

int check(char **command, char *buf)
{
	if (built_in(command, buf))
		return (1);
	else if (**command == '/')
	{
		exec(command[0], command);
		return (1);
	}
	return (0);
}

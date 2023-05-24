#include "main.h"

void _env(void)
{
	int i = 0;
	char **env = environ;

	while (env[i])
	{
		write(STDOUT_FILENO, (const void *)env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}

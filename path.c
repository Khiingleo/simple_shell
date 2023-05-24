#include "main.h"

char *get_path(void)
{
	int i;
	char **env = environ, *path;

	while (*env)
	{
		if (_strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && i < 5)
			{
				path++;
				i++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}

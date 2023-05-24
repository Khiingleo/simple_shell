#include "main.h"


char *check_path(char **path, char *command)
{
	char *str;
	int i = 0;

	while (path[i])
	{
		str = add_path(path[i], command);
		if (access(str, F_OK | X_OK) == 0)
			return (str);
		free(str);
		i++;
	}
	return (NULL);
}

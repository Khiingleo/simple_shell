#include "main.h"

/**
 * _getenv - my custom getenv function to get the path
 * @n: environment variable to find
 * Return: the path i.e the content from the getenv
 */

char *_getenv(const char *n)
{
	int i = 0;
	char *var = NULL;

	while (environ[i])
	{
		if (_strncmp(n, environ[i], _strlen(n)) == 0)
		{
			var = _strdup(environ[i]);
			while (*var != '=')
				var++;
			++var;
			return (var);
		}
		i++;
	}
	return (NULL);
}

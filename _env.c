#include "main.h"

/**
 * _env - prints the environment
 */

void _env(void)
{
	int i = 0, j = 0;

	while (environ[i])
	{
		j = 0;
		while (environ[i][j])
		{
			_putchar(environ[i][j]);
			j++;
		}
		if (j != 0)
			_putchar('\n');
		i++;
	}
}

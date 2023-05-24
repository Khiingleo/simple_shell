#include "main.h"

/**
 * _free - frees buff
 * @buf: to be freed
 */

void _free(char **buf)
{
	int i = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[i])
	{
		free(buf[i]);
		i++;
	}
	free(buf);
}

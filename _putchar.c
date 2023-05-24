#include "main.h"

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

int _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

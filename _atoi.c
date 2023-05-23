#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @str: string to be converted
 * Return: the integer value of the converted string
 */

int _atoi(char *str)
{
	int i = 0;
	unsigned int num = 0;

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = num * 10 + (str[i] - '0');
		if (str[i] > '9' || str[i] < '0')
			return (-1);
		i++;
	}
	return (num);
}

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string to measure
 * Return: the length of str
 */

int _strlen(const char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}

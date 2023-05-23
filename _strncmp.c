#include "main.h"

/**
 * _strncmp - compares n number of bytes of two strings
 * @str1: first string
 * @str2: second string
 * @n: number of bytes to compare
 * Return: 0 if equal
 *         less than 0 if str1 compares less than str2
 *         greater than 0 if str1 compares greater than str2
 */

int _strncmp(char *str1, char *str2, size_t n)
{
	size_t i;
	/*to iterate through the string*/

	for (i = 0; i < n; i++)
	{
		if (str1[i] != str2[i])
			return ((str1[i] < str2[i]) ? -1 : 1);
		if (str1[i] == '\0')
			return (0);
	}
	return (0);
}

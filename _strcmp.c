#include "main.h"

/**
 * _strcmp - compares two strings
 * @str1: first string(left string)
 * @str2: second string(right string)
 * Return: if str2 is not null, it indicates that
 *         str1 is greater and returns the difference
 *         the two strings
 *         else both strings are equal and 0 is returned
 */

int _strcmp(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] == str2[i] && str1[i])
		i++;
	if (str2[i])
		return (str1[i] - str2[i]);
	else
		return (0);
}

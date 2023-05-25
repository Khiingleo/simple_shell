#include "main.h"

/**
 * _strchr - searches for the first occurence of c in a string
 * @str: string to search
 * @c: character to find
 * Return: the pointer to the char found
 */

char *_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return ((char *)str);
		}
		str++;
	}

	return (NULL);
}

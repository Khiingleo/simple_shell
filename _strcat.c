#include "main.h"

/**
 * _strcat - concatonates two strings
 * @dest: destination string
 * @src: source string
 * Return: returns the destination string
 */

char *_strcat(char *dest, char *src)
{
	char *destination = dest;

	while (*destination)
		destination++;

	while (*src)
		*destination++ = *src++;
	*destination = '\0';

	return (dest);
}

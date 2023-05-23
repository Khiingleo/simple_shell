#include "main.h"

/**
 * _strcpy - copies a string from the src to dest
 * @src: source to copy from
 * @dest: destination string
 * Return: the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	for (i = 0; src[i] != '\0'; i++)
		len++;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}

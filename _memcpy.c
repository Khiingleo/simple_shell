#include "main.h"

/**
 * _memcpy - copies n bytes from source to destination
 * @dest: the destination
 * @src: the source
 * @n: number of bytes
 * Return: the pointer to that destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

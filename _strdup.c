#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: the duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];
	duplicate[i] = '\0';

	return (duplicate);
}

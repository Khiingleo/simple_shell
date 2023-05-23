#include "main.h"

/**
 * _strtok - tokenizes a string
 * @str: string to tokenize
 * @delim: seperator for the string
 * Return: the tokenized string
 */

char *_strtok(char *str, const char *delim)
{
	static char *next_token;
	char *token_start, *token_end;

	if (str != NULL)
		next_token = str;
	if (next_token == NULL)
		return (NULL);
	token_start = next_token;

	while (*token_start != '\0' && _strchr(delim, *token_start) != NULL)
		token_start++;

	if (*token_start == '\0')
		return (NULL);

	token_end = token_start + 1;
	while (*token_end != '\0' && _strchr(delim, *token_end) == NULL)
		token_end++;

	next_token = (*token_end != '\0') ? token_end + 1 : NULL;

	*token_end = '\0';

	return (token_start);

}

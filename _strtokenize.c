#include "main.h"

/**
 * _strtokenize - tokenizes a string using my custom strtok
 * @str: string to tokenize
 * @delim: the delimiter
 * @n: number of tokens
 * Return: array of strings
 */

char **_strtokenize(char *str, char *delim, int n)
{
	char **tokens = NULL, *token = NULL, *str_cpy = NULL;
	int i = 0;

	tokens = malloc(sizeof(char *) * (n + 1));
	if (tokens == NULL)
	{
		perror("tokens malloc failed");
		return (NULL);
	}
	str = handle_nl(str);
	str_cpy = _strdup(str);
	token = _strtok(str_cpy, delim);

	while (token != NULL)
	{
		tokens[i] = _strdup(token);
		token = _strtok(NULL, delim);
		i++;
	}
	tokens[i] = NULL;
	free(str_cpy);
	return (tokens);
}

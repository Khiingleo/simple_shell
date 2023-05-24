#include "main.h"

char **_strtokenize(char *str)
{
	char *line_cpy, *bp, *token, **tokens;
	char *delim = " :\n\t\r";
	int size = 1;
	size_t i = 0, f = 0;

	line_cpy = _strdup(str);
	if (!line_cpy)
		return (NULL);
	bp = line_cpy;
	while (*bp)
	{
		if (_strchr(delim, *bp) != NULL && f == 0)
		{
			size++;
			f = 1;
		}
		else if (_strchr(delim, *bp) == NULL && f == 1)
			f = 0;
		bp++;
	}
	tokens = malloc(sizeof(char *) * (size + 1));
	token = _strtok(line_cpy, delim);
	while (token)
	{
		tokens[i] = _strdup(token);
		if (tokens[i] == NULL)
		{
			free(tokens);
			return (NULL);
		}
		token = _strtok(NULL, delim);
		i++;
	}
	tokens[i] = '\0';
	free(line_cpy);
	return (tokens);
}

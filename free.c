#include "main.h"

/**
 * free_env - frees the env
 * @env: environment variable to free
 */

void free_env(char *env)
{
	int i;

	for (i = 4; i >= 0; i--)
		env--;
	free(env);
}

/**
 * free_tok - frees tokens
 * @token: token to be freed
 */

void free_tok(char **token)
{
	char **temp;

	temp = token;
	if (token)
	{
		while (*token)
			free(*token++);
		free(temp);
	}
}

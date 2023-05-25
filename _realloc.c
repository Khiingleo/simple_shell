#include "main.h"

/**
 * _realloc - custom realloc function
 * @ptr: original memory block
 * @o_s: old size
 * @n_s: new size
 * Return: pointer to the memory block with new size
 */

void *_realloc(void *ptr, unsigned int o_s, unsigned int n_s)
{
	char *new_ptr;
	unsigned int i;

	if (n_s == o_s)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(n_s);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	else
	{
		if (n_s == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	new_ptr = malloc(n_s);
	if (new_ptr == NULL)
	{
		perror("malloc failed");
		return (NULL);
	}
	for (i = 0; i < o_s && i < n_s; i++)
		new_ptr[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}

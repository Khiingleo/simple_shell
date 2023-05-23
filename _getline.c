#include "main.h"

/**
 * _getline - personal getline function
 * @str: array of strings to pass the recieved string into
 * @n: number of bytes in str
 * @stream: where the line is gotten from
 * Return: number of bytes read
 */

ssize_t _getline(char **str, size_t *n, FILE *stream)
{
	ssize_t i = 0, size = 0, t = 0, t2 = 0, n_chars = 0;
	char buf[1024], *temp;

	while (t2 == 0 && (i = read(fileno(stream), buf, 1024 - 1)) > 0)
	{
		buf[i] = '\0';
		n_chars = 0;
		while (buf[n_chars] != '\0')
		{
			if (buf[n_chars] == '\n')
				t2 = 1;
			n_chars++;
		}

		if (t == 0)
		{
			i++;
			*str = malloc(sizeof(char) * i);
			_memcpy(*str, buf, i);
			size = i;
			t = 1;
		}
		else
		{
			size += i;
			temp = malloc(sizeof(char) * size);
			_memcpy(temp, *str, size - i);
			_memcpy(temp + size - i, buf, i);
			free(*str);
			*str = temp;
		}
	}
	if (i == -1)
		return (-1);
	if (t2 == 0 && size == 0)
		return (-1);
	*n = size;
	return (n_chars);
}

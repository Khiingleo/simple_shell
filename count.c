#include "main.h"

/**
 * input_num - number of inputs the user passed
 * @str: input container
 * Return: number of input
 */

int input_num(char *str)
{
	int i = 0, s = 0, c = 0;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			s = 0;
		else if (s == 0)
		{
			s = 1;
			c++;
		}
		i++;
	}
	return (c);
}

/**
 * delim_num - counts the delimiters in the string
 * @s: string containing the delimiter
 * @delim: the delimiters
 * Return: the num of delimiters
 */

int delim_num(char *s, char *delim)
{
	int i = 0, j = 0, c = 0;

	while (delim[i])
	{
		j = 0;
		while (s[j])
		{
			if (s[j] == delim[i])
				c++;
			j++;
		}
		i++;
	}
	return (c);
}

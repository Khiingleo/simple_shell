#include "main.h"

/**
 * _putchar - prints a char
 * @c: to print
 * Return: num of the chars printed
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

/**
 * _puts - prints a string
 * @str: string to print
 * Return: the number of strings printed
 */

int _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

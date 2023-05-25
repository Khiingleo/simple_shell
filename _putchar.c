#include "main.h"

/**
 * _putchar - prints a char
 * @c: char to print
 * Return: number of char(s) printed
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

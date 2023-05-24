#include "main.h"

/**
 * check_sig - checks the signal
 * @n: int n
 */

void check_sig(int n)
{
	(void)n;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "#Cisfun$ ", 9);
}

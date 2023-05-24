#include "main.h"

void check_sig(int n)
{
	(void)n;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "#Cisfun$ ", 9);
}

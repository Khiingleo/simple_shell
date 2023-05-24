#include "main.h"

void prompt(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flag.is_interactive = 1;
	if (flag.is_interactive)
		write(STDOUT_FILENO, "#Cisfun$ ", 9);
}

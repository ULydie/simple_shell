#include "shell.h"

/**
* propt_user - prints $ to let user know the program is
* ready to take their input
*
* Return:..
*/
void propt_user(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		fllgs.inter = 1;
	if (fllgs.inter)
		write(STDERR_FILENO, "$ ", 2);
}

#include "shell.h"

/**
 *handle_signls- it keeps track is inter mode
 *@s:..
 *Return:..
 */

void handle_signls(int s)
{
	(void)s;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}

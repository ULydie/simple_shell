#include "shell.h"

/**
* print_environ - prints the environment string to stdout
*
* Return:..
*/
void print_environ(void)
{
	int i = 0;
	char **envir = environ;

	while (envir[i])
	{
		write(STDOUT_FILENO, (const void *)envir[i], _strlen(envir[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}

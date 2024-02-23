#include "shell.h"

/**
* findPath - finds the paths from the global enviroment
* Return:..
*/
char *findPath(void)
{
	int q;
	char **envir = environ, *paths = NULL;

	while (*envir)
	{
		if (_strncmp(*envir, "PATH=", 5) == 0)
		{
			paths = *envir;
			while (*paths && q < 5)
			{
				paths++;
				q++;
			}
			return (paths);
		}
		env++;
	}
	return (NULL);
}

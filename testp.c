#include "shell.h"

/**
* test_path - checks whether paths is valid
* @paths:..
* @cmd:..
*
* Return:..
*/
char *test_path(char **paths, char *cmd)
{
	int t = 0;
	char *outpt;

	while (paths[t])
	{
		outpt = append_path(paths[t], cmd);
		if (access(outpt, F_OK | X_OK) == 0)
			return (outpt);
		free(outpt);
		t++;
	}
	return (NULL);
}

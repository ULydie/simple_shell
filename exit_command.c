#include "shell.h"

/**
* exit_cmd - handles the exit cmd
* @cmd:
* @lines:..
*
* Return:..
*/
void exit_cmd(char **cmd, char *lines)
{
	free(lines);
	freeBuffers(cmd);
	exit(0);
}

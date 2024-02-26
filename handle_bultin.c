#include "shell.h"

/**
* handle_builtins - handles execution of builtins functions
* @cmd:..
* @lines:..
*
* Return:..
*/
int handle_builtins(char **cmd, char *lines)
{
	struct builtins builtins = {"envir", "ext"};

	if (_strcmp(*cmd, builtins.envir) == 0)
	{
		print_environ();
		return (1);
	}
	else if (_strcmp(*cmd, builtins.ext) == 0)
	{
		exit_cmd(cmd, lines);
		return (1);
	}
	return (0);
}

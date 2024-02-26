#include "shell.h"
/**
 *checker- checks to see weather its a built in function
 *@cmd:..
 *@buff:..
 *Return:..
 */
int checker(char **cmd, char *buff)
{
	if (handle_builtins(cmd, buff))
		return (1);
	else if (**cmd == '/')
	{
		execution(cmd[0], cmd);
		return (1);
	}
	return (0);
}

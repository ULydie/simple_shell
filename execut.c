#include "shell.h"

/**
 * exec - executes commands entered by users
 *@cp: cmd
 *@cmd:..
 * Return:..
 */
void exec(char *cp, char **cmd)
{
	pid_t child_pid;
	int statu;
	char **envir = environ;

	child_pid = fork();
	if (child_pid < 0)
		perror(cp);
	if (child_pid == 0)
	{
		execve(cp, cmd, envir);
		perror(cp);
		free(cp);
		freeBuffers(cmd);
		exit(98);
	}
	else
		wait(&statu);
}

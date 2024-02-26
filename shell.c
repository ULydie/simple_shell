#include "shell.h"

/**
* main - carries out the read, execute then print outpt loop
* @ac:..
* @av:..
* @envp:..
*
* Return: 0
*/

int main(int ac, char **av, char *envp[])
{
	char *lines = NULL, *pathcommand = NULL, *paths = NULL;
	size_t bufsize = 0;
	ssize_t linesize = 0;
	char **cmd = NULL, **pathss = NULL;
	(void)envp, (void)av;
	if (ac < 1)
		return (-1);
	signal(SIGINT, handle_signls);
	while (1)
	{
		freeBuffers(cmd);
		freeBuffers(pathss);
		free(pathcommand);
		propt_user();
		linesize = getline(&lines, &bufsize, stdin);
		if (linesize < 0)
			break;
		inform.lnCount++;
		if (lines[linesize - 1] == '\n')
			lines[linesize - 1] = '\0';
		cmd = tokenizerrs(lines);
		if (cmd == NULL || *cmd == NULL || **cmd == '\0')
			continue;
		if (checker(cmd, lines))
			continue;
		paths = findPath();
		pathss = tokenizerrs(paths);
		pathcommand = test_path(pathss, cmd[0]);
		if (!pathcommand)
			perror(av[0]);
		else
			exec(pathcommand, cmd);
	}
	if (linesize < 0 && fllgs.inter)
		write(STDERR_FILENO, "\n", 1);
	free(lines);
	return (0);
}

#include "shell.h"

/**
* append_path - adds paths to cmd
* @paths:..
* @cmd:..
*
* Return:..
*/
char *append_path(char *paths, char *cmd)
{
	char *buff;
	size_t b = 0, c = 0;

	if (cmd == 0)
		cmd = "";

	if (paths == 0)
		paths = "";

	buff = malloc(sizeof(char) * (_strlen(paths) + _strlen(cmd) + 2));
	if (!buff)
		return (NULL);

	while (paths[b])
	{
		buff[b] = paths[b];
		b++;
	}

	if (paths[b - 1] != '/')
	{
		buff[b] = '/';
		b++;
	}
	while (cmd[c])
	{
		buff[b + c] = cmd[c];
		c++;
	}
	buff[b + c] = '\0';
	return (buff);
}

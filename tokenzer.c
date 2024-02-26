#include "shell.h"

/**
* tokenizerrs - creates tokens from given input
* @lines:..
*
* Return:..
*/
char **tokenizerrs(char *lines)
{
	char *buff = NULL, *buffp = NULL, *tkn = NULL, *delim = " :\t\r\n";
	char **tokens = NULL;
	int tokensize = 1;
	size_t index = 0, flag = 0;

	buff = _strdup(lines);
	if (!buff)
		return (NULL);
	buffp = buff;

	while (*buffp)
	{
		if (_strchr(delim, *buffp) != NULL && flag == 0)
		{
			tokensize++;
			flag = 1;
		}
		else if (_strchr(delim, *buffp) == NULL && flag == 1)
			flag = 0;
		buffp++;
	}
	tokens = malloc(sizeof(char *) * (tokensize + 1));
	tkn = strtok(buff, delim);
	while (tkn)
	{
		tokens[index] = _strdup(tkn);
		if (tokens[index] == NULL)
		{
			free(tokens);
			return (NULL);
		}
		tkn = strtok(NULL, delim);
		index++;
	}
	tokens[index] = '\0';
	free(buff);
	return (tokens);
}

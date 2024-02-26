#include "shell.h"

/**
* freeBuffers - frees buffers
* @buff:..
*
* Return:..
*/
void freeBuffers(char **buff)
{
	int f = 0;

	if (!buff || buff == NULL)
		return;
	while (buff[f])
	{
		free(buff[f]);
		f++;
	}
	free(buff);
}

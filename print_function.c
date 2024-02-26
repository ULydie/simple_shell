#include "shell.h"

/**
* _putchar - writes the character c to stdout
* @c: The char to print
*
* Return:..
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_s - prints a string
* @str: str to print
*
* Return:..
*/
int print_s(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}

	return (x);
}

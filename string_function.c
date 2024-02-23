#include "shell.h"

/**
* _strcmp - compares two strings
* @str1:..
* @str2:..
*
* Return:..
*/
int _strcmp(char *str1, char *str2)
{
	int a = 0, outpt;

	while (*(str1 + a) == *(str2 + a) && *(str1 + a) != '\0')
		a++;

	outpt = (*(str1 + a) - *(str2 + a));

	return (outpt);
}

/**
* _strlen - returns the length of a string
* @str:
*
* Return:..
*/
int _strlen(char *str)
{
	int cnt = 0;

	while (*str != '\0')
	{
		cnt++;
		str++;
	}
	return (cnt);
}

/**
* _strncmp - compares two strings up to n bytes
* @str1:..
* @str2:..
* @n:..
*
* Return:..
*/
int _strncmp(char *str1, char *str2, int n)
{
	int a;

	for (a = 0; str1[a] && str2[a] && a < n; a++)
	{
		if (str1[a] != str2[a])
			return (str1[a] - str2[a]);
	}
	return (0);
}

/**
* _strdup - dupicates string
* @str:..
*
* Return:..
*/
char *_strdup(char *str)
{
	char *ptr;
	int a, leng;

	if (str == NULL)
		return (NULL);

	leng = _strlen(str);

	ptr = malloc(sizeof(char) * (leng + 1));
	if (!ptr)
		return (NULL);
	for (a = 0; *str != '\0'; str++, a++)
		ptr[a] = str[0];

	ptr[a++] = '\0';
	return (ptr);
}

/**
* _strchr - locates a character in a string
* @str:..
* @c:..
*
* Return:..
* or NULL if character not found
*/
char *_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (!c)
		return (str);
	return (NULL);
}

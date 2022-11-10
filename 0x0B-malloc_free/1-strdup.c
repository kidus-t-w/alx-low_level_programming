#include "main.h"

/**
 * _strdup - duplicates a sting pointed by str
 * @str: string to be duplicated
 *
 * Return: On success, the function returns a pointer
 * to the duplicated string. On error, it returns NULL.
 */
char *_strdup(char *str)
{
	char *ch;
	int x, y;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}
	x = x + 1;
	ch = malloc(sizeof(char) * x);
	if (ch == NULL)
		return (NULL);
	for (y = 0; y <= x; y++)
	{
		ch[y] = str[y];
	}
	return (ch);
}

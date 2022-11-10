#include "main.h"

/**
 * _strdup - Points to a newly allcoated space in memory
 * @str: strint to be 
 *
 * Return: On success, the function returns string. On
 * Error NULL.
 */
char *_strdup(char *str)
{
	char *ch;
	int x, y;
	
	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}
	ch = malloc(sizeof(char) * x);
	if (str == NULL)
	       return (NULL);
	for (y = 0; y <= x; y++)
	{
		ch[y] = str[y];
	}
	return (ch);
}

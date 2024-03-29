#include "main.h"

/**
 * _strdup - creats a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: return a duplicate of the string
*/

char *_strdup(char *str)
{
	char *dup;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	len = len + 1;
	dup = malloc(len * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}

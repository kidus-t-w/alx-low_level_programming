#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatnates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns a newly allocated space in momory
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int len, len2, i, limit;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len = 0; s1[len] != '\0'; len++)
	{
		;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	str = malloc(sizeof(char) * (len + len2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; i < len; i++)
	{
		str[i] = s1[i];
	}
	for (limit = 0; limit <= len2; limit++, i++)
	{
		str[i] = s2[limit];
	}
	return (str);
}

#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: number of bytes
 * Return: returns a copy of the string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len]  != '\0'; i++)
	{
		;
	}
	i = 0;
	while (i < n && *src)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

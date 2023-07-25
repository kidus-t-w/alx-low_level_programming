#include "main.h"


/**
 * _strcat- concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to string
 * Return: returns a pointer to the resulting string dest
**/

char *_strcat(char *dest, char *src)
{
	int len1, len2, x, y, n;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; src[0] != '\0'; len2++)
	{
		;
	}
	x = len1 = len2;
	for (y = len1; y < x; y++)
	{
		n = 0;
		dest[y] = src[n];
	}
	return (dest);
}

#include "main.h"

/**
 * _strcpy- copies the string pointed to by src, including null byte
 * @dest: pointer to be copied
 * @src: pointer to copy
 * Return: return the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int x, y;

	for (x = 0; src[x] != '\0'; x++)
	{
		;
	}
	x = x + 1;
	for (y = 0; y <= x; y++)
	{
		dest[y] = src[y];
	}
	return (*dest);
}

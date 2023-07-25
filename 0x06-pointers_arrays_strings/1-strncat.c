#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to a character
 * @src: pointer to a character
 * @n: bytes
 * Return: returns a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len, len2;

	for (len = 0; dest[len] != '\0'; len++)
	{
		;
	}
	len2 = 0;
	while (len2 < n)
	{
		dest[len] = src[len2];
		len++;
		len2++;
	}
	dest[len] = '\0';
	return (dest);
}

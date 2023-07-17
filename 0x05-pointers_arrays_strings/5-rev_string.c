#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to a string.
 * Return: returns reversed string.
*/

void rev_string(char *s)
{
	char *rev;
	int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	x = x - 1;
	int n = 0;
	for (y = x; y >= 0; y--)
	{
		rev[n] = s[y];
	}
	rev[n+1] = '\0';
	return (*rev);
}

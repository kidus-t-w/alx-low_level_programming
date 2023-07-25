#include "main.h"

/**
 * puts_half- prints half of a string
 * @str: pointer to a character
 * Return: return half of a string
*/

void puts_half(char *str)
{
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}
	y = x / 2;
	if (x % 2 != 0)
	{
		y = (x - 1) / 2;
	}
	while (y < x)
	{
		putchar(str[y]);
		y++;
	}
	putchar('\n')
}

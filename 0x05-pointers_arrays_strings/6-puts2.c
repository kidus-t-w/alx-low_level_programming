#include "main.h"

/**
 * puts2 - function
 * @*str: string
 * Return: Always 0
 */
void puts2(char *str)
{
	int x;
	int i;

	x = 0;
	i = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	while (i <= x)
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}

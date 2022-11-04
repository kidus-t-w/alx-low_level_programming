#include "main.h"

/**
 * puts2 - function
 * @*str: string
 * @str: string
 * Return: Always 0
 */
void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if(x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}

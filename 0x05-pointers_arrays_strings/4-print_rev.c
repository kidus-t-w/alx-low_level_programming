#include "main.h"

/**
 * print_rev - mainfunction
 * @s: pointer to be used
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		;
	}
	for (; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _print_rev_recursion - prints a a string in reverse
 * @s: pointer to a string
*/

void _print_rev_recursion(char *s)
{
	int x;

	x = 0;
	x++;
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[x - 1]);
}

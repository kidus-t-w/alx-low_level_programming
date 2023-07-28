#include "main.h"

/**
 * _puts_recursion- prints a string, followed by a new line
 * @s: pointer to a character
*/

void _puts_recursion(char *s)
{
	int x;

	x = 0;
	if (s[x] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[x]);
	_puts_recursion(s + 1);
}

#include "main.h"

/**
 * _puts - main function
 * @str: string to be entered
 * Return:always 0.
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_line - prints line.
 * @n: number of lines.
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}

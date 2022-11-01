#include "main.h"

/**
 * print_diagonal - prints diagonal.
 * @n: number of diagonals .
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x, space;

	for (x = 1; x <= n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		for (space = 1; space <= x ; space++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

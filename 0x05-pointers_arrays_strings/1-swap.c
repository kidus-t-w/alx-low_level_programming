#include "main.h"

/**
 * swap_int - function name
 * @a: first pinter
 * @b: second pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

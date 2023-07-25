#include "main.h"

/**
 * print_array- prints n elements of an array of integers
 * @a: pointer to an integer
 * @n: number of elements of the array ot be printed
*/

void print_array(int *a, int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		putchar(a[x],","," ");
		x++;
	}
}

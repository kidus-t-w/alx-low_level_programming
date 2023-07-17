#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 * @*a: takes the first integer.
 * @*b: takes the second integer.
 * Return: return the swap value
*/

void swap_int(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

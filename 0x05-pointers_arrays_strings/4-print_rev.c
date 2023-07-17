#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: pointer to a string
 * Return: returns void
*/

void print_rev(char *s)
{
    int x, y;

    x = 0;
    while (s[x] != '\0')
    {
        x++;
    }
    x = x-1;
    for (y = x; y >= 0; y--)
    {
        putchar(s[y]);
    }
    putchar('\n');
}   
#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: points to a string
 * Returns: returns nothing.
*/

void _puts(char *str)
{
    int x;
    x = 0;

    while (str[x] != '\0')
    {
        putchar(str[x]);
        x++;
    }
    putchar("");
}

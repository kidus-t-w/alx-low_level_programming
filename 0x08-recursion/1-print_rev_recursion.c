#include "main.h"

/**
 * _print_rev_recurssion- prints a a string in reverse
 * @s: pointer to a string
*/

void _print_rev_recursion(char *s)
{
    int x;

    x = 0;
    if (s[x] == '\0')
    {
        return;
    }
    _putchar(s[x]);
    _print_rev_recursion(s);
}

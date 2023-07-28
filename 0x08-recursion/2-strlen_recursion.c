#include "main.h"

/**
 * _strlen_recursion- returns the length of a string
 * @s: pointer to a string
 * Return: returns the length ofa string
*/

int _strlen_recursion(char *s)
{
    int len;
    if (*s == '\0')
    {
        return (len);
    }
    len = 0;
    len++;
    _strlen_recursion(s+1);
}

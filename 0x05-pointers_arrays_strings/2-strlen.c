#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Points to a string.
 * Return: return the length of the stirng.
*/

int _strlen(char *s)
{
int x = 0;

while (s[x] != '\0')
{
    x++;
}

return (x);
}

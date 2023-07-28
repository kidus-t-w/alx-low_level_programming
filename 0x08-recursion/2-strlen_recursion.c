#include "main.h"

/**
 * _strlen_recursion- returns the length of a string
 * @s: pointer to a string
 * Return: returns the length ofa string
*/

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

#include "main.h"

/**
 * _isdigit - check for digit.
 * @c:  number to be checked.
 * Return: Always 1
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (0);
	} else
		return (1);
}

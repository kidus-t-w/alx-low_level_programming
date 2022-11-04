#include "main.h"

/**
 *puts_half- print half
 *@str:checked
 *Return:nothing
 */
void puts_half(char *str)
{

	int i, x;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (x = 0; x >= i / 2; x++)
	{
		_putchar(str + x);
	}
}

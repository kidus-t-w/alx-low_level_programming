#include "main.h"

/**
 * create_array - createsan array of chars, and initilizes it with a char
 * @size: length of the array
 * @c: character to be initilized
 * Return: returns teturns a pointer to the array, or NUll if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(c));
	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

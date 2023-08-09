#include "main.h"

/**
 * 
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * (size + 1));
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i ++)
	{
		array[i] = c;
	}
	array[size] = '\0';
	free(array);
	return (array);
}
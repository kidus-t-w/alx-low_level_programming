#include "main.h"

/**
 * 
*/

char *create_array(void)
{
    unsigned int size;
    char c;
	char *array;
	unsigned int i;

    size = 98;
    c = 'H';
	array = malloc(sizeof(char) * size);
	if (array == NULL)
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
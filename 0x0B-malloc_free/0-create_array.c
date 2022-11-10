#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: the size of the new array
 * @c: character the array will be initilized with
 *
 * Return: On success, it returns the new character
 * array. On error, it returns NULL
 */
char *create_array(unsigned int size, char c)
{
	char *new;
	int i;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(char) * size);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < (int)size; i++)
		new[i] = c;
	return (new);
}

#include "search_algos.h"

/**
 * linear_search - Implements Linear search algorithm to find a specified value
 * within an array of integers.
 *
 * @array: The array to search through.
 * @size: The number of elements in the array.
 * @value: The target value to search for.
 * Return: Always EXIT_SUCCESS upon successful search.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

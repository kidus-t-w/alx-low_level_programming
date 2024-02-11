#include "search_algos.h"

/**
 * recursive_search - Implements the Binary
 * a specific value in an integer array.
 *
 * @array: The array to be searched.
 * @size: The total number of elements in the array.
 * @value: The value to locate within the array.
 * Return: The index of the value if found.
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - Initiates a Binary search to determine the
 * index of a specified value within an array.
 *
 * @array: The array containing the elements to search through.
 * @size: The quantity of elements in the array.
 * @value: The target value for which to search.
 * Return: The index of the target value if it is found.
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

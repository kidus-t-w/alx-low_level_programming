#include "search_algos.h"

/**
 * rec_search - Utilizes the Binary search algorithm to recursively find a
 * specified value within an integer array. This method divides the search
 * interval in half with each iteration to efficiently locate the value.
 *
 * @array: The array being searched.
 * @size: The total number of elements in the array.
 * @value: The target value to search for.
 * Return: The index of the target value if found, or an indication of absence.
 */
int rec_search(int *array, size_t size, int value)
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
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Invokes rec_search to locate and return the index of a
 * specified value within an array, leveraging the Binary search algorithm.
 * This function aims to refine the search process for increased efficiency.
 *
 * @array: The array to be searched through.
 * @size: The number of elements contained in the array.
 * @value: The target value to find within the array.
 * Return: The index where the specified value is found, or a marker if the value is not present.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

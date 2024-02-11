#include "search_algos.h"

/**
 * recursive_search - Employs a recursive approach to Binary search for finding
 * a specific value within an array of integers. Binary search divides the search
 * interval in half each time, making the search process efficient for sorted arrays.
 *
 * @array: The array in which to search for the value.
 * @size: The total count of elements in the array.
 * @value: The target value to locate.
 * Return: The index at which the target value is found, or an indication
 * that the value is not present in the array.
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
 * binary_search - Implements a Binary search algorithm to find the index of
 * a specified value within a provided array. This function iteratively
 * narrows down the search range by comparing the target value to the midpoint
 * of the current search interval, efficiently locating the value in a sorted array.
 *
 * @array: The array to be searched.
 * @size: The number of elements in the array.
 * @value: The specific value being searched for.
 * Return: The index where the specified value is located, or an indicator
 * that the value is not found within the array.
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

/**
 * exponential_search - Implements the Exponential search algorithm to efficiently
 * locate a specified value within an array of integers. This method involves first
 * determining the range where the value might be by exponentially increasing the
 * index and then applying a binary search within that range for precise location.
 *
 * @array: The array within which the search is conducted.
 * @size: The total count of elements in the array.
 * @value: The target value to be found.
 * Return: The index at which the target value is located, if it exists within the array.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t index, next;
	int result;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	index = 1;

	while (array[index] < value && index < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
		index *= 2;
	}

	next = (index >= size) ? (size - 1) : index;

	index /= 2;

	printf("Value found between indexes [%d] and [%d]\n", (int)index, (int)next);

	result = binary_search(array + index, (next + 1) - index, value);

	if (result >= 0)
		result += index;

	return (result);
}

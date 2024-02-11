#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Implements the Jump search algorithm to find a specific value
 * within a list of integers. By jumping ahead by fixed steps and performing a
 * linear search within the identified interval, this method optimizes search
 * efficiency compared to a standard linear search.
 *
 * @list: The list in which to search for the value.
 * @size: The total number of elements in the list.
 * @value: The target value to locate.
 * Return: The index of the target value if found, otherwise an indication of its absence.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, k, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	index = 0;
	k = 0;

	do {
		prev = list;
		k++;
		index = k * m;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}

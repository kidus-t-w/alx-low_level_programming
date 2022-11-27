#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head node
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

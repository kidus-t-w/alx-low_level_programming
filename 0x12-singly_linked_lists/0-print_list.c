#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 * @h: header node of the linked list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d} %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}

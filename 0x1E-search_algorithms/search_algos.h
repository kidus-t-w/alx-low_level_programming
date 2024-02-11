#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Defines a node in a singly linked list.
 *
 * @n: The integer value stored in the node.
 * @index: The position of the node within the list.
 * @next: A pointer to the subsequent node in the list.
 *
 * Description: This structure represents a node within a singly linked list
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Defines a node in a singly linked list with an added express lane.
 *
 * @n: The integer value held by the node.
 * @index: The node's position within the list.
 * @next: A pointer to the next standard node in the list.
 * @express: A pointer to a node further ahead in the list
 *
 * Description: This structure represents a node within a singly linked list enhanced
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif

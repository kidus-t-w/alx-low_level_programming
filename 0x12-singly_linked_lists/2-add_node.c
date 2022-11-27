#include "lists.h"

/**
 * add_node- adds a new node at the beginning of a list
 * @head: head node
 * @str: string 
 * Return: when successful address of the new element , NULL
 * if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	struct lis

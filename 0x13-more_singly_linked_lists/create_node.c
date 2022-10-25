#include "lists.h"

/**
 * list_node_create - Function that creates a new
 * listint_t node
 * @n: value to initialise with
 * Return: Address to new listint_t node
 */

listint_t *list_node_create(const int n)
{
	listint_t *ptr, *new_ptr;
	if ((ptr = (listint_t *)malloc(sizeof(listint_t))) == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->n = n;
	new_ptr = ptr;
	free(ptr);
	return (new_ptr);
}


	for (ptr = head; *ptr != NULL;)
		ptr = &(*ptr)->next;
	item->next = *ptr;
	*ptr = item;
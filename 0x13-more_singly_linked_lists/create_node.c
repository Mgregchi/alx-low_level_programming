#include "lists.h"

/**
 * list_node_create - Function that creates a new
 * listint_t node
 * @n: value to initialise with
 * Return: Address to new listint_t node
 */

listint_t *list_node_create(const int n)
{
	listint_t *ptr;
	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->n = n;
	free(ptr);
	return (ptr);
}

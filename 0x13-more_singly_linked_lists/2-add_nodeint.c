#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list.
 * @head: the elements of a listint_t list head ele
 * @n: value of the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = create_node(n);
	ptr->next = &head;
	return (ptr);
}

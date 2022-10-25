#include "lists.h"

/**
* add_nodeint - function that adds a new node
* at the beginning of a listint_t list.
* @head: Double pointer to linked list
* @n: value of the new node
*
* Description: adds a new node at the beginning of linked list
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;

ptr = (listint_t *)malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = *head;
*head = ptr;

return (ptr);
}

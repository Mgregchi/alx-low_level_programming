#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list.
*
* @head: Pointer to linked list
* Description: The function sets the head to NULL.
* Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *traverse;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		traverse = (*head)->next;
		free(*head);
		*head = traverse;
	}
	*head = NULL;
}

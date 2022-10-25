#include "lists.h"

/**
* add_nodeint_end - function that adds a new node
* at the end of a listint_t list.
* @head: Double pointer to linked list
* @n: value of the new node
*
* Description: adds a new node at the end of linked list
* Return: the address of the new element, or NULL if it failed
*/


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new_ptr;

	new_ptr = (listint_t *)malloc(sizeof(listint_t));

	if (new_ptr == NULL)
		return (NULL);
	new_ptr->n = n;
	new_ptr->next = NULL;

	if (*head == NULL)
	{
		*head = new_ptr;
	}
	else
	{
		/**
		* Find the last node by determining
		* If it's next node is NULL
		*/
		for (ptr = *head; ptr->next != NULL;)
			ptr = ptr->next;
		/**
		* Link to the last node
		*/
		ptr->next = new_ptr;
	}

	return (ptr);
}

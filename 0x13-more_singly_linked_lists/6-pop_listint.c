#include "lists.h"

/**
* pop_listint - function that deletes the head node of
* a listint_t linked list, and returns the head node’s data (n).
*
* @head: Double pointer to a linked list
* Description: unction that deletes the head node of a listint_t
* linked list, and returns the head node’s data (n).
* Return: Data n or 0
*/

int pop_listint(listint_t **head)
{
	int head_node_data;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		ptr = *head;
		head_node_data = ptr->n;
		*head = ptr->next;
		free(ptr);
	}
	return (head_node_data);
}

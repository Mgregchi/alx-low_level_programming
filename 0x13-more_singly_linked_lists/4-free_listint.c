#include "lists.h"

/**
* free_listint - function that frees a listint_t list.
*
* @head: Pointer to linked list
* Description: A function that frees a listint_t list.
* Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;

}

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
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	{

	}
	else
	{
		while (*head != NULL)
		{
			tmp = *head;
			/**
			 * I don't know if this is the best way
			 * Will leave this way for now.
			 */
			*head = tmp->next;
			free(tmp);
		}
		*head = NULL;
	}

}

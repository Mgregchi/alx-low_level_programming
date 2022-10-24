#include "lists.h"

/**
* listint_len - function that returns the number of
* elements in a linked listint_t list.
* @h: the elements of a listint_t list
* Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)

{
if (&h->n == NULL)
return (0);

nodes++;
h = h->next;
}

return (nodes);
}



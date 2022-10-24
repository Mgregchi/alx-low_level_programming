#include "lists.h"

/**
* print_listint - function that prints all the elements of a listint_t list.
* @h: the elements of a listint_t list
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)

{
if (&h->n == NULL)
printf("[0] (nil)\n");
else
printf("%d\n", h->n);
nodes++;
h = h->next;
}

return (nodes);
}


#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - a function that allocates memory using malloc.
* @b: amount of memoery to allocate
* Return: either void or pointer
*/

void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}


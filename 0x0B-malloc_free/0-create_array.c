#include <stdlib.h>
#include "main.h"

/**
* create_array - function that creates an array of chars,
* and initializes it with a specific char.
*
* @size: size of array
* @c: char to initialize array with
* Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
if (size == 0)
return (NULL);

str = malloc(sizeof(char) * size);
if (str == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
str[i] = c;
}

/** free(str);*/
return (str);
}



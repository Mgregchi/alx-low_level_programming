#include <stdlib.h>
#include "main.h"


/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
int *ptr;
int array;

if (min > max)
{
return (NULL);
}

ptr = malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
{
return (NULL);
}
array = 0;
while (min <= max)
{
ptr[array] = min;
min++;
array++;
}
return (ptr);
}

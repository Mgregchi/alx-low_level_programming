#include <stdlib.h>
#include "main.h"

/**
* _strdup - function that returns a pointer
* to a newly allocated space in memory, which contains
* a copy of the string given as a parameter.
*
* @str: char to initialize array with
* Return: a pointer to the duplicated string,
* or NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
char *dpstr;
int count;
unsigned int i;

if (str == NULL)
return (NULL);

for (count = 0; str[count] != '\0'; count++)
;
dpstr = malloc(sizeof(char) * count + 1);
if (dpstr == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
dpstr[i] = str[i];
}
dpstr[i + 1] = '\0';
return (dpstr);
}


#include <stdlib.h>
#include "main.h"

/**
* _strlen - function to get length of a given string
* @str: string to get length
* Return: (int)
*/

int _strlen(char *str)
{
int len = 0;
while (str[len] != '\0' && str[len] != ' ')
{
len++;
}
return (len);
}

/**
* str_concat - function that returns a pointer
* to a newly allocated space in memory, which contains
* a copy of the string given as a parameter.
*
* @s1: char to concatenate
* @s2: char to concatenate
* Return: a pointer to the duplicated string,
* or NULL if insufficient memory was available
*/

char *str_concat(char *s1, char *s2)
{
char *newstr;
int a = 0, b = 0, size;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

size = _strlen(s1) + _strlen(s2) + 2;
newstr = malloc(sizeof(char) * size);
if (newstr == NULL)
return (NULL);
while (s1[a] != '\0' && s1[a] != ' ')
{
newstr[a] = s1[a];

a++;
};
newstr[a] = ' ';

while (s2[b] != '\0' && s2[b] != ' ')
{
newstr[a + 1 + b] = s2[b];

b++;
};

newstr[16] = '\0';

return (newstr);
}

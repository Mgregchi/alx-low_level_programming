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

if (str == NULL)
return len;
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
int lens1, lens2, k = 0, j = 0, size;
lens1 = _strlen(s1);
lens2 = _strlen(s2);
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size = lens1 + lens2;


if (lens1 > 0 && lens2 > 0)
size += 2;
else if (lens1 > 0 || lens2 > 0)
size++;
else
{
size++;
}

newstr = malloc(sizeof(char) * size);
if (newstr == NULL)
return (NULL);
while (s1[k] != '\0' && s1[k] != ' ')
{
newstr[k] = s1[k];

k++;
};
if (k > 0)
{
newstr[k] = ' ';
k++;
}
while (s2[j] != '\0' && s2[j] != ' ')
{
newstr[k + j] = s2[j];

j++;
}
newstr[size] = '\0';


return (newstr);
}



#include <stdlib.h>
#include "main.h"

/**
* _strlen - function that returns length or string
* @str: string to return length
* Return: Int (length)
*
*/

int _strlen(char *str)
{
int count;

for (count = 0; str[count] != '\0';)
count++;
return (count);
}

/**
* string_nconcat - a function that concatenates two strings.
* @s1: String 1 to concatenate
* @s2: String 2 to concatenate
* @n: he first n bytes of s2
* Return: Pointer | NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int count, count1;
int sign = n;
char *ptr;
int len1, len2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = _strlen(s1);
len2 = _strlen(s2);

if (sign >= len2)
{
sign = len2;
ptr = malloc(sizeof(char) * (len1 + len2 + 1));
}
else
ptr = malloc(sizeof(char) * (len1 + n + 1));
if (ptr == NULL)
return (NULL);
for (count = 0; count < len1; count++)
{
ptr[count] = s1[count];
}
for (count1 = 0; count1 < sign; count1++)
{
ptr[count++] = s2[count1];
}
ptr[count++] = '\0';
return (ptr);
}

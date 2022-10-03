#include "main.h"

/**
* _strncat - A function that concncatenates two strings
* @dest: Destination concpy to
* @src: Source concpy from
* @n: Max byte to use from src
* Return: Always 0 (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
int i, conc;

for (i = 0; dest[i] != '\0'; i++)
{
}

for (conc = 0; conc < n; conc++)
{
dest[i + conc] = src[conc];
if (src[conc] == '\0')
conc = n;
}

return (dest);
}

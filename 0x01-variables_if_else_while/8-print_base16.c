#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int numb;
char alphab;

for (numb = 48 ; numb <= 57 ; numb++)
putchar(numb);
for (alphab = 97 ; alphab <= 102 ; alphab++)
putchar(alphab);
putchar('\n');
return (0);
}

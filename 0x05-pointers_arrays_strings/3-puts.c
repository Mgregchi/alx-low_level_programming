#include "main.h"
/**
* _puts - A function that prints a string, followed by a new line, to stdout.
* @str: params. The string to print to stdout.
*/

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

_putchar('\n');
}

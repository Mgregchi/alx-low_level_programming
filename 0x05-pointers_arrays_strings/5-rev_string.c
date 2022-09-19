#include "main.h"

/**
* rev_string - a function that reverses a string
* @s: input to reverse
* Return: string and in reverse
*/
void rev_string(char *s)
{
char rev = s[0];
int i;
fcounter = _strlen(s);

for (i = 0; i < fcounter; i++)
{
fcounter--;
rev = s[i];
s[i] = s[fcounter];
s[fcounter] = rev;
}
}

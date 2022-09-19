#include "main.h"

/**
* _strlen - function that returns the length of a string.
* @s: String whose length is to be determined
*
* len: Variable to store number of char in s
*
*/

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
};

return (len);

}

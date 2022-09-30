#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints the number of arguments passed into it.
* Followed by newline.
* @argc: Arguments count
* @argv: Argument vectore
*
* Return: 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
int i;

for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
return (0);
}

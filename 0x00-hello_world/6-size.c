#include <stdio.h>
/**
 * main - Prints the sizes of all data types
 * Return: 0
 */
int main(void)
{
	int i;
	long l;
	char c;
	float f;
	long long int ll;

	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of n float: %ld byte(s)\n", sizeof(f));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(ll));
	return (0);
}

#include <stdio.h>
/**
 * main - Prints the sizes of all data types
 * Return: 0
 */
int main(void)
{
	int inType;
	long longType;
	char charType;
	float floatType;
	long long int longLIntType;

	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of an long int: %ld byte(s)\n", sizeof(longType));
	printf("Size of an char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an float: %ld byte(s)\n", sizeof(floatType));
	printf("Size of an long long int: %ld byte(s)\n", sizeof(longLIntType));
	return (0);
}

#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to memory area to fill
 * @b: character to fill the memory with
 * @n: number of bytes to be filled
 * Return: pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

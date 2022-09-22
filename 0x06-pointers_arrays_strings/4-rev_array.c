#include "main.h"

/**
* reverse_array - A function that reverses the content of an array of int
* @a: Arrays
* @n: elements of arrays
* Return: Always 0 (Success)
*/
void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n; i++)
{
n--;
temp = a[i];
a[i] = a[n];
a[n] = temp;
}
}

#include "main.h"

/**
*swap_int - A function that swaps the values of two integers.
* 
*@a: Variable a to be swapped with value of b
*@b: Variale b to be swapped with valueof a.
*a_b - Variable to hold value of a before swap
*b_a - Variable to hold value of b before swap
*
*Description: swap values of two intgers.
*
*Return: void
*
*/

void swap_int(int *a, int *b)
{
int a_b;
int b_a;

a_b = *a;
b_a = *b;

*a = b_a;
*b = a_b;
}

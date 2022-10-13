
#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - a function that returns the sum of all its parameters.
* @n: First named argument
* Return: Sum of all parameters or 0 is n zero
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list list;

va_start(list, n);
for (i = 0, sum = 0; i < n; i++)
sum += va_arg(list, int);

va_end(list);
return (sum);



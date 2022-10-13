
#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - a function that returns the sum of all its parameters.
* @n: First named argument
* Return: Sum of all parameters or 0 is n zero
*/

int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum;
unsigned int i;

if (n == 0)
return (0);
va_start(args, n);
sum = 0;
for (i = 0; i != n; i++)
sum += va_arg(args, int);
va_end(args);

return (sum);
}


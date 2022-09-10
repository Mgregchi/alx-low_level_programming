#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int numb;

  for (numb = '0' ; numb <= '9' ; numb++)
    {
      putchar(numb);

      if (numb != '9')
	{
	  putchar(',');
	  putchar(' ');
	}
    }
  putchar('\n');
  return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char alpha;
  char bet;

  for (alpha = 'a' ; alpha <= 'z' ; alpha++)
    {
      putchar(alpha);
    }
  for (bet = 'A' ; bet <= 'Z' ; bet++)
    {
      putchar(bet);
    }
  putchar('\n');
  return (0);
}

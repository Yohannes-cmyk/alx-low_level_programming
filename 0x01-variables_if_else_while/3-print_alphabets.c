#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
  int a;
  int b;

  for (a='a';a<='z';a++)
    putchar(a);
  for (b='A';b<='Z';b++)
    putchar(b);	
  putchar(10);
  return (0);
}

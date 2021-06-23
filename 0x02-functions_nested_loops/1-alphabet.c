#include "holberton.h"

/**
 * main - Printing holbert using loop and _putchar
 *
 * Return: Always 0 (Success)
 */

int print_alphabet()
{
  int num = 0;
    while(num<=26)
    {
      putchar(num);
      num++;
    }
        putchar('\n');
       return(0);

}

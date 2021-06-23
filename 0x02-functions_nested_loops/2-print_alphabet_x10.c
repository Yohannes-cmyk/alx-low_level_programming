#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet
 *
 * Return: (void)
 *
 */

void print_alphabet_x10(void)
{
    int ch = 'a';
    int n = 1;

    while(n<=10)
    {
       while(ch<='z')
       {
           putchar(ch);
           ch++;
       }
       ch = 'a';
       putchar('\n');
       n++;
    }
}

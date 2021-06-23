#include "holberton.h"

/**
 * main - Printing holbert using loop and _putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
    int n = 'a';
    while(n <= 'z')
    {
        _putchar(n);
        n++;
    }
    _putchar(10);
}

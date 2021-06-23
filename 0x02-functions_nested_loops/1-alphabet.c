#include "holberton.h"

/**
 * main - Printing the lower case of the alphabets
 *@n = characters 
 *on every loop of the while it prints out the letter and increment by one until the argument is false (z<=z)
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

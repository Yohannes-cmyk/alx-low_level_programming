#include "holberton.h"

/**
 * main - Printing holbert using loop and _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char word[] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}

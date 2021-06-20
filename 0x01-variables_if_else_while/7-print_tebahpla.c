#include <stdio.h>

/**
 * main - Entry point
 *
 * return: 0 for success
 */
int main(void)
{
	for (int n = 'z' ; n >= 'a' ; n--)
	{
		putchar(n);
	}
	putchar(n);
	return (0);
}

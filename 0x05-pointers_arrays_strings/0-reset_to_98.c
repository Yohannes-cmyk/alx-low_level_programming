#include "holberton.h"

/**
 * void reset_to_98(int *n) -- Function that takes a pointer to an int as a parameter and updates the value it points to 98
 * @n: the variable that is goint to be changed 
 * 
 * return - n 
 */

void reset_to_98(int *n)
{
	*n = 98;

	return (&n);
}

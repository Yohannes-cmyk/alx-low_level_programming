#include "holberton.h"

/**
 * _isdigit - checks if there is any digit by evaluating the ascii code of the character
 * @a: the character to be checked. 
 *Return 1 if its digit and return 0 if not. 
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

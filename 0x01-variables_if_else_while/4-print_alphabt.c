#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	
	for (n='a';n<='z';n++){
		if (n != 'q' && n != 'e')
			putchar(n);
	}
	putchar(10);
	return (0);
}

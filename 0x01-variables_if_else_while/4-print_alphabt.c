#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int a;
	
	for (a='a';a<='z';a++){
		if (a != 'q' && a != 'e')
			putchar(a);
	}
	putchar(10);
	return (0);
}

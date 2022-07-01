#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there **/
	if (n>0)
		printf ("%s\n", "is positive" );
		else if (n<0)
			printf ("%s\n", "is negative");
	else 
		printf("%s\n", "is zero");
	return (0);
}

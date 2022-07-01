#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main- last digit
 * Return: 0 if run correctly
 */
int main(void)
{
	int n;

	int m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;

		printf("%s %d %s %d", "Last digit of", n, "is", m);
	if (m > 5)
		printf("%s\n", " and is greater than 5");
		else if (m < 5)
			printf("%s\n", " and is less than 6 and not 0");
	else
		printf("%s\n", " and is 0");
	return (0);
}

#include "MAIN.h"
/**
 *reset_to_98 - main function
 *Return: 0 if succesfull
 */

void reset_to_98(void)
{
	int n;
	int *n;

	n = 402;
	*n = &n;
	*n = 98;
	return (0);
}

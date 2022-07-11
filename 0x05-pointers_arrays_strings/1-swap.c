#include "HEADER.h"

/**
 * swap_int - swap nvalues
 * @a: variable
 * @b: variable
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

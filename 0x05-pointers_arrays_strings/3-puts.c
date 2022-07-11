#include "HEADER.h"

/**
 * _puts - print a string
 * @str: variable
 */
void _puts(char *char)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		putchar(str[n]);
	putchar('\n');
}

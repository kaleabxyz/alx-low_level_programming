#include "HEADER.h"

/**
 * _strlen - return the length of a string
 * @s: variable
 * Return: the length
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		continue;
	return (n);
}

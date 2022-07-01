#include <stdio.h>

/**
 * main - print a-z
 * Return: 0 if ran correctly
 */

int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{	if (x != 113 && x != 101)
		putchar(x);
	}
	putchar ('\n');
	return (0);

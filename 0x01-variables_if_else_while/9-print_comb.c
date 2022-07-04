#include <stdio.h>

/**
 * main - print numberz
 * Return: 0 if successfully ran
 */

int main(void)
{
	int x;

	int y;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		putchar(', ');
	}
	putchar('\n');
	return (0);
}

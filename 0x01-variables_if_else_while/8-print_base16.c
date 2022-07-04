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
		putchar(x);
	for (y = 97; y <= 102; y++)
		putchar(y);
	putchar('\n');
	return (0);
}

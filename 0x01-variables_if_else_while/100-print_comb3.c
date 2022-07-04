#include <stdio.h>

/**
 * main - print numberz
 * Return: 0 if successfully ran
 */

int main(void)
{
	int x;

	int y;

	for (x = 47; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			if (x != y)
			{
		putchar(x);
		putchar(y);
		if (x != 57)
		{
		putchar(',');
		putchar(' ');
		}
			}
		}
	}
	putchar('\n');
	return (0);
}

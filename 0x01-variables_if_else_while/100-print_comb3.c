#include <stdio.h>

/**
 * main - print numberz
 * Return: 0 if successfully ran
 */

int main(void)
{
	int x;

	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			if (x != y)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
		if (x < 56 || y < 57)
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

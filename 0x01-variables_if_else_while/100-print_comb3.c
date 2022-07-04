#include <stdio.h>

/**
 * main - print numberz
 * Return: 0 if successfully ran
 */

int main(void)
{
	int x;

	int y;

	for (x = 48; x <= 56; x++)
	{
		for (y = 48; y <= 57; y++)
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

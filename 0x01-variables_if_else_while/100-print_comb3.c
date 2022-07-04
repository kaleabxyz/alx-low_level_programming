#include <stdio.h>

/**
 * main - print numberz
 * Return: 0 if successfully ran
 */

int main(void)
{
	int x;

	int y;

	for (x = 48; x <= 58; x++)
	{
		for (y = 48; y <= 58; y++)
		{
			if (x != y)
			{
		putchar(y);	
		putchar(x);
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

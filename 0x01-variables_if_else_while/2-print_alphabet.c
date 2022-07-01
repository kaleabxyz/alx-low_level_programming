#include <stdio.h>

/**
 * main - print a-z
 * Return: 0 if ran correctly
 */

int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
		putchar(x);
	putchar ("\n");
	return (0);
}

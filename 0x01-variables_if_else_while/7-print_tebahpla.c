#include <stdio.h>

/**
 * main - print alphabet in reverse
 * Return: 0 if ran succsefully
 */
int main(void)
{
	int x;

	for (x = 122; x >= 97; x--)
		putchar(x);
	return (0);
}

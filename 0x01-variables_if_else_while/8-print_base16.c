#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	a = 48;
	b = 97;
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	while (b < 103)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

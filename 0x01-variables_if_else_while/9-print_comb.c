#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a;

	a = 48;
	while (a < 58)
	{
		if (a > 48)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet, in lowercase 10x
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{
		b = 97;
		while (b < 123)
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}

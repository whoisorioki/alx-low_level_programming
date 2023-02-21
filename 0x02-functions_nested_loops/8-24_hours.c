#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int m, h;

	m = h = 0;
	while (h < 24)
	{
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
		m = 0;
	}
}

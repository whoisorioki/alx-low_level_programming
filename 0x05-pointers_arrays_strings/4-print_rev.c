#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (s[i] != '\0')
			i++;
		else
			break;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: pointer to char
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	else
		for (i = (len + 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);

	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - prints a string, followed by a new line
 * @str: pointer to a string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - prints a string, followed by a new line
 * @str: pointer to a string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			str =+ 2;;
		}
	}
	_putchar('\n');
}

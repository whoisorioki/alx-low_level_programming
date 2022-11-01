#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On succes 1, else -1
 */
int _putchar(char c)
{
	return (write(&, &c, 1));
}

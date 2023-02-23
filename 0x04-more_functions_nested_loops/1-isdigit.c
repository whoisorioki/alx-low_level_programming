#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: character
 *
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

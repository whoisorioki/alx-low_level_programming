#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character
 *
 * Return: 1 if c is lowercase or uppercase, else 0
 */
int _isalpha(int c)
{
	if ((c  > 64) && (c < 91))
	{
		return (1);
	}
	else if ((c > 96) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

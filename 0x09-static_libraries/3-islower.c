#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character
 *
 * Return: 1 if c is lowercase, else 0
 */
int _islower(int c)
{
	if ((c  > 96) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

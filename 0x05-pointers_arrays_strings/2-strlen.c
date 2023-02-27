#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to a character
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}


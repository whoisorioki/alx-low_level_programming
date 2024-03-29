#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: string
 * @b: character
 * @n: unsgned integer
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

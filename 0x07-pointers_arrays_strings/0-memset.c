#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: meory area pointer
 * @n: bytes of the memory area
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

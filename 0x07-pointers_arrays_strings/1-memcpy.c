#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: unsigned integer
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

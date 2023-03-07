#include "main.h"

/**
 * memcpy - copies memory area
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
	while (src[i] != '\0')
		src[i]++;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to char, destination
 * @src: pointer to char, source
 * @n: integer
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;
	int i;

	i = 0;
	ptr = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (ptr);
}

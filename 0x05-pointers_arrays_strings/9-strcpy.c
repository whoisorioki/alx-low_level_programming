#include "main.h"

/**
 * _strcpy - copies the string pointed t
 * @dest: pointer to char, destination
 * @src: pointer to char, source
 *
 * Return: a string
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ptr);
}

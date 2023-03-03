#include "main.h"

/**
 * _strcat - Concatenatess two strings
 * @dest: pointer to char, destination
 * @src: pointer to char, source
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

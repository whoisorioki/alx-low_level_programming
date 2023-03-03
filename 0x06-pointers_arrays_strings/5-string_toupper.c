#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @str - string
 *
 * Return: uppercase
 */
char *string_toupper(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr = *ptr - ('a' - 'A');
		ptr++;
	}
	return (str);
}

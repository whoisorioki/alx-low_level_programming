#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string
 *
 * Return: NULL if str = NULL, otherwise a pointer to
 * duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	s = malloc(i + 1);
	if (s == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		s[j] = str[j];
	return (s);
}

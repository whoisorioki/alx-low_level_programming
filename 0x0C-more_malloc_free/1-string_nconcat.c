#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned integer
 *
 * Return: If the function fails, it should return NULL, else the joined string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (n > j)
		n = j;
	k = i + n;
	s = (char *)malloc(k + 1);
	if (s == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
		s[x] = s1[x];
	for (x = 0; x < n; x++)
		s[i + x] = s2[x];
	s[k] = '\0';
	return (s);
}

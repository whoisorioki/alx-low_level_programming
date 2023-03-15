#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, length;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			length++;
			j++;
		}
		length++;
	}
	length++;
	s = (char *)malloc(sizeof(char) * length);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{

		j = 0;
		while (av[i][j] != '\0')
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';

	return (s);
}

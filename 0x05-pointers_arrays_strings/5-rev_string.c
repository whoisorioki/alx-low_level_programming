#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char *start;
	char *end;
	char tmp;

	start = s;
	end = s;
	while (*end != '\0')
		end++;
	end--;
	while (end > start)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}

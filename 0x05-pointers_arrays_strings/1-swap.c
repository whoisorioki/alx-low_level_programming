#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to int
 * @b: pointer to int
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

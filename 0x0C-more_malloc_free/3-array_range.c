#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum int
 * @max: maximum int
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size, value;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	value = min;
	for (i = 0; i < size; i++)
	{
		array[i] = value;
		value++;
	}
	return (array);
}

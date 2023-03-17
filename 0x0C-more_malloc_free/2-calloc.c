#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size in bytes of the array
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, result;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = nmemb * size;
	ptr = malloc(result);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < result; i++)
		*((char *)ptr + i) = 0;
	return (ptr);
}

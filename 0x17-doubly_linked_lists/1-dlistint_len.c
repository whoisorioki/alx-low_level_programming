#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - return the number of elements in a doubly linked list
 * @h: pointer to head of list
 * Return: number of elements in a dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current)
	{
		current = current->next;
		count++;
	}

	return (count);
}

#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head of list
 * @idx: index at which to insert new node, starting at 0
 * @n: data for new node
 * Return: address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	for (i = 0; current && i < idx - 1; i++)
		current = current->next;

	if (!current)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next = new;
	if (new->next)
		new->next->prev = new;

	return (new);
}

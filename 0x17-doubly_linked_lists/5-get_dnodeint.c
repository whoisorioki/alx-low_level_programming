#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to head of list
 * @index: index of the node, starting from 0
 * Return: nth node, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current && i < index; i++)
		current = current->next;

	return (current);
}

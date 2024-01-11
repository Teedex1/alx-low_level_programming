#include "lists.h"
/**
 * dlistint_len - list lenght
 * @h: the pointer
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		current = current->next;
		node_count++;
	}

	return (node_count);
}

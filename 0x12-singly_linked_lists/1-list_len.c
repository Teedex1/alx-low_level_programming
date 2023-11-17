#include "lists.h"
/**
 * list_len - number of element in the linked list
 * @h: pointer
 *
 * Return: teh number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

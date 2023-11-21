#include "lists.h"
/**
 * listint_len -  return the number of element in a linked list
 * @h: the pointer
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	for (; h; h = h->next)
	{
		num++;
	}
	return (num);
}

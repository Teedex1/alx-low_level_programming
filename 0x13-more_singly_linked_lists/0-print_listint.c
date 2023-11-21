#include "lists.h"
/**
 * print_listint - to print the linked list
 * @h: the pointer to the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		num++;
	}

	return (num);
}

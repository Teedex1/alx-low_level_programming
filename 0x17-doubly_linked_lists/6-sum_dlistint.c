#include "lists.h"
/**
 * sum_dlistint - sum the list
 * @head: the pointer
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

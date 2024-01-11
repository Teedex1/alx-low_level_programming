#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns a node
 * @head: pointer
 * @index: index
 * Return: 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}

		current = current->next;
		count++;
	}
	return (NULL);
}

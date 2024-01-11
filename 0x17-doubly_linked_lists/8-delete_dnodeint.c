#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: the pointer
 * @int: integer
 * @index: integer index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *current;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		
		free(temp);
		return (1);
	}
	current = *head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (-1);
	}
	current->prev->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	free(current);
	return (1);
}



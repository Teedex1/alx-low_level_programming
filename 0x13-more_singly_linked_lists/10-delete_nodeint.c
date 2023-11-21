#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: the pointer
 * @index: the index of the node to delete
 * Return: 1(success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode = *head;
	listint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(currentNode);
		return (1);
	}

	while (i < index - 1)

	{
		if (!currentNode || !(currentNode->next))
			return (-1);
		currentNode = currentNode->next;
		i++;
	}

	if (currentNode->next == NULL)
		return (-1);

	temp = currentNode->next;
	currentNode->next = temp->next;
	free(temp);

	return (1);
}

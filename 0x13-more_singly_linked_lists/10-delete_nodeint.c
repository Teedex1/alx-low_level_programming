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
	listint_t *nodeToDelete;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (unsigned int counter = 0; counter < index - 1; counter++)

	{
		if (currentNode == NULL || currentNode->next == NULL)
			return (-1);
		currentNode = currentNode->next;
	}
	if (currentNode == NULL || currentNode->next == NULL)
		return (-1);

	nodeToDelete = currentNode->next;

	currentNode->next = nodeToDelete->next;
	free(nodeToDelete);

	return (1);
}

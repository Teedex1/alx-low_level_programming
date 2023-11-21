#include "lists.h"
/**
 * free_listint2 - free a linked list
 * @head: pointer
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	for (; *head; *head = current_node)
	{
		current_node = (*head)->next;
		free(*head);
	}
	*head = NULL;
}

#include "lists.h"
/**
 * get_nodeint_at_index - returns the node
 * @head: first node pointer
 * @index: index of node
 *
 * Return: pointer to node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node = head;

	for (i = 0; current_node && i < index; i++)
	{
		current_node = current_node->next;
	}

	return (current_node ? current_node : NULL);
}

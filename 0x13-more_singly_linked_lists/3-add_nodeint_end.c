#include "lists.h"
/**
 * add_nodeint_end - add new node ato a linked list
 * @head: pointer
 * @n: int
 *
 * Return: new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	for (; temp->next; temp = temp->next)
	{

	}

	temp->next = new_node;

	return new_node;
}

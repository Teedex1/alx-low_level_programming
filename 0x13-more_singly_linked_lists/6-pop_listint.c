#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int num;

	if (!head || !*head)
		return(0);

	num = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;

	return (num);
}

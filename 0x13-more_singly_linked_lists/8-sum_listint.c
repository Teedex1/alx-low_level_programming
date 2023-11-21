#include "lists.h"
/**
 * sum_listint - sum all the data in a listint
 * @head: first node pointer
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node)
	{

		sum = sum + current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}

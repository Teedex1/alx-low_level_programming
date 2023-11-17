#include "lists.h"
/**
 * free_list - frees list
 * @head: a pointer
 *
 */
void free_list(list_t *head)
{
	list_t *point;

	while (head)
	{
		point = head->next;
		free(head->str);
		free(head);
		head = point;
	}
}

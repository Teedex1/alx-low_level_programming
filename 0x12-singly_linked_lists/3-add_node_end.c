#include "lists.h"
/**
 * add_node - add a new node
 * @head: pointer
 * @str: string
 * Return: the address or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *up;
	int length;
	list_t *i, *l;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);

	up = strdup(str);
	if (str == NULL)
	{
		free(i);
		return (NULL);
	}
	for (length = 0; str[length];)
		length++;

	i->str = up;
	i->len = length;
	i->next = NULL;

	if (*head == NULL)
		*head = i;
	else
	{
		l = *head;
		while (l->next != NULL)
			l = l->next;
		l-> next = i;
	}

	return (*head);
}

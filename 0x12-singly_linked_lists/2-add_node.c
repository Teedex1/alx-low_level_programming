#include "lists.h"
/**
 * add_node - add a new node
 * @head: pointer
 * @str: string
 * Return: the address or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *up;
	int length;
	list_t *i;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);

	up = strdup(str);
	if (up == NULL)
	{
		free(i);
		return (NULL);
	}
	for (length = 0; str[length];)
		length++;

	i->str = up;
	i->len = length;
	i->next = *head;

	*head = i;

	return (i);
}

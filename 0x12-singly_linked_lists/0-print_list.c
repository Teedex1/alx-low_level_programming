#include "lists.h"
/**
 * print_list - to print the list_t
 * @h: the link pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;
	/*unsigned long int current_len;*/

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%u] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		count+= 1;
		current = current->next;

	}

	return (count);
}

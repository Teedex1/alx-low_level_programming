#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies strings to a new memory
 * @str: string to copy to new memory
 * Return: pointer to the new mwmory
 */

char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;
	copy = malloc(sizeof(char) * count + 1);

		if (copy == NULL)
			return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}

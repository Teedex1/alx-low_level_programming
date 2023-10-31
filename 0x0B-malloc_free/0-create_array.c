#include "main.h"
#include <stdlib.h>
/**
 * create_array - the function that creates an array
 * @c: its is a character
 * @size: the of the array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
		if (array == NULL)
			return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

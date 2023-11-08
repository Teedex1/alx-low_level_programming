#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for intergers
 * @array: array to search from
 * @size: size of array
 * @cmp: function pointers
 * Return: -1.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) == 1)
			return (x);
	}
	return (-1);
}

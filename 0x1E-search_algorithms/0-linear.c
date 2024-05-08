#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: input array
 * @size: size of array
 * @value: value to search
 * Return: Exit_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value cheked array[%lu] = [%d]\n", index, array[index]);
	       if (array[index] == value)
		       return (index);
	}

	return (-1);
}

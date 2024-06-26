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
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

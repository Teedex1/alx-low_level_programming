#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute function on each element of array
 * @array: the array
 * @size: size of the array
 * @action: funtion to perform on each element of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (array == NULL || action == NULL)
		return;
	for (y = 0; y < size; y++)
		action(array[y]);
}


#include "search_algos.h"

/**
 * binary_search - searchs for a value in an int
 * @array: a pointer
 * @size: number of element
 * @value: the value to search for
 * Return value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		print_subarray(array, low, high);

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * print_subarray - prints the subarray being searched
 *
 * @array: pointer to the first element
 * @low: lower index of the subarray
 * @high: highher index of he subarray
 */
void print_subarray(int *array, int low, int high)
{
	int i;

	for (i = low; i <= high; i++)
	{
		printf("%i", array[i]);
		if (i < high)
			printf(", ");
		else
			printf("\n");
	}
}




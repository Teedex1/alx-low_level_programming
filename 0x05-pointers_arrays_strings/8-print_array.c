#include "main.h"
/**
 * print_array - the function that print n
 * @n: element n
 * @a: element a
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
		printf("\n");
}

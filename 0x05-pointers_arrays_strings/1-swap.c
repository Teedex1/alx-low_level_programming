#include "main.h"
/**
 * swap_int - swap two integers
 *
 * @a: first number to swap
 * @b: second number to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int g;

	g = *a;
	*a = *b;
	*b = g;
}


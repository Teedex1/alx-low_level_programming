#include "main.h"
/**
 * clear_bit -  set the bit at a position
 * @n: pointer to an int
 * @index: index
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= ~(1UL << index);
		return (1);
	}
	return (-1);
}

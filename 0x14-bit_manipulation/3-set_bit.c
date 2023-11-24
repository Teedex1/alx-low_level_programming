#include "main.h"
/**
 * set_bit - sets a bit
 * @n: pointer to an int
 * @index: index
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (n == NULL)
		return (-1);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (mask << index);
	return (1);
}

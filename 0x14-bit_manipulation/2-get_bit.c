#include "main.h"
/**
 * get_bit - get the value of a bit
 * @n: integer n
 * @index: index
 * Return: the avlue of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	else
		return ((n >> index) & 1);
}

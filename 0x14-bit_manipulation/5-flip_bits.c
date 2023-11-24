#include "main.h"
/**
 * flip_bits - gets the number of bit to flip
 * @n: the int
 * @m: another int
 *
 * Return: number of flipped bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned int flipped_bits_count = 0;

	while (flipped)
	{
		flipped &= (flipped - 1);
		flipped_bits_count++;
	}
	return (flipped_bits_count);
}

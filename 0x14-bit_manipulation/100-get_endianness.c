#include "main.h"
/**
 * get_endianness - checks the size of endian
 * Return: 1
 */
int get_endianness(void)
{
	unsigned int test = 1;

	return ((*(unsigned char *)&test == 1) ? 1 : 0);
}

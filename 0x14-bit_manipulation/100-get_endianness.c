#include "main.h"
/**
 * get_endianness - checks the size of endian
 * @union: union
 *
 * Return: 1
 */
int get_endianness(void)
{
	union
	{
		unsigned int i;
		unsigned char c[sizeof(unsigned int)];
	} test;

	test.i = 1;

	return ((test.c[0] == 1) ? 1 : 0);
}

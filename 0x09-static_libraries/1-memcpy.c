#include "main.h"
/**
 * _memcpy - the function to copy the the memory block
 * @n: the memory block to copy
 * @dest: the memory block to copy to
 * @src: the memory to copy from
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	return (dest);
}


#include "main.h"
/**
 * binary_to_uint - convert a binary to an unsigned int
 * @b: the pointer to the binary
 *
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			result = result | (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (result);
}


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

	if (b == NULL)
		return (0);

	for (; *b != '\0'; ++b)
	{
		if (*b != '0' && *b != '1')
			continue;

		result = (result << 1) + (*b - '0');
	}

	return (result);
}


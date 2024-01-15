#include "main.h"
/**
 * _memset - the function that assigns constant variable
 * @s: The momory area
 * @b: the constant variable
 * @n: the variabl
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

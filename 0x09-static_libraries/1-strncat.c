#include "main.h"
#include <string.h>
/**
 * _strncat - the function that prints the string
 * @dest: the destination of the string
 * @src: the source of the string
 * @n: the value of the string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}

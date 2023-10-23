#include "main.h"
#include <stddef.h>
/**
 * _strchr - the function to search for char
 * @s: pointer to the  storage
 * @c: the char
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}

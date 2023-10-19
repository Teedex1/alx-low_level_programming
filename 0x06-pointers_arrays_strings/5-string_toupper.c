#include "main.h"
/**
 * string_toupper - to change to uppercase
 * @s: string of the element
 * Return: pointer
 */
char *string_toupper(char *s)
{
	int i, len_str;

	len_str = 0;
	while (s[len_str] != '\0')
		len_str++;

	for (i = 0; i < len_str; i++)
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] -= 32;
	}

	return (s);
}

#include "main.h"
/**
 * _strlen_recursion - the function that count the length of the string
 * @s: the string
 * Return: 0(success)
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 +  _strlen_recursion(s + 1));
	}
		return (0);
}

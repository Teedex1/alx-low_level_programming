#include "main.h"
/**
 * _print_rev_recursion - the function that print in reverse order
 * @s: the string
 * Return: 0(success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		/*_putchar(*s);*/
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}

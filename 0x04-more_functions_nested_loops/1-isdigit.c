#include "main.h"
/**
 * _isdigit - Entry point of the function
 * @c: start of the function
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

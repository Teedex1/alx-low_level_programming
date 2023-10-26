#include "main.h"
/**
* custom_sqrt - recursively finds the square root of a non-negative integer
* @b: iltration
* @n: the int
* Return:  success 1.
*/

int custom_sqrt(int n, int b)
{
	if (b * b == n)
		return (b);
	else if (b * b > n)
		return (-1);
	return (custom_sqrt(n, b + 1));
}

/*
 * _sqrt_recursion - the square root recursion
 *
 * Return: success 1.
 */
int _sqrt_recursion(int n)
{
	return (custom_sqrt(n, 1));
}

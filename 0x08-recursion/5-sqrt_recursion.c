#include "main.h"
/**
 * _sqrt_recursion - the actual recursion
 * @b: iltration
 * @n: the int
 * Return 0(success)
 */

int custom_sqrt(int n, int b)
{
	if (b * b == n)
		return (b);
	else if (b * b > n)
		return (-1);
	return (custom_sqrt(n, b + 1));
}
int _sqrt_recursion(int n)
{
	return (custom_sqrt(n, 1));
}

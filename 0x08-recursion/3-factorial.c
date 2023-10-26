#include "main.h"
/**
 * factorial - the function that return factorial
 * @n: the int
 * Return: 0(success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

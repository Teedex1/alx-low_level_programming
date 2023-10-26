#include "main.h"
/**
 * is_prime_number - the function that returns a prime number
 * @a: int
 * is_divisible: function checks if a number a is divisible
 * @divisor: the devisor
 * Return: success
 */
int is_divisible(int a, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	else if (a % divisor == 0)
	{
		return (1);
	}
	{
	return (is_divisible(a, divisor - 1));
	}
}

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	{
		return (!is_divisible(n, n - 1));
	}
}

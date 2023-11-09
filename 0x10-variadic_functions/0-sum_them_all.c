#include "variadic_functions.h"
/**
 * sum_them_all - sum the whole parameter
 * @n: number of arg
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list param;

	va_start(param, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(param, const unsigned int);
		}
	}
	va_end(param);
	return (sum);
}


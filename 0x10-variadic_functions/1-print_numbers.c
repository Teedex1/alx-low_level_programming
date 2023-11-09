#include "variadic_functions.h"
/**
 * print_numbers - print integers
 * @separator: string to be printed between
 * @n: numbers of int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, args;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(ptr, const unsigned int);
		printf("%d", args);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}

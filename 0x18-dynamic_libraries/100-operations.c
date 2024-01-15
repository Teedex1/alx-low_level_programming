#include <stdio.h>
/**
 * add - addition
 * @a: int a
 * @b: int b
 * Return: the addion
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtract
 * @a: int a
 * @b: int b
 * Return: Subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplication
 * @a: int a
 * @b: int b
 * Return: the Multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - division
 * @a: int a
 * @b: int b
 * Return: division
 */
int div (int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - Modulo
 * @a: int a
 * @b: int b
 * Return: modulo
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return (0);
	}
	return (a % b);
}

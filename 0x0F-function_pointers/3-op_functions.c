#include <stdio.h>
#include "3-calc.h"
/**
 * op_add -sum two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the diffrence between two numbers
 * @a: the first number
 * @b: the second number
 * Return: the deffrence between the numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the product of the two numbers
 * @a: the first number
 * @b: the second number
 * Return: the product the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the result of the division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the result the numbers
 */
int op_div(int a, int b)
{
	return ((a) / (b));
}
/**
 * op_mod - the reminder of the division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the reminder the numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}

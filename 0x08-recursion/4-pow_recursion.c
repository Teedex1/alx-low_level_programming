#include "main.h"
/**
 * _pow_recursion - the function that returns the value
 * @x: the int
 * @y: the int
 * Return: 0(success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
	{
		return (1);
	}
	else
	{

		return (x * _pow_recursion(x, y - 1));
	}
}

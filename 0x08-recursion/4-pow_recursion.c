#include "main.h"

/**
* _pow_recursion - a function that return value x raised to power y
*
 * @x: int x
 * @y: int y
 * Return: value of x raised to power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
}
}

#include "main.h"

/**
 * _pow_recursion - gets value of x raised to the power of y
 * @x: base number
 * @y: exponent to which base num is raised
 *
 * Return: result of x raised to y power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

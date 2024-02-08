#include "main.h"

/**
 * find_sqrt - iterates to find natural square root of num
 * @n: number to check for square root
 * @i: incremented variable to check if square root of num
 *
 * Return: natural square root of num if found, else -1
 */

int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, (i + 1)));
	}
}

/**
 * _sqrt_recursion - calls find_sqrt to see if natural square root exists
 * @n: number to check for square root
 *
 * Return: natural square root of input number (-1 if one doesn't exist)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, 0));
	}
}

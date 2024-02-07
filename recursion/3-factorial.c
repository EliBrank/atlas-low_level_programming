#include "main.h"

/**
 * factorial - returns the factorial for a given number
 * @n: number to perform factorial operation upon
 *
 * Return: factorial of number (-1 if number is less than 0)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

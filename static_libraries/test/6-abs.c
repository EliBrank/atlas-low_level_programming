#include "main.h"

/**
 * _abs - calcs absolute value of input num
 * @n: checked num
 *
 * Return: 0 (always success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		int a;

		a = (n * -1);

		return (a);
	}
	else
	{
		return (n);
	}

	return (0);
}

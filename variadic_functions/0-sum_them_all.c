#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - gets sum of parameters
 * @n: num of parameters to add
 *
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	return (sum);
}

#include "main.h"

/**
 * prime_checker - checks whether input n is prime
 * @n: number to check if prime
 * @i: increments to test if number is prime
 *
 * Return: 1 if number is prime, else 0
 */

int prime_checker(int n, int i)
{
	if (i <= n / 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
		return (prime_checker(n, (i + 1)));
	}
	return (1);
}

/**
 * is_prime_number - passes number to prime_checker to check if prime
 * @n: number to check if prime
 *
 * Return: 1 if number is prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, 2));
	}
}

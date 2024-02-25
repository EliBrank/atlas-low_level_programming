#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: first num to add
 * @b: second num to add
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: num to subtract from
 * @b: num to subtract
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first num to multiply
 * @b: second num to multiply
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one number by another
 * @a: num to be divided
 * @b: num to divide by
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets remainder of the division of two numbers
 * @a: num to be divided
 * @b: num to divide by
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}

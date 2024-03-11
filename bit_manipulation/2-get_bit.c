#include "main.h"
#include <stdlib.h>

/**
 * get_bit - gets value of a bit at given index
 * @n: int to evaluate
 * @index: index of int to check (in binary)
 *
 * Return: value of bit at index, -1 if failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitCheck = 1;

	bitCheck = bitCheck << index;
	if ((n & bitCheck) == bitCheck)
		return (1);
	else
		return (0);
}

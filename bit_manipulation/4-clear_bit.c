#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: int to change at index
 * @index: index of int to set to 0 (in binary)
 *
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitCheck = 1;
	unsigned int numBits = sizeof(unsigned long int) * 8;

	if (index > (numBits - 1))
		return (-1);

	bitCheck = bitCheck << index;

	*n = ~(*n);
	*n = ((*n) | bitCheck);
	*n = ~(*n);

	return (1);
}

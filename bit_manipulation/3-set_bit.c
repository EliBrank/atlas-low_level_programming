#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: int to change
 * @index: index of int to set (in binary)
 *
 * Return: 1 if success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitCheck = 1;
	unsigned int numBits = sizeof(unsigned long int) * 8;

	bitCheck = bitCheck << index;

	if (index > (numBits - 1))
		return (-1);

	*n = (*n | bitCheck);
	return (1);
}

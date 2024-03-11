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
	unsigned long int nFlip = ~(*n);
	unsigned int numBits = sizeof(unsigned long int) * 8;
	int sigBit = 0;
	int bit = 0;
	int i;

	if (index > (numBits - 1))
		return (-1);

	bitCheck = bitCheck << index;

	nFlip = (nFlip | bitCheck);
	printf("%lu\n", nFlip);

	for (i = numBits - 1; i >= 0; i--)
	{
		bit = ((*n) >> i) & 1;
		if (bit == 1)
		{
			sigBit = numBits - i;
			break;
		}
	}

	printf("%lu\n", nFlip);

	*n = *n & nFlip;

	return (1);
}

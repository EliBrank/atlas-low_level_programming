#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - gets number of bits needed to convert num to another
 * @n: first int to evaluate
 * @m: int to check against first
 *
 * Return: number of bits needed to flip between n and m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int numBits = sizeof(unsigned long int) * 8;
	int bitsToChange = 0;
	int bitEval = 0;
	int i;


	for (i = numBits - 1; i >= 0; i--)
	{
		bitEval = ((n >> i) & 1) ^ ((m >> i) & 1);

		if (bitEval == 1)
			bitsToChange += 1;
	}

	return (bitsToChange);
}

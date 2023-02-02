#include "main.h"

/**
 * flip_bits - return no. of bits needed to flip
 * @n: first no.
 * @m: second no.
 *
 * Return: no. of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, i = 0;

	flips = n ^ m;
	while (flips > 0)
	{
		i += flips & 1;
		flips >>= 1;
	}
	return (i);
}

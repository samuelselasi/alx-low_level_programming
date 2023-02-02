#include "main.h"

/**
 * get_bit - bit at given idex
 * @n: the number
 * @index: index to return bit
 *
 * Return: 0,1 or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;
	unsigned int max;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	b = ((n >> index) & 1);
	return (b);
}

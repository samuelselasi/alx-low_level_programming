#include "main.h"

/**
 * clear_bit - set bit to 1 at given index
 * @n: the number
 * @index: index to set number
 *
 * Return: 1 or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int i = 1;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	i = ~(i << index);
	*n = (*n & i);
	return (1);
}

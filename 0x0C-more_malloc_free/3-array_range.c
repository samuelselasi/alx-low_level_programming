#include "main.h"

/**
 * array_range - array of integers
 * @min: starting point
 * @max: ending point
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int *p, i, n;

	n = (max - min + 1);
	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * n);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		p[i] = min++;
	}
	return (p);
}

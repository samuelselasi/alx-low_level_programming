#include "main.h"

/**
 * reverse_array - reverse content of array
 * @a: array of integers
 * @n: no. of elements in array
 *
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - 1 - i] = tmp;
		i++;
	}
}

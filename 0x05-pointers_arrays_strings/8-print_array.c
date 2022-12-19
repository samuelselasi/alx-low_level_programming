#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of in array
 * @a: array pointer
 * @n: number of elements to print
 *
 * Rreturn: none
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

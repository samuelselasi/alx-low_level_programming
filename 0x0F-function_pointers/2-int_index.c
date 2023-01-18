#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array
 * @size: size of array
 * @cmp: function to compare
 *
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
		{
			return (i);
		}
	}
	return (-1);
}

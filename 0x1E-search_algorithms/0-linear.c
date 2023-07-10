#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of integers
 * @array: Array to search through
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: EXIT_SECCESS, -1 if NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

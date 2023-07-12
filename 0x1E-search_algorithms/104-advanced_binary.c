#include "search_algos.h"

/**
 * advanced_binary - Function that searches for value in sorted int array
 * @array: Array to search through
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: Index of value, -1 if NULL or not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	return (binary_search_3(array, value, low, high));
}

/**
 * binary_search_3 - Function that searches for value in sorted integer array
 * @array: array to search through
 * @value: Value to search in array
 * @low: Starting index of array
 * @high: Ending index of array
 *
 * Return: index of value, -1 if NULL or not found
 */

int binary_search_3(int *array, int value, size_t low, size_t high)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		if (i == high)
			printf("%i\n", array[i]);
		else
			printf("%i, ", array[i]);
	}
	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_3(array, value, mid + 1, high));

		if (array[mid] >= value)
			return (binary_search_3(array, value, low, mid));
	}
	return (-1);
}

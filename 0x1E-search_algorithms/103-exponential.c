#include "search_algos.h"

/**
 * exponential_search - Function that searches for value in sorted int array
 * @array: Array to search through
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: Index of value, -1 if NULL or not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (array == NULL || size == 0)
		return (-1);

	mid = 1;
	while (mid < size && array[mid] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		mid = mid * 2;
	}
	low = mid / 2;
	high = min(mid, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_2(array, value, low, high));
}

/**
 * binary_search_2 - Function that searches for value in sorted integer array
 * @array: array to search through
 * @value: Value to search in array
 * @low: Starting index of array
 * @high: Ending index of array
 *
 * Return: index of value, -1 if NULL or not found
 */

int binary_search_2(int *array, int value, size_t low, size_t high)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%i\n", array[i]);
			else
				printf("%i, ", array[i]);
		}

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

/**
 * min - Function that finds the minimum of 2 numbers
 * @n1: First value
 * @n2: Second value
 *
 * Return: Min or either if equal
 */

size_t min(size_t n1, size_t n2)
{
	if (n1 <= n2)
		return (n1);
	else
		return (n2);
}

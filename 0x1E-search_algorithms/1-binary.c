#include "search_algos.h"

/**
 * binary_search - Function that searches for value in sorted integer array
 * @array: array to search through
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: index of value, -1 if NULL or not found
 */

int binary_search(int *array, size_t size, int value)
{
	int i, high, low, mid;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

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

#include "search_algos.h"

/**
 * interpolation_search - Function d@ searches for value in sorted int array
 * @array: Array to search through
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: Index of value, -1 if NULL or not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (array == NULL)
		return (-1);

	low = 0, high = size - 1;

	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	if (array[low] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	mid = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", mid);
	return (-1);
}

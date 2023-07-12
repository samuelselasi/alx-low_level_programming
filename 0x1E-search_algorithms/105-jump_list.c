#include "search_algos.h"

/**
 * jump_list - function that searches for a value in a sorted list of integers
 * @list: Pointer to head of linked list to search
 * @size: Size of linked list (No. of nodes)
 * @value: Value to search for in list
 *
 * Return: value, NULL if otherwise
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *node, *jump;
	size_t step = 0, step_size = sqrt(size);

	if (list == NULL || size == 0)
		return (NULL);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", node->index,
	       jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	if (node->n == value)
		return (node);
	else
		return (NULL);
}

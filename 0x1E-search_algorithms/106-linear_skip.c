#include "search_algos.h"

/**
 * linear_skip - Function that searches for value in sorted skip list of int
 * @list: Pointer to head of linked list
 * @value: Value to search for in list
 *
 * Return: value, NULL if otherwise
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *stop = NULL, *tmp = NULL;

	if (list == NULL)
		return (NULL);

	tmp = list;
	while (tmp && tmp->express && tmp->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", tmp->express->index,
		       tmp->express->n);
		tmp = tmp->express;
	}
	stop = tmp;
	while (stop && stop->next != stop->express)
		stop = stop->next;

	if (tmp->express)
	{
		printf("Value checked at index [%lu] = [%i]\n", tmp->express->index,
		       tmp->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n", tmp->index,
		       tmp->express->index);
	}
	else
		printf("Value found between indexes [%lu] and [%lu]\n", tmp->index,
		       stop->index);

	while (tmp != stop && tmp->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", tmp->index, tmp->n);
		tmp = tmp->next;
	}
	printf("Value checked at index [%lu] = [%i]\n", tmp->index, tmp->n);

	if (tmp == stop)
		return (NULL);
	return (tmp);
}

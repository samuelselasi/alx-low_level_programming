#include "lists.h"

/**
 * tmp_node - new memory
 * @list: old list
 * @size: size of new list
 * @new: new list
 *
 * Return: newlist
 */

const listint_t **tmp_node(const listint_t **list, size_t size,
		const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));

	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];

	newlist[i] = new;
	free(list);
	return (newlist);
}

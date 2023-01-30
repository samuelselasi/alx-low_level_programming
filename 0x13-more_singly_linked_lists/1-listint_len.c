#include "lists.h"

/**
 * listint_len - returned no. of elements in linked list
 * @h: first node
 * Return: no. of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

#include "lists.h"

/**
 * dlistint_len - print no. of elements in a doubly linked list
 * @h: first node of list
 * Return: no. of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

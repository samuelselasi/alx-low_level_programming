#include "lists.h"

/**
 * print_listint - print all elements of a list
 * @h: first node
 * Return: no. of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

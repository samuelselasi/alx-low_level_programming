#include "lists.h"

/**
 * print_list - print all elements in list
 * @h: head of list
 * Return: no. of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
	}
	return (i);
}

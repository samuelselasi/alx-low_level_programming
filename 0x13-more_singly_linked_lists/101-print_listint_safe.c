#include "lists.h"
#include "loops.c"
#include "node_counter.c"

/**
 * print_listint_safe - print linked list
 * @head: first node
 * Return: no. of nodes or exit(98)
 */

size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	int loops_found;
	size_t num_nodes = 0;
	const listint_t *tmp;

	if (head == NULL)
		exit(98);

	loops_found = loops(head);
	if (loops_found == 1)
	{
		i = node_counter(head);
		for (loops_found = 0; loops_found < i; loops_found++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}
	else if (loops_found == 0)
	{
		tmp = head;
		while (tmp != NULL)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}
	return (num_nodes);
}

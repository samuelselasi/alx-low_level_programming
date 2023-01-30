#include "lists.h"

/**
 * print_listint_safe - print linked list
 * @head: first node
 * Return: no. of nodes or exit(98)
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	long int j;

	while (head)
	{
		if (head == NULL)
			exit(98);

		j = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (j > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next,
					head->next->n);
			break;
		}
	}
	return (i);
}

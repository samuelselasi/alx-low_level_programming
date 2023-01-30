#include "lists.h"
#include "tmp_node.c"

/**
 * print_listint_safe - print linked list
 * @head: first node
 * Return: no. of nodes or exit(98)
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, j = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < j; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (j);
			}
		}
		j++;
		list = tmp_node(list, j, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (j);
}

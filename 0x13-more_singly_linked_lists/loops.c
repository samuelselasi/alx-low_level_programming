#include "lists.h"

/**
 * loops - find loops
 * @head: first node
 * Return: 1 if loop, 0 otehrwise
 */

int loops(const listint_t *head)

{
	const listint_t *tmp_node1, *tmp_node2;

	tmp_node1 = tmp_node2 = head;

	while (tmp_node1 != NULL && tmp_node2 != NULL)
	{
		tmp_node1 = tmp_node1->next;
		tmp_node2 = tmp_node2->next->next;

		if (tmp_node1 == tmp_node2)
			return (1);
	}
	return (0);
}

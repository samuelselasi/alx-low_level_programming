#include "lists.h"

/**
 * node_counter - count no. of nodes
 * @head: first node
 * Return: no. of nodes
 */

int node_counter(const listint_t *head)
{
	int i = 0;
	const listint_t *tmp_node1, *tmp_node2;

	tmp_node1 = tmp_node2 = head;

	while (tmp_node1 != NULL && tmp_node2 != NULL)
	{
		tmp_node1 = tmp_node1->next;
		tmp_node2 = tmp_node2->next->next;
		i++;

		if (tmp_node1 == tmp_node2)
		{
			tmp_node1 = head;
			while (tmp_node1 != tmp_node2)
			{
				tmp_node1 = tmp_node1->next;
				tmp_node2 = tmp_node2->next;
				i++;
			}
			return (i);
		}
	}
	return (0);
}

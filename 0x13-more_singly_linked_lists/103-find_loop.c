#include "lists.h"

/**
 * find_listint_loop - look for loops in list
 * @head: first node
 * Return: address of loop or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp_node1 = head, *tmp_node2 = head;

	while (tmp_node1 && tmp_node2 && tmp_node2->next)
	{
		tmp_node1 = tmp_node1->next;
		tmp_node2 = tmp_node2->next->next;
		if (tmp_node1 == tmp_node2)
		{
			tmp_node1 = head;
			break;
		}
	}
	if (!tmp_node1 || !tmp_node2 || !tmp_node2->next)
		return (NULL);

	while (tmp_node1 != tmp_node2)
	{
		tmp_node1 = tmp_node1->next;
		tmp_node2 = tmp_node2->next;
	}
	return (tmp_node2);
}

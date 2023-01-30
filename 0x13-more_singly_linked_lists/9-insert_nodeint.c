#include "lists.h"

/**
 * insert_nodeint_at_index - insert nodeat index
 * @head: first node
 * @idx: index/ position of list
 * @n: no. of nodes
 *
 * Return: new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	if (*head == NULL && idx > 0)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
}

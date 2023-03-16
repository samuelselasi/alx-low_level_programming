#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of doubly linked list
 * @head: first node
 * @n: node index
 *
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;

		h->next = new_node;
	}
	else
		*head = new_node;

	new_node->prev = h;
	return (new_node);
}

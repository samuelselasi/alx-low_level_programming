#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of list
 * @head: first node
 * @index: nth node
 *
 * Return: nth node or NULL
 */

get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigened int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	while ((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	return (NULL);
}

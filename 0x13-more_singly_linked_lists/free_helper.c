#include "lists.h"

/**
 * free_helper - free a linekd list
 * @head: first node
 * Return: none
 */

void free_helper(listp_t **head)
{
	listp_t *tmp_node;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp_node = current) != NULL)
		{
			current = current->next;
			free(tmp_node);
		}
		*head = NULL;
	}
}

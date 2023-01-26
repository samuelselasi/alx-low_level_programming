#include "lists.h"

/**
 * free_list - free list_t
 * @head: first node
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

#include "lists.h"

/**
 * free_listint - free list
 * @head: first node
 * Return: none
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}

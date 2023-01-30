#include "lists.h"

/**
 * free_listint2 - free list2
 * @head: first node
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
}

#include "lists.h"
#include "free_helper.c"

/**
 * free_listint_safe - free linked list
 * @h: first node
 * Return: no. of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listp_t *ptr, *new_node, *tmp_node;
	listint_t *current;

	ptr = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));
		if (new_node == NULL)
			exit(98);
		new_node->p = (void *)*h;
		new_node->next = ptr;
		ptr = new_node;
		tmp_node = ptr;
		while (tmp_node->next != NULL)
		{
			tmp_node = tmp_node->next;
			if (*h == tmp_node->p)
			{
				*h = NULL;
				free_helper(&ptr);
				return (i);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		i++;
	}
	*h = NULL;
	free_helper(&ptr);
	return (i);
}

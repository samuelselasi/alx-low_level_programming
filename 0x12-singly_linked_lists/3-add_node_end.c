#include "lists.h"
#include "_strlen.c"

/**
 * add_node_end - add new node at end of list_t
 * @head: first node
 * @str: new node string
 *
 * Return: address of new element/ NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	int i;

	if (str == NULL)
		return (NULL);

	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	i = _strlen(str);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}

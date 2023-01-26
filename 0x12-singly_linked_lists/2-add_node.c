#include "lists.h"
#include "_strlen.c"

/**
 * add_node - add node to begining of list
 * @head: first node
 * @str: new node string
 *
 * Return: address of new element/ NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node;

	i = _strlen(str);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

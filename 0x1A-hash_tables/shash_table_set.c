#include "hash_tables.h"

/**
 * shash_table_set - add element to sorted hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_element, *tmp_element;
	char *tmp_value;
	unsigned long int KeyIndex;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	tmp_value = strdup(value);
	if (tmp_value == NULL)
		return (0);
	KeyIndex = key_index((const unsigned char *)key, ht->size);
	tmp_element = ht->shead;
	while (tmp_element)
	{
		if (strcmp(tmp_element->key, key) == 0)
		{
			free(tmp_element->value);
			tmp_element->value = tmp_value;
			return (1);
		}
		tmp_element = tmp_element->snext;
	}
	new_element = malloc(sizeof(shash_node_t));
	if (new_element == NULL)
	{
		free(tmp_value);
		return (0);
	}
	new_element->key = strdup(key);
	if (new_element->key == NULL)
	{
		free(tmp_value);
		free(new_element);
		return (0);
	}
	new_element->value = tmp_value;
	new_element->next = ht->array[KeyIndex];
	ht->array[KeyIndex] = new_element;
	if (ht->shead == NULL)
	{
		new_element->sprev = NULL;
		new_element->snext = NULL;
		ht->shead = new_element;
		ht->stail = new_element;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_element->sprev = NULL;
		new_element->snext = ht->shead;
		ht->shead->sprev = new_element;
		ht->shead = new_element;
	}
	else
	{
		tmp_element = ht->shead;
		while (tmp_element->snext != NULL &&
				strcmp(tmp_element->snext->key, key) < 0)
			tmp_element = tmp_element->snext
				;
		new_element->sprev = tmp_element;
		new_element->snext = tmp_element->snext;
		if (tmp_element->snext == NULL)
			ht->stail = new_element;
		else
			tmp_element->snext->sprev = new_element;
		tmp_element->snext = new_element;
	}
	return (1);
}

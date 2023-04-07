#include "hash_tables.h"

/**
 * hash_table_set - Add element to hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 *
 * Return: 1if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	char *tmp_value;
	unsigned long int i, KeyIndex;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	tmp_value = strdup(value);
	if (tmp_value == NULL)
		return (0);

	KeyIndex = key_index((const unsigned char *)key, ht->size);

	i = KeyIndex;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = tmp_value;
			return (1);
		}
		i++;
	}
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
	{
		free(tmp_value);
		return (0);
	}
	new_element->key = strdup(key);
	if (new_element->key == NULL)
	{
		free(new_element);
		return (0);
	}
	new_element->value = tmp_value;
	new_element->next = ht->array[KeyIndex];
	ht->array[KeyIndex] = new_element;
	return (1);
}

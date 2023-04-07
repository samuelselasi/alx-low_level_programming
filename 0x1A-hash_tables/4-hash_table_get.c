#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value associated with key
 * @ht: hash table
 * @key: the key to the requested value
 *
 * Return: value or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int KeyIndex;

	if (ht == NULL || key == NULL)
		return (NULL);

	KeyIndex = key_index((const unsigned char *)key, ht->size);
	if (KeyIndex >= ht->size)
		return (NULL);

	for (node = ht->array[KeyIndex]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);
}

#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 * Return: key/value pairs
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int printed = 0;

	if (ht == NULL)
		return;

	printf("{");

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (printed)
					printf(", ");

				printf("'%s': '%s'", node->key, node->value);
				printed = 1;
				node = node->next;
			}
		}
		i++;
	}
	printf("}\n");
}

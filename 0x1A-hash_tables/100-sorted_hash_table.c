#include "hash_tables.h"
#include "shash_table_set.c"

/**
 * shash_table_create - create a sorted hash table.
 * @size: size of sorted hash table
 * Return: newly created hash table or NULL if otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);
	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (sht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		sht->array[i] = NULL;
	sht->shead = NULL;
	sht->stail = NULL;

	return (sht);
}

/**
 * shash_table_get - retrieve the value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: the retrieved value or NULL if otherwose
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int KeyIndex;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	KeyIndex = key_index((const unsigned char *)key, ht->size);
	if (KeyIndex >= ht->size)
		return (NULL);
	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;
	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - print a sorted hash table in order
 * @ht: hash table
 * Return: None
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *sort_node;

	if (ht == NULL)
		return;
	sort_node = ht->shead;
	printf("{");
	while (sort_node != NULL)
	{
		printf("'%s': '%s'", sort_node->key, sort_node->value);
		sort_node = sort_node->snext;
		if (sort_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print a reversed sorted hash table
 * @ht: hash table
 * Return: None
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *rev_node;

	if (ht == NULL)
		return;
	rev_node = ht->stail;
	printf("{");
	while (rev_node != NULL)
	{
		printf("'%s': '%s'", rev_node->key, rev_node->value);
		rev_node = rev_node->sprev;
		if (rev_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete a sorted hash table.
 * @ht: hash table
 * Return: None
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *tmp_ht = ht;
	shash_node_t *node, *tmp_node;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		tmp_node = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp_node;
	}
	free(tmp_ht->array);
	free(tmp_ht);
}

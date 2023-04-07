#include "hash_tables.h"

/**
 * key_index - Get indexof a key
 * @key: key of hash table
 * @size: size of the array of the hash table
 *
 * Return: Idex at which key/value pair is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

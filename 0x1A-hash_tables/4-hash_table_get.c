#include "hash_tables.h"

/**
 * hash_table_get - Retrieve value associated hash table
 * @ht: pointer hash table
 * @key: key to get value
 * Return: key cannot be matched =NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);

	n = ht->array[ind];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;

	return ((n == NULL) ? NULL : n->value);
}

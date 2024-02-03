#include "hash_tables.h"

/**
 * hash_table_set - Add or update hash table
 * @ht:pointer hash table
 * @key: key add
 * @value: value associated key
 * Return: Upon
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *c_v;
	unsigned long int ind, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	c_v = strdup(value);
	if (c_v == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	for (x = ind; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = c_v;
			return (1);
		}
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(c_v);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = c_v;
	n->next = ht->array[ind];
	ht->array[ind] = n;

	return (1);
}

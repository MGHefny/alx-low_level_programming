#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table
 * @size: size array
 * Return: If error occurs NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int x;

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);

	h->size = size;
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		h->array[x] = NULL;

	return (h);
}

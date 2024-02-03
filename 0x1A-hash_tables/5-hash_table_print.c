#include "hash_tables.h"

/**
 * hash_table_print - Print hash table
 * @ht: pointer hash table print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned char cf = 0;
	unsigned long int x;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (cf == 1)
				printf(", ");

			n = ht->array[x];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			cf = 1;
		}
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * key_index - Get index at which
 * @key:  key get index
 * @size: size array hash table
 * Return: index the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

#include "hash_tables.h"

/**
 * key_index - Get the index at which
 * @key:  key to get the index
 * @size: size the array of the hash table
 *
 * Return: index  the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

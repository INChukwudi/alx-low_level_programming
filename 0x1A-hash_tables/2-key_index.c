#include "hash_tables.h"

/**
 * key_index - Retrieve the array index at which a key-value pair should
 *              be stored in the hast table
 * @key: key to get the index of
 * @size: size of the array of the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

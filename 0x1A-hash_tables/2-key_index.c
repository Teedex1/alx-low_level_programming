#include "hash_tables.h"
/**
 * key_index -  Get the index of a hash table
 * @key: The key to get index
 * @size: The size of an array
 * Return: djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

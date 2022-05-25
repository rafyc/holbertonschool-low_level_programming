#include "hash_tables.h"

/**
 * key_index - function that retreive the key
 * @key: the key to hash
 * @size: size of the table
 * Return: the index position of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = hash_djb2(key);

	value %= size;
	return (value);
}

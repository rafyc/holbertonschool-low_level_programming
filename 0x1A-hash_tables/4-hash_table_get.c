#include "hash_tables.h"

/**
 * hash_table_get - main function get element to hash table
 * @ht: The Hash table you want to retreive the key/value
 * @key: The key to retreive
 * Return: 1 if it succeeded, 0 otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

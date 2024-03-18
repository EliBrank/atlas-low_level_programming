#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to inspect
 * @key: key to check
 *
 * Return: value associated with inspected key, NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}

	return (NULL);
}

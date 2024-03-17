#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add to/update
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));

	if (key == NULL || new == NULL)
		return (0);

	index = key_index(key, 1024);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];

	ht->array[index] = new;

	return (1);
}

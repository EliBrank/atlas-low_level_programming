#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add to/update
 * @key: the key
 * @value: value associated with the key
 *
 * Return: pointer to the node containing the key-value pair, or NULL if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new, *tmp;

    if (key == NULL || ht == NULL)
        return (0);

    index = key_index((unsigned char *)key, ht->size);

    tmp = ht->array[index];
    while (tmp != NULL)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            if (tmp->value == NULL)
                return (0); // Memory allocation failed
            return (1);
        }
        tmp = tmp->next;
    }

    new = malloc(sizeof(hash_node_t));
    if (new == NULL)
        return (0); // Memory allocation failed

    new->key = strdup(key);
    if (new->key == NULL)
    {
        free(new);
        return (0); // Memory allocation failed
    }

    new->value = strdup(value);
    if (new->value == NULL)
    {
        free(new->key);
        free(new);
        return (0); // Memory allocation failed
    }

    new->next = ht->array[index];
    ht->array[index] = new;

    return (1);
}

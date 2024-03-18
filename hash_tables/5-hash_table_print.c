#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i;
	bool firstPrint = true;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (!firstPrint)
					printf(", ");
				printf("\'%s\': \'%s\'", tmp->key, tmp->value);
				tmp = tmp->next;
				firstPrint = false;
			}
		}
	}

	printf("}\n");
}

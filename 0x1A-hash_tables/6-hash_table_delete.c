#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * hash_table_delete - deletes a hash table.
  * @ht: the hash table
  * Return: void
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *current, *del;

	if (ht == NULL)
		return;

	for (n = 0; n < ht->size; n++)
	{
		current = ht->array[n];

		while (current != NULL)
		{
			del = current;
			current = current->next;
			free(del->key);
			free(del->value);
			free(del);
		}
	}
	free(ht->array);
	free(ht);
}

#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * hash_table_print - function that prints a hash table.
  * @ht: the hash table
  * Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *current;
	int print = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (n = 0; n < ht->size; n++)
	{
		current = ht->array[n];

		while (current != NULL)
		{
			if (print == 1)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			print = 1;
		}
	}
	printf("}\n");
}

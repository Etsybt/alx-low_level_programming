#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * hash_table_set - function that adds an element to the hash table.
  * @ht: he hash table you want to add or update the key/value to
  * @key: the key
  * @value: the value of the key
  * Return: 1 if it succeeded, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node;

	if (key == NULL || ht == NULL || *key == '\0')
	{
		return (0);
	}

	index = hash_djb2((const unsigned char *)key) % ht->size;
	hash_node = malloc(sizeof(hash_node_t));

	if (hash_node == NULL)
		return (0);

	hash_node->key = strdup(key);
	if (hash_node->key == NULL)
	{
		free(hash_node);
		return (0);
	}

	hash_node->value = strdup(value);
	if (hash_node->value == NULL)
	{
		free(hash_node->key);
		free(hash_node);
		return (0);
	}

	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;

	return (1);
}

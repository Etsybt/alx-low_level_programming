#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * shash_table_create - creates a hash table
  * @size: the hashtable size
  * Return: a pointer to the new hashtable
  */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table = NULL;
	unsigned long int n = 0;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(shash_table_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		hash_table->array[n] = NULL;
	}

	hash_table->shead = NULL;
	hash_table->stail = NULL;

	return (hash_table);
}

/**
  * shash_table_set - insert a key/value pair in ht
  * @ht: hashtable
  * @key: the key
  * @value: the value
  * Return: 1 on success, 0 on failure
  */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	shash_node_t *hash_node = NULL, *curr = NULL, *prev = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	curr = ht->array[i];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			if (curr->value == NULL)
				return (0);
			return (1);
		}
		curr = curr->next;
	}
	hash_node = malloc(sizeof(shash_node_t));
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
	curr = ht->shead;

	while (curr != NULL && strcmp(curr->key, key) < 0)
	{
		prev = curr;
		curr = curr->snext;
	}

	if (prev == NULL)
	{
		hash_node->snext = curr;
		hash_node->sprev = NULL;
		ht->shead = hash_node;
	}
	else
	{
		hash_node->snext = curr;
		hash_node->sprev = prev;
		prev->snext = hash_node;
	}

	if (curr != NULL)
		curr->sprev = hash_node;

	if (hash_node->snext == NULL)
		ht->stail = hash_node;

	hash_node->next = ht->array[i];
	ht->array[i] = hash_node;

	return (1);
}


/**
  * shash_table_get - gets the value of the key
  * @ht: the hashtable
  * @key: the key
  * Return: the key's value
  */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	shash_node_t *current = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	current = ht->array[i];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}


/**
  * shash_table_print - prints the ht
  * @ht: the hashtable
  * Return: void
  */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	current = ht->shead;

	if (ht == NULL)
		return;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
  * shash_table_print_rev - prints the ht in reverse
  * @ht: the hashtable
  * Return: void
  */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	current = ht->stail;

	if (ht == NULL)
		return;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
  * shash_table_delete - deletes the ht
  * @ht: the hashtable
  * Return: void
  */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr, *del;
	unsigned long int n;

	if (ht == NULL)
		return;

	curr = ht->shead;
	for (n = 0; n < ht->size; n++)
	{
		curr = ht->array[n];
		while (curr != NULL)
		{
			del = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = del;
		}
	}
	free(ht->array);

	free(ht);
}

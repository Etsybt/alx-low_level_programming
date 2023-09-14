#include "lists.h"
/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
  * @head: of the list
  * @n: count
  * Return: the address of the new element, or NULL if it failed
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *next_node, *current_node;

	next_node = malloc(sizeof(dlistint_t));
	if (next_node == NULL)
		return (NULL);

	next_node->n = n;
	next_node->next = NULL;

	if (*head == NULL)
	{
		next_node->prev = NULL;
		*head = next_node;
		return (next_node);
	}
	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = next_node;
	next_node->prev = current_node;

	return (next_node);
}

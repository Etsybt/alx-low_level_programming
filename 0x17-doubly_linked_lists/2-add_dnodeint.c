#include "lists.h"
/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
  * @head: of the list
  * @n: count
  * Return: the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *next_node;

	next_node = malloc(sizeof(dlistint_t));
	if (next_node == NULL)
		return (NULL);

	next_node->n = n;
	next_node->next = *head;
	next_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = next_node;

	*head = next_node;

	return (next_node);
}

#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: head of the node
  * @n: int
  * Return: new node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end_node = (listint_t *)malloc(sizeof(listint_t)), *h = *head;

	if (new_end_node == NULL)
		return (NULL);

	new_end_node->n = n;
	new_end_node->next = NULL;

	if (h != NULL)
	{
		while (h->next)
			h = h->next;
		h->next = new_end_node;
	}
	return (new_end_node);

}

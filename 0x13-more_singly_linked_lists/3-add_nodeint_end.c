#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: head of the node
  * @n: int
  * Return: new node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *h = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (h != NULL)
	{
		while (h->next)
			h = h->next;
		h->next = newNode;
	}
	else
		*head = newNode;

	return (newNode);

}

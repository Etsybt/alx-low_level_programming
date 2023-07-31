#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list.
  * @head: head of the node
  * @n: int
  * Return: new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: head of the node
  * @n: int
  * Return: new node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_end_node == NULL)
		return (NULL);

	new_end_node->n = n;
	new_end_node->next = NULL;

	if (*head == NULL)
		*head = new_end_node;
	else
	{
		listsint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_end_node;
	}
	return (new_end_node);

}

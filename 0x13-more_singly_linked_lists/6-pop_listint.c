#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list,
  * and returns the head node’s data (n).
  * @head: head node
  * Return: data and 0 if empty
  */

int pop_listint(listint_t **head)
{
	listint_t *node1 = *head;
	int data;

	if (node1 == NULL)
		return (0);

	data = (*head)->next;
	*head = node1->next;
	free(node1);
	return (data);
}

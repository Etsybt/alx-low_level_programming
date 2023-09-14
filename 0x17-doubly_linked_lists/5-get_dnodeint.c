#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
  * @head: of the list
  * @index: of the node from 0
  * Return: if the node does not exist, return NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	for (; head != NULL; x++)
	{
		if (x == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}

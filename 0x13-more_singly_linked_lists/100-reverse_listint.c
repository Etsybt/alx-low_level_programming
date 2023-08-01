#include "lists.h"
/**
  * reverse_listint - reverses a listint_t linked list
  * @head: head node
  * Return: pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous/* prev node */, *following/* following node */;

	if (head == NULL)
		return (NULL);

	previous = NULL;
	while ((*head)->next != NULL)
	{
		following = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = following;
	}
	*head = previous;
	return (*head);
}

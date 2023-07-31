#include "lists.h"

/**
  * free_listint2 - frees a listint_t list.
  * @head: haad node
  */
void free_listint2(listint_t **head)
{
	listint_t *current;/* current node */
	listint_t *temp;/* next node */

	if (head == NULL)
		return;

	current = *head;
	temp = (*head)->next;

	while (temp)
	{
		free(current);
		current = temp;
		temp = temp->next;
	}
	free(current);
	*head = NULL;
}

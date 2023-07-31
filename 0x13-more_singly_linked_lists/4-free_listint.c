#include "lists.h"

/**
  * free_listint - frees a listint_t list.
  * @head: head of node
  * Return: a freed list
  */
void free_listint(listint_t *head)
{
	listint_t *current;/* current node */
	lisint_t *temp;/* next node */

	if (head != NULL)
	{
		current = head;
		temp = head->next;
		while (temp != NULL)
		{
			free(current);
			current = temp;
			temp = temp->next;
		}
		free(current);
	}
}

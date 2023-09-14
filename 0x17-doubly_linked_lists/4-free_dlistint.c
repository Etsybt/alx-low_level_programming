#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}

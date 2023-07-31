#include "lists.h"
/**
  * delete_nodeint_at_index - deletes the node at
  * index index of a listint_t linked list.
  * @head: head node
  * @index:  index of the node that should be deleted. Index starts at 0
  * Return: 1 on success
  * -1 if failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current;
	listint_t *insert = *head;

	if (insert == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(insert);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (insert->next == NULL)
			return (-1);

		insert = insert->next;
	}

	current = insert->next;
	insert->next = current->next;
	free(current);
	return (1);
}

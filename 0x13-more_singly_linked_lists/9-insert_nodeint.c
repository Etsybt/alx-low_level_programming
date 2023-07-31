#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: head node
  * @idx: index of the list where the new node should be added.
  * Index starts at 0
  * @n: int
  * Return: new node or NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	unsigned int i;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (*head == NULL && idx == 0)
	{
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}

	if (*head != NULL && idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	listint_t *current = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(newNode);
			return (NULL);
		}
		current = current->next;
	}
	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}


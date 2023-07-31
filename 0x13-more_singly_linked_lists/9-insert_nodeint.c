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
	listint_t *insert = *head;
	unsigned int i;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = insert;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (insert == NULL || insert->next == NULL)
			return (NULL);

		insert = insert->next;
	}
	newNode->next = insert->next;
	insert->next = newNode;

	return (newNode);
}


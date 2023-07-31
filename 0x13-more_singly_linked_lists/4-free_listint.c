#include "lists.h"

/**
  * free_listint - frees a listint_t list.
  * @head: head of node
  * Return: a freed list
  */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listsint_t *temp = head;

		head = head->next;
		free(temp);
	}
}

#include "lists.h"
/**
  * free_listint_safe - free lists with a loop
  * @h: head
  * Return:  the size of the list that was free’d
  */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *nextNode;

	if (h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
		size++;
	}
	*h = NULL;

	return (size);
}

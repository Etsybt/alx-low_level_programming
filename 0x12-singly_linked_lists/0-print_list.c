#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list
  * @h: head
  * Return: elements
  */

size_t print_list(const list_t *h)
{
	list_t *current = h;

	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next
	}
	if (str == NULL)
	{
		printf("[0] (nil)");
	}
	printf("\n");
}

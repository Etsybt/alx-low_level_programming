#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list
  * @h: head
  * Return: count
  */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		count += 1;
		current = current->next;
	}
	return (count);
}

#include "lists.h"
/**
  * print_listint_safe - prints a listint_t linked list.
  * @head: head node
  * Return: count
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	
	if (head == NULL)
		exit(98);

	while (current != NULL)
	{
		printf("[%p] %i\n", (void *)current, current->n);
		current = current->next;
		count++;
	}
	return (count);
}

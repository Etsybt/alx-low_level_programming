#include "lists.h"

/**
  * add_node_end - adds a new node at the end of list_t
  * @head: the head node
  * @str: string
  * Return: a new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *str2;
	list_t *newNode, *end;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	str2 = strdup(str);
	if (str2 == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	newNode->str = str2;
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = newNode;
	}
	return (*head);
}

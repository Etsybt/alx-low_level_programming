#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: head of the node
  * @str: string
  * Return: the new node
  */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *str2;
	list_t *newNode;

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
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}

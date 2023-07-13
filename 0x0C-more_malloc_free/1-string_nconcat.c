#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * string_nconcat - concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * @n: integer
  * Return: pointer or null
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, i;

	len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; s2[i] && i < n; i++)
		ptr[len++] = s2[i];

	concat[len] = '\0';
	return (concat);
}

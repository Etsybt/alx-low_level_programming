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
	char *str;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	str = malloc(len1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[j] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}

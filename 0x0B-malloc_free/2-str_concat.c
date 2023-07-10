#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * str_concat - concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * Return: Null
  */
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	char *result = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	if (result == NULL || (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}

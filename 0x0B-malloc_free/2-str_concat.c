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

	if (result == NULL)
	{
		return (NULL);
	}
	if (s1 == NUll)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}

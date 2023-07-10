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
	char *s3;
	unsigned int i, j, len1, len2;

	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	s3 = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i]; != '\0'; i++)
		s3[i] = s1[i];
	for (; s2[j] != '\0'; i++)
	{
		s3[i] = s2[j];
		j++;
	}
	return (s3);
}

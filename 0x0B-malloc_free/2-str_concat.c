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

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}

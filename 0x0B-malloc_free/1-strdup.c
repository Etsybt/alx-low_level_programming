#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * *_strdup - returns a pointer to a newly allocated space in memory
  * which contains a copy of the string given as a parameter
  * @str: string
  * Return: Null if str = Null
  * pointer if not
  */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i, length;

	length = 0;
	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
		length++;
	str2 = malloc(sizeof(char) * (length + 1));
	if (str2 == NULL)
	{
		return (NULL);
	}
	while ((str2[i] = str[i]) != '\0')
		i++;
	return (str2);
}

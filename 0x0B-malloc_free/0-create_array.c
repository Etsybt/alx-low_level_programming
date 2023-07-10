#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * *create_array - creates an array
  * @size: of arr
  * @c: character
  * Return: Null if size = 0
  * or a pointer to the array,
  */
char *create_array(unsigned int size, char c)
{
	char *array = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

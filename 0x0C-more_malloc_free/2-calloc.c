#include "main.h"
#include <stdio.h>
#include <stdlib.h><
/**
  * _calloc - allocates memory for an array
  * @nmemb: elements of an array
  * @size: size of the array
  * Return: pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *grid;
	unsigned int i, j;

	j = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	grid = malloc(j);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (j); i++)
	{
		grid[i] = 0;
	}
	return (grid);
}

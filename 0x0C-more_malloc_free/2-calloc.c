#include "main.h"
/**
  * _calloc - allocates memory for an array
  * @nmemb: elements of an array
  * @size: size of the array
  * Return: pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *grid;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	grid = malloc(nmemb * size);

	if (grid != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			grid[i] = 0;
		}
		return (grid);
	}
	else
	{
		return (NULL);
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: width
  * @height: height
  * Return: NULL
  */
int **alloc_grid(int width, int height)
{
	int **grid = (int **) malloc(height * sizeof(int *));
	int i, j, n;

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (j = 0; j < width; j++)
		{
			grid[n][j] = 0;
		}
	}
	return (grid);
}

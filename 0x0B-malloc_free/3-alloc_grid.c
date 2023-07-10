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
	int **grid;
	int i, j, n;
	int *p;

	if (width <= 0; || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(grid + i) = (int *) malloc(width * sizeof(int));
		if (*(grid + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = grid[i];
				free(p);
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

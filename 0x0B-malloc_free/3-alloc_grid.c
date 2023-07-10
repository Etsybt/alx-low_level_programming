#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - returns pointer to a 2 dimensional array of integers
  * @width: width
  * @height: height
  * Return: NULL
  */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, j, n;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = (int **)malloc(height * sizeof(int *));
	if (g == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(g + i) = (int *) malloc(width * sizeof(int));
		if (*(g + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = g[i];
				free(p);
			}
			free(g);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (j = 0; j < width; j++)
		{
			g[n][j] = 0;
		}
	}
	return (g);
}

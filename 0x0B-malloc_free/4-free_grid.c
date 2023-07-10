#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid - frees a 2 dimensional grid previously created by alloc_grid
  * @grid: grid
  * @height: height
  * Return: NULL
  */
void free_grid(int **grid, int height)
{
	int n;
	int *p;

	for (n = 0; n < height; n++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}


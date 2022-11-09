#include "main.h"

/**
  * free_grid - frees array created by alloc_grid
  * @grid: takes in width of the two dimensional grid
  * @height: height of the grid
  * Return: free grid
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

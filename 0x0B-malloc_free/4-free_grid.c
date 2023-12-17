#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free two dimential arrays
 *@grid: the 2d grid
 *@height: height
 *Return: pointer to function
 */

void free_grid(int **grid, int height)
{
	int i;

	{
		for (i = 0; i < height; i++)
			free(grid[i]);

		free(grid);
	}
}
